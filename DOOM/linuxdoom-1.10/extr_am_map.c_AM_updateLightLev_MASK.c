
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int litelevels ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(void)
{
    static VAR_3 = 0;

    static int VAR_4[] = { 0, 4, 7, 10, 12, 14, 15, 15 };
    static int VAR_5 = 0;


    if (VAR_0>VAR_3)
    {
 VAR_1 = VAR_4[VAR_5++];
 if (VAR_5 == sizeof(VAR_4)/sizeof(int)) VAR_5 = 0;
 VAR_3 = VAR_0 + 6 - (VAR_0 % 6);
    }

}
