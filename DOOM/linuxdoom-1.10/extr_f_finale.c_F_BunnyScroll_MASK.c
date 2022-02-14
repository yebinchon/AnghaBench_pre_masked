
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int patch_t ;


 int FUNC_0 (int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int,int ,int *) ;
 int FUNC_3 (int ,int ,int,int) ;
 int * FUNC_4 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6 (void)
{
    int VAR_6;
    int VAR_7;
    patch_t* VAR_8;
    patch_t* VAR_9;
    char VAR_10[10];
    int VAR_11;
    static int VAR_12;

    VAR_8 = FUNC_4 ("PFUB2", VAR_1);
    VAR_9 = FUNC_4 ("PFUB1", VAR_1);

    FUNC_3 (0, 0, VAR_3, VAR_2);

    VAR_6 = 320 - (VAR_4-230)/2;
    if (VAR_6 > 320)
 VAR_6 = 320;
    if (VAR_6 < 0)
 VAR_6 = 0;

    for ( VAR_7=0 ; VAR_7<VAR_3 ; VAR_7++)
    {
 if (VAR_7+VAR_6 < 320)
     FUNC_0 (VAR_7, VAR_8, VAR_7+VAR_6);
 else
     FUNC_0 (VAR_7, VAR_9, VAR_7+VAR_6 - 320);
    }

    if (VAR_4 < 1130)
 return;
    if (VAR_4 < 1180)
    {
 FUNC_2 ((VAR_3-13*8)/2,
       (VAR_2-8*8)/2,0, FUNC_4 ("END0",VAR_0));
 VAR_12 = 0;
 return;
    }

    VAR_11 = (VAR_4-1180) / 5;
    if (VAR_11 > 6)
 VAR_11 = 6;
    if (VAR_11 > VAR_12)
    {
 FUNC_1 (((void*)0), VAR_5);
 VAR_12 = VAR_11;
    }

    FUNC_5 (VAR_10,"END%i",VAR_11);
    FUNC_2 ((VAR_3-13*8)/2, (VAR_2-8*8)/2,0, FUNC_4 (VAR_10,VAR_0));
}
