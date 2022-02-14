
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ofw_handle_t ) (unsigned int*) ;



int
FUNC_0(ofw_handle_t VAR_0, char *VAR_1)
{
 unsigned int VAR_2[8];
 char VAR_3[12];

 VAR_3[0]='f';
 VAR_3[1]='i';
 VAR_3[2]='n';
 VAR_3[3]='d';
 VAR_3[4]='d';
 VAR_3[5]='e';
 VAR_3[6]='v';
 VAR_3[7]='i';
 VAR_3[8]='c';
 VAR_3[9]='e';
 VAR_3[10]='\0';

 VAR_2[0]=(unsigned int)VAR_3;
 VAR_2[1]=1;
 VAR_2[2]=1;
 VAR_2[3]=(unsigned int)VAR_1;

 if (VAR_0(VAR_2) == -1)
  return -1;
 return VAR_2[4];
}
