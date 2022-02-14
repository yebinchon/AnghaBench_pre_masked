
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int FUNC_0 (char*,char*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char*) ;
 char* VAR_0 ;
 int FUNC_5 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int VAR_1 ;

int FUNC_7(int VAR_2,char **VAR_3)
{
    int VAR_4 = 0;

    if(VAR_2 < 2){
        FUNC_3(VAR_1, "Usage: %s file offset length\n", VAR_3[0]);
        FUNC_3(VAR_1, "If no offset and length are provided, the ELF section '%s' is skipped\n\n", VAR_0);
        FUNC_3(VAR_1, "Calculate a sha256 of a file except a skipped area from offset to offset+length bytes\n");
        FUNC_3(VAR_1, "which is replaced with 0x00 during checksum calculation.\n");
        FUNC_3(VAR_1, "This is useful when a signature is placed in the skipped area.\n");
        FUNC_2(1);
    }

    unsigned long VAR_5 = 0;
    unsigned long VAR_6 = 0;
    char *VAR_7 = VAR_3[1];

    struct stat VAR_8;
    if (FUNC_6(VAR_7, &VAR_8) < 0) {
        FUNC_3(VAR_1, "not existing file: %s\n", VAR_7);
        FUNC_2(1);
    }

    if(VAR_2 < 4){
        FUNC_0(VAR_7, ".sha256_sig", &VAR_5, &VAR_6);
        if(VAR_6 > 0)
            FUNC_3(VAR_1, "Skipping ELF section %s with offset %lu, length %lu\n", VAR_0, VAR_5, VAR_6);
    } else if(VAR_2 == 4) {
        VAR_5 = FUNC_1(VAR_3[2]);
        VAR_6 = FUNC_1(VAR_3[3]);
    } else {
        FUNC_2(1);
    }

    int VAR_9 = VAR_8.st_size;
    if(VAR_9 < VAR_5+VAR_6){
        FUNC_3(VAR_1, "offset+length cannot be less than the file size\n");
        FUNC_2(1);
    }

    static char VAR_10[65];
    VAR_4 = FUNC_5(VAR_7, VAR_10, VAR_5, VAR_6);
    FUNC_4("%s\n", VAR_10);
    return VAR_4;
}
