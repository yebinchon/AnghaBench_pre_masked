
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef int esp_ota_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int const*,int ,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 () ;

__attribute__((used)) static const esp_partition_t* FUNC_8(void)
{
    const esp_partition_t *VAR_1 = FUNC_7();
    const esp_partition_t* VAR_2 = FUNC_5(((void*)0));
    FUNC_0(VAR_2);
    esp_ota_handle_t VAR_3 = 0;
    FUNC_1(FUNC_3(VAR_2, VAR_0, &VAR_3));
    FUNC_2(VAR_3, VAR_1);
    FUNC_1(FUNC_4(VAR_3));
    FUNC_1(FUNC_6(VAR_2));
    return VAR_2;
}
