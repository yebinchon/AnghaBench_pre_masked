
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef scalar_t__ esp_partition_subtype_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,scalar_t__,int *) ;

__attribute__((used)) static const esp_partition_t *FUNC_2(void)
{



    const esp_partition_t *VAR_6 = FUNC_1(VAR_4, VAR_0, ((void*)0));
    if (VAR_6 != ((void*)0)) {
        return VAR_6;
    }


    for (esp_partition_subtype_t VAR_7 = VAR_2; VAR_7 != VAR_1; VAR_7++) {
        VAR_6 = FUNC_1(VAR_4, VAR_7, ((void*)0));
        if (VAR_6 != ((void*)0)) {
            return VAR_6;
        }
    }


    VAR_6 = FUNC_1(VAR_4, VAR_3, ((void*)0));
    if (VAR_6 != ((void*)0)) {
        return VAR_6;
    }

    FUNC_0(VAR_5, "invalid partition table, no app partitions");
    return ((void*)0);
}
