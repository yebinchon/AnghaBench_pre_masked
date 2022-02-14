
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

void FUNC_1(int VAR_1, int VAR_2, char *VAR_3)
{
 if((VAR_1^VAR_2)&1)
  if(VAR_1&1)
  {
   if(VAR_1==1) FUNC_0(" tmp%s-=128;\n",VAR_3);
   else if(VAR_1==3) FUNC_0(" tmp%s-=32768;\n",VAR_3);
   else if(VAR_1==5) FUNC_0(" tmp%s-=32768;\n",VAR_3);
   else if(VAR_1==7) FUNC_0(" tmp%s-=(1<<23);\n",VAR_3);
  }
  else
  {
   if(VAR_1==0) FUNC_0(" tmp%s+=128;\n",VAR_3);
   else if(VAR_1==2) FUNC_0(" tmp%s+=32768;\n",VAR_3);
   else if(VAR_1==4) FUNC_0(" tmp%s+=32768;\n",VAR_3);
   else if(VAR_1==6) FUNC_0(" tmp%s+=(1<<23);\n",VAR_3);
  }
 if((VAR_1>>1) != (VAR_2>>1))
 {
  int VAR_4=VAR_0[VAR_1]-VAR_0[VAR_2];
  if(VAR_4>0)
   FUNC_0(" tmp%s >>= %d;\n",VAR_3,VAR_4);
  else
   FUNC_0(" tmp%s <<= %d;\n",VAR_3,-VAR_4);
 }
}
