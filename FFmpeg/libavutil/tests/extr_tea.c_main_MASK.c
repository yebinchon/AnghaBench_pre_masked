
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
struct AVTEA {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AVTEA*) ;
 struct AVTEA* FUNC_1 () ;
 int FUNC_2 (struct AVTEA*,char const*,char const*,int,char const*,int ) ;
 int FUNC_3 (struct AVTEA*,int ,int) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*) ;
 char const** VAR_1 ;
 int * VAR_2 ;
 char const** VAR_3 ;
 int FUNC_6 (struct AVTEA*,char const*,char const*,char const*,int,char const*,int,char*) ;

int FUNC_7(void)
{
    struct AVTEA *VAR_4;
    uint8_t VAR_5[8], VAR_6[8];
    int VAR_7;
    static const uint8_t VAR_8[32] = "HelloWorldHelloWorldHelloWorld";
    uint8_t VAR_9[32];
    uint8_t VAR_10[32];

    VAR_4 = FUNC_1();
    if (!VAR_4)
        return 1;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        FUNC_3(VAR_4, VAR_2[VAR_7], 64);

        FUNC_6(VAR_4, VAR_5, VAR_3[VAR_7], VAR_1[VAR_7], 1, ((void*)0), 0, "encryption");
        FUNC_6(VAR_4, VAR_5, VAR_1[VAR_7], VAR_3[VAR_7], 1, ((void*)0), 1, "decryption");


        FUNC_4(VAR_6, "HALLO123", 8);
        FUNC_2(VAR_4, VAR_9, VAR_8, 4, VAR_6, 0);


        FUNC_4(VAR_6, "HALLO123", 8);
        FUNC_6(VAR_4, VAR_10, VAR_9, VAR_8, 4, VAR_6, 1, "CBC decryption");

        FUNC_4(VAR_6, "HALLO123", 8);
        FUNC_6(VAR_4, VAR_9, VAR_9, VAR_8, 4, VAR_6, 1, "CBC inplace decryption");
    }

    FUNC_5("Test encryption/decryption success.\n");
    FUNC_0(VAR_4);

    return 0;
}
