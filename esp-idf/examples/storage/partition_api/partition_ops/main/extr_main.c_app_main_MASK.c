
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int store_data ;
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
 int FUNC_5 (TYPE_1__ const*,int ,char*,int) ;
 int FUNC_6 (TYPE_1__ const*,int ,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int,int) ;

void FUNC_9(void)
{
    const esp_partition_t *VAR_4 = FUNC_4(VAR_1, VAR_0, "storage");
    FUNC_2(VAR_4 != ((void*)0));

    static char VAR_5[] = "ESP-IDF Partition Operations Example (Read, Erase, Write)";
    static char VAR_6[sizeof(VAR_5)];


    FUNC_8(VAR_6, 0xFF, sizeof(VAR_6));
    FUNC_0(FUNC_3(VAR_4, 0, VAR_4->size));


    FUNC_0(FUNC_6(VAR_4, 0, VAR_5, sizeof(VAR_5)));
    FUNC_1(VAR_3, "Written data: %s", VAR_5);


    FUNC_0(FUNC_5(VAR_4, 0, VAR_6, sizeof(VAR_6)));
    FUNC_2(FUNC_7(VAR_5, VAR_6, sizeof(VAR_6)) == 0);
    FUNC_1(VAR_3, "Read data: %s", VAR_6);



    FUNC_0(FUNC_3(VAR_4, 0, VAR_2));


    FUNC_8(VAR_5, 0xFF, sizeof(VAR_6));
    FUNC_0(FUNC_5(VAR_4, 0, VAR_6, sizeof(VAR_6)));
    FUNC_2(FUNC_7(VAR_5, VAR_6, sizeof(VAR_6)) == 0);

    FUNC_1(VAR_3, "Erased data");

    FUNC_1(VAR_3, "Example end");
}
