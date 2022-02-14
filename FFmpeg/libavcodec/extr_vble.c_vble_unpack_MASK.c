
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int* val; } ;
typedef TYPE_1__ VBLEContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(VBLEContext *VAR_0, GetBitContext *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;
    static const uint8_t VAR_4[256] = {
        8,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        5,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        6,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        5,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        7,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        5,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        6,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
        5,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,4,0,1,0,2,0,1,0,3,0,1,0,2,0,1,0,
    };


    for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {

        int VAR_5 = FUNC_2(VAR_1, 8);


        if (VAR_5) {
            VAR_5 = VAR_4[VAR_5];
            FUNC_3(VAR_1, VAR_5 + 1);
            VAR_0->val[VAR_2] = VAR_5;
        } else {
            FUNC_3(VAR_1, 8);
            if (!FUNC_0(VAR_1))
                return -1;
            VAR_0->val[VAR_2] = 8;
        }
        VAR_3 += VAR_0->val[VAR_2];
    }


    if (FUNC_1(VAR_1) < VAR_3)
        return -1;
    return 0;
}
