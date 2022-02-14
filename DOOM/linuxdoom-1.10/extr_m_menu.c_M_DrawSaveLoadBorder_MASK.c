
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(int VAR_1,int VAR_2)
{
    int VAR_3;

    FUNC_0 (VAR_1-8,VAR_2+7,0,FUNC_1("M_LSLEFT",VAR_0));

    for (VAR_3 = 0;VAR_3 < 24;VAR_3++)
    {
 FUNC_0 (VAR_1,VAR_2+7,0,FUNC_1("M_LSCNTR",VAR_0));
 VAR_1 += 8;
    }

    FUNC_0 (VAR_1,VAR_2+7,0,FUNC_1("M_LSRGHT",VAR_0));
}
