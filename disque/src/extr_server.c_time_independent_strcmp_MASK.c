
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bufb ;
typedef int bufa ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*,int ,int) ;
 unsigned int FUNC_2 (char*) ;

int FUNC_3(char *VAR_1, char *VAR_2) {
    char VAR_3[VAR_0], VAR_4[VAR_0];




    unsigned int VAR_5 = FUNC_2(VAR_1);
    unsigned int VAR_6 = FUNC_2(VAR_2);
    unsigned int VAR_7;
    int VAR_8 = 0;




    if (VAR_5 > sizeof(VAR_3) || VAR_6 > sizeof(VAR_4)) return 1;

    FUNC_1(VAR_3,0,sizeof(VAR_3));
    FUNC_1(VAR_4,0,sizeof(VAR_4));


    FUNC_0(VAR_3,VAR_1,VAR_5);
    FUNC_0(VAR_4,VAR_2,VAR_6);



    for (VAR_7 = 0; VAR_7 < sizeof(VAR_3); VAR_7++) {
        VAR_8 |= (VAR_3[VAR_7] ^ VAR_4[VAR_7]);
    }

    VAR_8 |= VAR_5 ^ VAR_6;
    return VAR_8;
}
