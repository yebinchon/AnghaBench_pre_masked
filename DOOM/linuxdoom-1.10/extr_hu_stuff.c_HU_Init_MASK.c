
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int patch_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,int ) ;

void FUNC_2(void)
{

    int VAR_8;
    int VAR_9;
    char VAR_10[9];

    if (VAR_4)
 VAR_7 = VAR_5;
    else
 VAR_7 = VAR_3;


    VAR_9 = VAR_1;
    for (VAR_8=0;VAR_8<VAR_0;VAR_8++)
    {
 FUNC_1(VAR_10, "STCFN%.3d", VAR_9++);
 VAR_6[VAR_8] = (patch_t *) FUNC_0(VAR_10, VAR_2);
    }

}
