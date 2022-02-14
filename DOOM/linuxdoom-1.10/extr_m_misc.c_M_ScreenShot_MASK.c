
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {char* message; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int *,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int ** VAR_5 ;
 int FUNC_5 (char*,char*) ;

void FUNC_6 (void)
{
    int VAR_6;
    byte* VAR_7;
    char VAR_8[12];


    VAR_7 = VAR_5[2];
    FUNC_1 (VAR_7);


    FUNC_5(VAR_8,"DOOM00.pcx");

    for (VAR_6=0 ; VAR_6<=99 ; VAR_6++)
    {
 VAR_8[4] = VAR_6/10 + '0';
 VAR_8[5] = VAR_6%10 + '0';
 if (FUNC_4(VAR_8,0) == -1)
     break;
    }
    if (VAR_6==100)
 FUNC_0 ("M_ScreenShot: Couldn't create a PCX");


    FUNC_3 (VAR_8, VAR_7,
    VAR_2, VAR_1,
    FUNC_2 ("PLAYPAL",VAR_0));

    VAR_4[VAR_3].message = "screen shot";
}
