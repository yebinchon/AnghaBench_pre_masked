
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
typedef int AVXTEA ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char const*,char const*,int,char const*,int ) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*,char const*,int,char const*,int ) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char const*,char const*,char const*,int,char const*,int,char*,int (*) (int *,char const*,char const*,int,char const*,int )) ;
 char const** VAR_1 ;
 char const** VAR_2 ;
 char const** VAR_3 ;

int FUNC_11(void)
{
    uint8_t VAR_4[16], VAR_5[8];
    int VAR_6, VAR_7;
    static const uint8_t VAR_8[32] = "HelloWorldHelloWorldHelloWorld";
    uint8_t VAR_9[32];
    uint8_t VAR_10[32];
    AVXTEA *VAR_11 = FUNC_3();
    if (!VAR_11)
        return 1;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        FUNC_5(VAR_11, VAR_2[VAR_6]);

        FUNC_10(VAR_11, VAR_4, VAR_3[VAR_6], VAR_1[VAR_6], 1, ((void*)0), 0, "encryption", FUNC_4);
        FUNC_10(VAR_11, VAR_4, VAR_1[VAR_6], VAR_3[VAR_6], 1, ((void*)0), 1, "decryption", FUNC_4);

        for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
            FUNC_1(&VAR_4[4*VAR_7], FUNC_0(&VAR_2[VAR_6][4*VAR_7]));
        FUNC_7(VAR_11, VAR_4);
        for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
            FUNC_1(&VAR_9[4*VAR_7], FUNC_0(&VAR_1[VAR_6][4*VAR_7]));
            FUNC_1(&VAR_10[4*VAR_7], FUNC_0(&VAR_3[VAR_6][4*VAR_7]));
        }
        FUNC_10(VAR_11, VAR_4, VAR_10, VAR_9, 1, ((void*)0), 0, "encryption", FUNC_6);
        FUNC_10(VAR_11, VAR_4, VAR_9, VAR_10, 1, ((void*)0), 1, "decryption", FUNC_6);


        FUNC_8(VAR_5, "HALLO123", 8);
        FUNC_4(VAR_11, VAR_9, VAR_8, 4, VAR_5, 0);


        FUNC_8(VAR_5, "HALLO123", 8);
        FUNC_10(VAR_11, VAR_10, VAR_9, VAR_8, 4, VAR_5, 1, "CBC decryption", FUNC_4);

        FUNC_8(VAR_5, "HALLO123", 8);
        FUNC_10(VAR_11, VAR_9, VAR_9, VAR_8, 4, VAR_5, 1, "CBC inplace decryption", FUNC_4);
    }

    FUNC_9("Test encryption/decryption success.\n");
    FUNC_2(VAR_11);

    return 0;
}
