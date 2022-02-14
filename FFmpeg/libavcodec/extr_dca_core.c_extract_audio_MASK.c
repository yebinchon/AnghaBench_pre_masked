
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int** quant_index_sel; int gb; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static inline int FUNC_5(DCACoreDecoder *VAR_4, int32_t *VAR_5, int VAR_6, int VAR_7)
{
    FUNC_0(VAR_6 >= 0 && VAR_6 <= VAR_0);

    if (VAR_6 == 0) {

        FUNC_2(VAR_5, 0, VAR_2 * sizeof(*VAR_5));
        return 0;
    }

    if (VAR_6 <= VAR_1) {
        int VAR_8 = VAR_4->quant_index_sel[VAR_7][VAR_6 - 1];
        if (VAR_8 < VAR_3[VAR_6 - 1]) {

            return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_8);
        }
        if (VAR_6 <= 7) {

            return FUNC_3(VAR_4, VAR_5, VAR_6);
        }
    }


    FUNC_1(&VAR_4->gb, VAR_5, VAR_2, VAR_6 - 3);
    return 0;
}
