
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _xy {int line; int cnt; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct _xy* FUNC_3 () ;
 int* VAR_0 ;
 int VAR_1 ;

void FUNC_4(u32 VAR_2)
{
 u32 VAR_3,VAR_4;
 struct _xy *VAR_5 = ((void*)0);

 if(VAR_2>11) VAR_2 = 11;

 FUNC_1(VAR_4);
 VAR_1 = VAR_2;
 VAR_5 = FUNC_3();

 VAR_3 = 1;
 if(VAR_0[54]&0x0001) VAR_3 = 2;

 FUNC_0(VAR_3*VAR_5[VAR_2].line,VAR_5[VAR_2].cnt);
 FUNC_2(VAR_4);
}
