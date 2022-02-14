
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ofw_handle_t ) (unsigned int*) ;



int
FUNC_0(ofw_handle_t VAR_0, int VAR_1, char *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5[8];
 char VAR_6[8];

 VAR_6[0]='g';
 VAR_6[1]='e';
 VAR_6[2]='t';
 VAR_6[3]='p';
 VAR_6[4]='r';
 VAR_6[5]='o';
 VAR_6[6]='p';
 VAR_6[7]='\0';

 VAR_5[0] = (unsigned int)VAR_6;
 VAR_5[1] = 4;
 VAR_5[2] = 1;
 VAR_5[3] = (unsigned int)VAR_1;
 VAR_5[4] = (unsigned int)VAR_2;
 VAR_5[5] = (unsigned int)VAR_3;
 VAR_5[6] = VAR_4;

 if (VAR_0(VAR_5) == -1)
  return -1;
 return VAR_5[7];
}
