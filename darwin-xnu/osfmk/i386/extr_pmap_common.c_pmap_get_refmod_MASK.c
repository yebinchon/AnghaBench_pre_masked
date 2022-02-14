
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppnum_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int) ;

unsigned int
FUNC_1(ppnum_t VAR_4)
{
        int VAR_5;
 unsigned int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_4, VAR_0 | VAR_1);

 if (VAR_5 & VAR_0)
         VAR_6 |= VAR_2;
 if (VAR_5 & VAR_1)
         VAR_6 |= VAR_3;

 return (VAR_6);
}
