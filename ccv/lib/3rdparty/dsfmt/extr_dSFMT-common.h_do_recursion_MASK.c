
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int* u; } ;
typedef TYPE_1__ dw128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) inline static void FUNC_0(dw128_t *VAR_4, dw128_t *VAR_5, dw128_t * VAR_6,
    dw128_t *VAR_7) {
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_8 = VAR_5->u[0];
    VAR_9 = VAR_5->u[1];
    VAR_10 = VAR_7->u[0];
    VAR_11 = VAR_7->u[1];
    VAR_7->u[0] = (VAR_8 << VAR_2) ^ (VAR_11 >> 32) ^ (VAR_11 << 32) ^ VAR_6->u[0];
    VAR_7->u[1] = (VAR_9 << VAR_2) ^ (VAR_10 >> 32) ^ (VAR_10 << 32) ^ VAR_6->u[1];
    VAR_4->u[0] = (VAR_7->u[0] >> VAR_3) ^ (VAR_7->u[0] & VAR_0) ^ VAR_8;
    VAR_4->u[1] = (VAR_7->u[1] >> VAR_3) ^ (VAR_7->u[1] & VAR_1) ^ VAR_9;
}
