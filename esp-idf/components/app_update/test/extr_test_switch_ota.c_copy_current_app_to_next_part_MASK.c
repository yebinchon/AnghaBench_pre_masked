
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int address; int subtype; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_handle_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__ const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_8(const esp_partition_t *VAR_2, const esp_partition_t *VAR_3)
{
    FUNC_6(((void*)0));
    FUNC_1(((void*)0), VAR_3);
    FUNC_0(VAR_1, "Writing to partition subtype %d at offset 0x%x", VAR_3->subtype, VAR_3->address);

    esp_ota_handle_t VAR_4 = 0;
    FUNC_2(FUNC_4(VAR_3, VAR_0, &VAR_4));

    FUNC_3(VAR_4, VAR_2);

    FUNC_2(FUNC_5(VAR_4));
    FUNC_2(FUNC_7(VAR_3));
}
