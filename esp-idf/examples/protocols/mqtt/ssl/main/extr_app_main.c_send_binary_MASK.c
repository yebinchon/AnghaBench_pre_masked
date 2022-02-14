
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spi_flash_mmap_handle_t ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_mqtt_client_handle_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,void const*,int ,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__ const*,int ,int ,int ,void const**,int *) ;

__attribute__((used)) static void FUNC_4(esp_mqtt_client_handle_t VAR_2)
{
    spi_flash_mmap_handle_t VAR_3;
    const void *VAR_4;
    const esp_partition_t* VAR_5 = FUNC_2();
    FUNC_3(VAR_5, 0, VAR_5->size, VAR_0, &VAR_4, &VAR_3);
    int VAR_6 = FUNC_1(VAR_2, "/topic/binary", VAR_4, VAR_5->size, 0, 0);
    FUNC_0(VAR_1, "binary sent with msg_id=%d", VAR_6);
}
