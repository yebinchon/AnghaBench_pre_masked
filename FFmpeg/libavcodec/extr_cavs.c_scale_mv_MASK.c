
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int x; int y; int ref; } ;
typedef TYPE_1__ cavs_vector ;
struct TYPE_6__ {int* scale_den; } ;
typedef TYPE_2__ AVSContext ;


 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(AVSContext *VAR_0, int *VAR_1, int *VAR_2,
                            cavs_vector *VAR_3, int VAR_4)
{
    int64_t VAR_5 = VAR_0->scale_den[FUNC_0(VAR_3->ref, 0)];
    *VAR_1 = (VAR_3->x * VAR_4 * VAR_5 + 256 + FUNC_1(VAR_3->x)) >> 9;
    *VAR_2 = (VAR_3->y * VAR_4 * VAR_5 + 256 + FUNC_1(VAR_3->y)) >> 9;
}
