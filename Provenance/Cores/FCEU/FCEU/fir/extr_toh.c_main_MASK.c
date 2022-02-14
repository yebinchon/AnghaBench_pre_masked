
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char*,char*,double*) ;
 int VAR_1 ;

FUNC_3()
{
 char VAR_2[256];
 int VAR_3=0;

 while(FUNC_0(VAR_2,256,VAR_1)>0)
 {
  double VAR_4;

  if(FUNC_2(VAR_2,"%lf",&VAR_4)==1)
  {
   VAR_4*=65536*16;
   FUNC_1("%ld,\n",(long)VAR_4);
   VAR_3++;
   if(VAR_3==VAR_0) break;
  }

 }

}
