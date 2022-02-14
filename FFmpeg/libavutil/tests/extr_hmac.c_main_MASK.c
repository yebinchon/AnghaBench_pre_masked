
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char const uint8_t ;
typedef int key3 ;
typedef int key2 ;
typedef int key1 ;
typedef enum AVHMACType { ____Placeholder_AVHMACType } AVHMACType ;
typedef int data6 ;
typedef int data5 ;
typedef int data4 ;
typedef int data3 ;
typedef int data2 ;
typedef int data1 ;
struct TYPE_5__ {int hashlen; } ;
typedef TYPE_1__ AVHMAC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (TYPE_1__*,char const*,int,char const*,int) ;

int FUNC_4(void)
{
    uint8_t VAR_4[20], VAR_5[131], VAR_6[50];
    AVHMAC *VAR_7;
    enum AVHMACType VAR_8;
    static const uint8_t VAR_9[] = "Jefe";
    static const uint8_t VAR_10[] = "Hi There";
    static const uint8_t VAR_11[] = "what do ya want for nothing?";
    static const uint8_t VAR_12[] = "Test Using Larger Than Block-Size Key - Hash Key First";
    static const uint8_t VAR_13[] = "Test Using Larger Than Block-Size Key and Larger Than One Block-Size Data";
    static const uint8_t VAR_14[] = "This is a test using a larger than block-size key and a larger "
                            "than block-size data. The key needs to be hashed before being used"
                            " by the HMAC algorithm.";
    FUNC_2(VAR_4, 0x0b, sizeof(VAR_4));
    FUNC_2(VAR_5, 0xaa, sizeof(VAR_5));
    FUNC_2(VAR_6, 0xdd, sizeof(VAR_6));


    for (VAR_8 = VAR_0; VAR_8 <= VAR_1; VAR_8++) {
        VAR_7 = FUNC_0(VAR_8);
        if (!VAR_7)
            return 1;

        FUNC_3(VAR_7, VAR_4, VAR_7->hashlen, VAR_10, sizeof(VAR_10));
        FUNC_3(VAR_7, VAR_9, sizeof(VAR_9), VAR_11, sizeof(VAR_11));
        FUNC_3(VAR_7, VAR_5, VAR_7->hashlen, VAR_6, sizeof(VAR_6));
        FUNC_3(VAR_7, VAR_5, 80, VAR_12, sizeof(VAR_12));
        FUNC_3(VAR_7, VAR_5, 80, VAR_13, sizeof(VAR_13));
        FUNC_1(VAR_7);
    }


    for (VAR_8 = VAR_2; VAR_8 <= VAR_3; VAR_8++) {
        VAR_7 = FUNC_0(VAR_8);
        if (!VAR_7)
            return 1;

        FUNC_3(VAR_7, VAR_4, sizeof(VAR_4), VAR_10, sizeof(VAR_10));
        FUNC_3(VAR_7, VAR_9, sizeof(VAR_9), VAR_11, sizeof(VAR_11));
        FUNC_3(VAR_7, VAR_5, 20, VAR_6, sizeof(VAR_6));
        FUNC_3(VAR_7, VAR_5, sizeof(VAR_5), VAR_12, sizeof(VAR_12));
        FUNC_3(VAR_7, VAR_5, sizeof(VAR_5), VAR_14, sizeof(VAR_14));
        FUNC_1(VAR_7);
    }

    return 0;
}
