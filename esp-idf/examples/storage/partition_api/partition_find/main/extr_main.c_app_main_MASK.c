
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int address; int label; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int * esp_partition_iterator_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*) ;

void FUNC_6(void)
{
    extern const char VAR_8[] asm("_binary_partitions_example_csv_start");
    extern const char VAR_9[] asm("_binary_partitions_example_csv_end");

    FUNC_0(VAR_7, "Printing partition table csv file contents for reference...\n\n%.*s", VAR_9 - VAR_8 + 1, VAR_8);



    FUNC_0(VAR_7, "----------------Find partitions---------------");


    FUNC_5(VAR_6, VAR_3, ((void*)0));
    FUNC_5(VAR_6, VAR_4, ((void*)0));
    FUNC_5(VAR_5, VAR_1, ((void*)0));

    FUNC_5(VAR_6, VAR_2, ((void*)0));

    FUNC_0(VAR_7, "Find second FAT partition by specifying the label");

    FUNC_5(VAR_6, VAR_2, "storage2");



    FUNC_0(VAR_7, "----------------Iterate through partitions---------------");

    esp_partition_iterator_t VAR_10;

    FUNC_0(VAR_7, "Iterating through app partitions...");
    VAR_10 = FUNC_1(VAR_5, VAR_0, ((void*)0));



    for (; VAR_10 != ((void*)0); VAR_10 = FUNC_4(VAR_10)) {
        const esp_partition_t *VAR_11 = FUNC_2(VAR_10);
        FUNC_0(VAR_7, "\tfound partition '%s' at offset 0x%x with size 0x%x", VAR_11->label, VAR_11->address, VAR_11->size);
    }

    FUNC_3(VAR_10);

    FUNC_0(VAR_7, "Iterating through data partitions...");
    VAR_10 = FUNC_1(VAR_6, VAR_0, ((void*)0));



    for (; VAR_10 != ((void*)0); VAR_10 = FUNC_4(VAR_10)) {
        const esp_partition_t *VAR_12 = FUNC_2(VAR_10);
        FUNC_0(VAR_7, "\tfound partition '%s' at offset 0x%x with size 0x%x", VAR_12->label, VAR_12->address, VAR_12->size);
    }


    FUNC_3(VAR_10);

    FUNC_0(VAR_7, "Example end");
}
