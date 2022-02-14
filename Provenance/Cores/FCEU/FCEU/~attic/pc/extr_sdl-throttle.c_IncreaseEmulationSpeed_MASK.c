
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int* VAR_1 ;

void FUNC_2(void)
{
 int VAR_2;
 for(VAR_2=1; VAR_1[VAR_2]<VAR_0; VAR_2++)
  ;
 VAR_0 = VAR_1[VAR_2+1];

 FUNC_1();

 FUNC_0("emulation speed %d%%",(VAR_0*100)>>8);
}
