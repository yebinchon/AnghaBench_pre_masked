
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int esp_flash_t ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 char* FUNC_2 () ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (size_t*,size_t*) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int *,char*,char*) ;
 char* FUNC_12 (char*,char) ;

void FUNC_13(void)
{

    esp_flash_t* VAR_1 = FUNC_5();
    if (VAR_1 == ((void*)0)) {
        return;
    }


    const char *VAR_2 = "storage";
    FUNC_3(VAR_1, VAR_2);


    FUNC_6();


    if (!FUNC_7(VAR_2)) {
        return;
    }


    size_t VAR_3, VAR_4;
    FUNC_4(&VAR_3, &VAR_4);
    FUNC_1(VAR_0, "FAT FS: %d kB total, %d kB free", VAR_3 / 1024, VAR_4 / 1024);


    FUNC_1(VAR_0, "Opening file");
    FILE *VAR_5 = FUNC_10("/extflash/hello.txt", "wb");
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, "Failed to open file for writing");
        return;
    }
    FUNC_11(VAR_5, "Written using ESP-IDF %s\n", FUNC_2());
    FUNC_8(VAR_5);
    FUNC_1(VAR_0, "File written");


    FUNC_1(VAR_0, "Reading file");
    VAR_5 = FUNC_10("/extflash/hello.txt", "rb");
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, "Failed to open file for reading");
        return;
    }
    char VAR_6[128];
    FUNC_9(VAR_6, sizeof(VAR_6), VAR_5);
    FUNC_8(VAR_5);

    char *VAR_7 = FUNC_12(VAR_6, '\n');
    if (VAR_7) {
        *VAR_7 = '\0';
    }
    FUNC_1(VAR_0, "Read from file: '%s'", VAR_6);
}
