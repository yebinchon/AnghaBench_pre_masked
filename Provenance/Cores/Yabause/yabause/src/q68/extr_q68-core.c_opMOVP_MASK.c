
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_6__ {int* A; int* D; } ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_4, uint32_t VAR_5)
{
    VAR_0;
    VAR_1;
    int VAR_6 = VAR_5 & 0x0080;
    int VAR_7 = VAR_5 & 0x0040;
    int16_t VAR_8 = FUNC_0(VAR_4);
    uint32_t VAR_9 = VAR_4->A[VAR_3] + VAR_8;

    if (VAR_6) {
        uint32_t VAR_10 = VAR_4->D[VAR_2];
        if (VAR_7) {
            FUNC_2(VAR_4, VAR_9+0, VAR_10>>24);
            FUNC_2(VAR_4, VAR_9+2, VAR_10>>16);
            FUNC_2(VAR_4, VAR_9+4, VAR_10>> 8);
            FUNC_2(VAR_4, VAR_9+6, VAR_10>> 0);
        } else {
            FUNC_2(VAR_4, VAR_9+0, VAR_10>> 8);
            FUNC_2(VAR_4, VAR_9+2, VAR_10>> 0);
        }
    } else {
        uint32_t VAR_11;
        if (VAR_7) {
            VAR_11 = FUNC_1(VAR_4, VAR_9+0) << 24;
            VAR_11 |= FUNC_1(VAR_4, VAR_9+2) << 16;
            VAR_11 |= FUNC_1(VAR_4, VAR_9+4) << 8;
            VAR_11 |= FUNC_1(VAR_4, VAR_9+6) << 0;
        } else {
            VAR_11 = FUNC_1(VAR_4, VAR_9+0) << 8;
            VAR_11 |= FUNC_1(VAR_4, VAR_9+2) << 0;
        }
        VAR_4->D[VAR_2] = VAR_11;
    }

    return VAR_7 ? 24 : 16;
}
