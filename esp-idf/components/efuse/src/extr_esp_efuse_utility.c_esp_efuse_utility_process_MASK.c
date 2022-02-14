
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {scalar_t__ efuse_block; int bit_count; int bit_start; } ;
typedef TYPE_1__ esp_efuse_desc_t ;
typedef scalar_t__ (* efuse_func_proc_t ) (int,scalar_t__,int,int,void*,int*) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (size_t,int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_1__ const**) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int) ;

esp_err_t FUNC_9(const esp_efuse_desc_t* VAR_3[], void* VAR_4, size_t VAR_5, efuse_func_proc_t VAR_6)
{
    esp_err_t VAR_7 = VAR_1;
    int VAR_8 = 0;


    int VAR_9 = FUNC_5(VAR_3);
    int VAR_10 = (VAR_5 == 0) ? VAR_9 : FUNC_2(VAR_5, VAR_9);

    int VAR_11 = 0;
    while (VAR_7 == VAR_1 && VAR_10 > VAR_8 && VAR_3[VAR_11] != ((void*)0)) {
        if (FUNC_4(VAR_3[VAR_11]->efuse_block, VAR_3[VAR_11]->bit_start, VAR_3[VAR_11]->bit_count) == 0) {
            FUNC_1(VAR_2, "Range of data does not match the coding scheme");
            VAR_7 = VAR_0;
        }
        int VAR_12 = 0;
        int VAR_13;
        while (VAR_7 == VAR_1 && VAR_10 > VAR_8 &&
                (VAR_13 = FUNC_7(VAR_3[VAR_11]->bit_start, VAR_3[VAR_11]->bit_count, VAR_12)) != -1) {

            int VAR_14 = FUNC_8(VAR_3[VAR_11]->bit_start, VAR_12);
            int VAR_15 = FUNC_6(VAR_3[VAR_11]->bit_start, VAR_3[VAR_11]->bit_count, VAR_12);
            if ((VAR_8 + VAR_15) > VAR_10) {
                VAR_15 = VAR_10 - VAR_8;
            }
            FUNC_0(VAR_2, "In EFUSE_BLK%d__DATA%d_REG is used %d bits starting with %d bit",
                    (int)VAR_3[VAR_11]->efuse_block, VAR_13, VAR_15, VAR_14);
            VAR_7 = VAR_6(VAR_13, VAR_3[VAR_11]->efuse_block, VAR_14, VAR_15, VAR_4, &VAR_8);
            ++VAR_12;
        }
        VAR_11++;
    }
    FUNC_3(VAR_8 <= VAR_10);
    return VAR_7;
}
