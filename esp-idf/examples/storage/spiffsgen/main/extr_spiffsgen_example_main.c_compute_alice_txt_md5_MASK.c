
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md5_context ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 size_t FUNC_4 (void*,int,int,int *) ;
 int FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char const*,size_t) ;
 int FUNC_9 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_10(void)
{
    FUNC_1(VAR_1, "Computing alice.txt MD5 hash");


    FILE* VAR_2 = FUNC_3("/spiffs/sub/alice.txt", "r");
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_1, "Failed to open alice.txt");
        return;
    }




    char VAR_3[64];
    mbedtls_md5_context VAR_4;
    unsigned char VAR_5[16];

    FUNC_6(&VAR_4);
    FUNC_7(&VAR_4);

    size_t VAR_6;

    do {
        VAR_6 = FUNC_4((void*) VAR_3, 1, sizeof(VAR_3), VAR_2);
        FUNC_8(&VAR_4, (unsigned const char*) VAR_3, VAR_6);
    } while(VAR_6 == sizeof(VAR_3));

    FUNC_5(&VAR_4, VAR_5);


    char VAR_7[16 * 2];

    for (int VAR_8 = 0; VAR_8 < 16; VAR_8++) {
        FUNC_9(&VAR_7[VAR_8 * 2], "%02x", (unsigned int)VAR_5[VAR_8]);
    }


    FUNC_1(VAR_1, "Computed MD5 hash of alice.txt: %s", VAR_7);

    FUNC_2(VAR_2);
}
