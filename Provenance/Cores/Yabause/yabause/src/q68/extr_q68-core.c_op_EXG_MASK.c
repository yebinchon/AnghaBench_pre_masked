
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* D; int* A; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_1(Q68State *VAR_4, uint32_t VAR_5)
{
    VAR_0;
    VAR_1;
    const int VAR_6 = VAR_5 & 0xF8;

    if (VAR_6 == 0x40) {
        const uint32_t VAR_7 = VAR_4->D[VAR_2];
        VAR_4->D[VAR_2] = VAR_4->D[VAR_3];
        VAR_4->D[VAR_3] = VAR_7;
    } else if (VAR_6 == 0x48) {
        const uint32_t VAR_8 = VAR_4->A[VAR_2];
        VAR_4->A[VAR_2] = VAR_4->A[VAR_3];
        VAR_4->A[VAR_3] = VAR_8;
    } else if (VAR_6 == 0x88) {
        const uint32_t VAR_9 = VAR_4->D[VAR_2];
        VAR_4->D[VAR_2] = VAR_4->A[VAR_3];
        VAR_4->A[VAR_3] = VAR_9;
    } else {
        return FUNC_0(VAR_4, VAR_5);
    }
    return 6;
}
