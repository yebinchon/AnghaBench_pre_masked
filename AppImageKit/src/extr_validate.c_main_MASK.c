
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stat {int st_size; } ;
typedef char gchar ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned long*,unsigned long*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int*,unsigned long,int,int *) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int *,unsigned long,int ) ;
 int FUNC_10 (char*,int ) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*,char*,int *) ;
 int* FUNC_13 (unsigned long) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,...) ;
 char* VAR_2 ;
 int FUNC_17 (char*,char*,unsigned long,unsigned long) ;
 int FUNC_18 (char*,char*,char*,char*,char*) ;
 int FUNC_19 (char*,struct stat*) ;
 int VAR_3 ;
 int FUNC_20 (char*) ;

int FUNC_21(int VAR_4,char **VAR_5) {
    if(VAR_4 < 2){
        FUNC_6(VAR_3, "Usage: %s Signed.AppImage\n", VAR_5[0]);
        FUNC_3(1);
    }

    char *VAR_6 = VAR_5[1];

    unsigned long VAR_7 = 0;
    unsigned long VAR_8 = 0;

    if (!FUNC_1(VAR_6, ".sha256_sig", &VAR_7, &VAR_8)) {
        FUNC_6(VAR_3, "Failed to read .sha256_sig section");
        FUNC_3(1);
    }

    if(VAR_8 > 0) {
        FUNC_6(VAR_3, "Skipping ELF section %s with offset %lu, length %lu\n", VAR_2, VAR_7, VAR_8);
    } else {
        FUNC_6(VAR_3, "ELF section %s not found, is the file signed?\n", VAR_2);
        FUNC_3(1);
    }

    char *VAR_9;
    VAR_9 = FUNC_12("/tmp/", FUNC_2(FUNC_12(VAR_6, ".digest", ((void*)0))), ((void*)0));
    char *VAR_10;
    VAR_10 = FUNC_12("/tmp/", FUNC_2(FUNC_12(VAR_6, ".sig", ((void*)0))), ((void*)0));

    uint8_t *VAR_11 = FUNC_13(VAR_8);
    unsigned long VAR_12;
    FILE* VAR_13 = FUNC_5(VAR_6, "r");
    FUNC_9(VAR_13, VAR_7, VAR_1);
    FUNC_7(VAR_11, VAR_8, sizeof(uint8_t), VAR_13);
    FUNC_4(VAR_13);
    FILE *VAR_14 = FUNC_5(VAR_10, "w");
    if (VAR_14 == ((void*)0)) {
        FUNC_6(VAR_3, "Not able to open the signature file for writing, aborting");
        FUNC_3(1);
    }
    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
        FUNC_6(*VAR_14, "%c", VAR_11[VAR_12]);
    }
    FUNC_4(VAR_14);
    FUNC_8(VAR_11);

    struct stat VAR_15;
    FUNC_19(VAR_6, &VAR_15);
    int VAR_16 = VAR_15.st_size;
    if(VAR_16 < VAR_7+VAR_8){
        FUNC_6(VAR_3, "offset+length cannot be less than the file size\n");
        FUNC_3(1);
    }

    static char VAR_17[65];
    FUNC_17(VAR_6, VAR_17, VAR_7, VAR_8);
    FUNC_16("%s\n", VAR_17);


    FILE *VAR_18 = FUNC_5(VAR_9, "w");
    if (VAR_18 == ((void*)0)){
        FUNC_16("Error opening digestfile\n");
        FUNC_3(1);
    }
    FUNC_6(*VAR_18, "%s", VAR_17);
    FUNC_4(VAR_18);
    if (! FUNC_10(VAR_9, VAR_0)) {
        FUNC_16("Error writing digestfile\n");
        FUNC_3(1);
    }

    char VAR_19[1024];
    gchar *VAR_20 = FUNC_11 ("gpg2");
    FUNC_18 (VAR_19, "%s --verify %s %s", VAR_20, VAR_10, VAR_9);
    FUNC_6 (VAR_3, "%s\n", VAR_19);
    FILE *VAR_21 = FUNC_15(VAR_19, "r");
    if (VAR_21 == ((void*)0))
        FUNC_6(VAR_3, "gpg2 command did not succeed");
    int VAR_22 = FUNC_0(FUNC_14(VAR_21));
    FUNC_20(VAR_9);
    FUNC_20(VAR_10);
    return VAR_22;
}
