
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,unsigned char*,int,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5, unsigned char *VAR_6)
{
    unsigned char VAR_7[36], VAR_8[VAR_0];
    int VAR_9, VAR_10;


    FUNC_1(VAR_7, VAR_2, VAR_3);
    VAR_7[VAR_3] = (unsigned char)((VAR_5>>24) & 0xff);
    VAR_7[VAR_3+1] = (unsigned char)((VAR_5>>16) & 0xff);
    VAR_7[VAR_3+2] = (unsigned char)((VAR_5>>8) & 0xff);
    VAR_7[VAR_3+3] = (unsigned char)(VAR_5 & 0xff);
    FUNC_0((unsigned char*) VAR_1, (int) FUNC_2(VAR_1), VAR_7, VAR_3+4, VAR_8, VAR_0);


    FUNC_1(VAR_6, VAR_8, VAR_0);

    for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++)
    {

        FUNC_0((unsigned char*) VAR_1, (int) FUNC_2(VAR_1), VAR_8, VAR_0, VAR_7, VAR_0);
        FUNC_1(VAR_8, VAR_7, VAR_0);


        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
        {
            VAR_6[VAR_10] ^= VAR_7[VAR_10];
        }
    }
}
