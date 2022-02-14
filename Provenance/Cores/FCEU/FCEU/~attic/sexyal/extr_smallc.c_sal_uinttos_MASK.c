
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
 static char VAR_1[64],VAR_2[64];
 char *VAR_3;
 int VAR_4=0;

 VAR_3=VAR_1;

 while(VAR_0)
 {
  *VAR_3='0'+(VAR_0%10);
  VAR_4++;
  VAR_3++;
  VAR_0/=10;
 }

 VAR_3=VAR_2;
 while(VAR_4-- >= 0)
 {
  *VAR_3=VAR_1[VAR_4];
  VAR_3++;
 }

 *VAR_3=0;
 return(VAR_2);
}
