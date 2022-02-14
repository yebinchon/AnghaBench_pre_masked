
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int store_data ;
typedef int spi_flash_mmap_handle_t ;
typedef int read_data ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__ const*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__ const*,int ,int ,int ,void const**,int *) ;
 int FUNC_6 (TYPE_1__ const*,int ,char const*,int) ;
 int FUNC_7 (char*,void const*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

void FUNC_10(void)
{
    const esp_partition_t *VAR_4 = FUNC_4(VAR_1, VAR_0, "storage");
    FUNC_2(VAR_4 != ((void*)0));

    static const char VAR_5[] = "ESP-IDF Partition Memory Map Example";


    FUNC_0(FUNC_3(VAR_4, 0, VAR_4->size));
    FUNC_0(FUNC_6(VAR_4, 0, VAR_5, sizeof(VAR_5)));
    FUNC_1(VAR_3, "Written sample data to partition: %s", VAR_5);

    const void *VAR_6;
    spi_flash_mmap_handle_t VAR_7;


    FUNC_0(FUNC_5(VAR_4, 0, VAR_4->size, VAR_2, &VAR_6, &VAR_7));
    FUNC_1(VAR_3, "Mapped partition to data memory address %p", VAR_6);


    char VAR_8[sizeof(VAR_5)];
    FUNC_7(VAR_8, VAR_6, sizeof(VAR_8));
    FUNC_1(VAR_3, "Read sample data from partition using mapped memory: %s", (char*) VAR_8);

    FUNC_2(FUNC_9(VAR_5, VAR_8) == 0);
    FUNC_1(VAR_3, "Data matches");


    FUNC_8(VAR_7);
    FUNC_1(VAR_3, "Unmapped partition from data memory");

    FUNC_1(VAR_3, "Example end");
}
