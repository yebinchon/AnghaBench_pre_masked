
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef scalar_t__ esp_partition_subtype_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int ,scalar_t__,int *) ;
 int * FUNC_3 (int const*) ;

const esp_partition_t* FUNC_4(const esp_partition_t *VAR_3)
{
    const esp_partition_t *VAR_4 = ((void*)0);
    bool VAR_5 = 0;
    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_1();
    } else {
        VAR_3 = FUNC_3(VAR_3);
    }
    FUNC_0 (VAR_3 != ((void*)0));
    for (esp_partition_subtype_t VAR_6 = VAR_0;
         VAR_6 != VAR_1;
         VAR_6++) {
        const esp_partition_t *VAR_7 = FUNC_2(VAR_2, VAR_6, ((void*)0));
        if (VAR_7 == ((void*)0)) {
            continue;
        }

        if (VAR_4 == ((void*)0)) {


            VAR_4 = VAR_7;
        }

        if (VAR_7 == VAR_3) {

            VAR_5 = 1;
        }
        else if (VAR_5) {
            return VAR_7;
        }
    }

    return VAR_4;

}
