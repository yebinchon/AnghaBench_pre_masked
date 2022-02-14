
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = (VAR_2&~(VAR_1|VAR_0));
 VAR_2 = (VAR_2|VAR_1);
 VAR_1 = VAR_2;
 while((VAR_4=FUNC_2(VAR_4,(VAR_2|VAR_0)))!=0);
 FUNC_1(VAR_3);
}
