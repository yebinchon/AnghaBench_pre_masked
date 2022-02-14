
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ofw_handle_t ) (unsigned int*) ;



int
FUNC_0(ofw_handle_t VAR_0, int VAR_1, char *VAR_2)
{
 unsigned int VAR_3[8];
 char VAR_4[12];

 VAR_4[0]='g';
 VAR_4[1]='e';
 VAR_4[2]='t';
 VAR_4[3]='p';
 VAR_4[4]='r';
 VAR_4[5]='o';
 VAR_4[6]='p';
 VAR_4[7]='l';
 VAR_4[8]='e';
 VAR_4[9]='n';
 VAR_4[10]='\0';

 VAR_3[0] = (unsigned int)VAR_4;
 VAR_3[1] = 2;
 VAR_3[2] = 1;
 VAR_3[3] = (unsigned int)VAR_1;
 VAR_3[4] = (unsigned int)VAR_2;

 if (VAR_0(VAR_3) == -1)
  return -1;
 return VAR_3[5];
}
