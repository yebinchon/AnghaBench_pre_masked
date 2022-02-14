
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int elements; } ;
typedef TYPE_1__ Table ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_3, Table *VAR_4, unsigned int VAR_5[VAR_1], int VAR_6)
{
    int VAR_7;
    VAR_4->elements = 1;
    VAR_5[0] = 0;
    if (!FUNC_2(VAR_3)) {
        for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++) {
            int VAR_8 = FUNC_0(VAR_4->elements) + 1;
            VAR_5[VAR_7] = FUNC_1(VAR_3, VAR_8);
            if (VAR_5[VAR_7] == VAR_4->elements) {
                VAR_4->elements++;
                if (VAR_4->elements >= VAR_2)
                    return VAR_0;
            } else if (VAR_5[VAR_7] > VAR_4->elements) {
                return VAR_0;
            }
        }
    } else {
        FUNC_3(VAR_5, 0, sizeof(*VAR_5) * VAR_1);
    }
    return 0;
}
