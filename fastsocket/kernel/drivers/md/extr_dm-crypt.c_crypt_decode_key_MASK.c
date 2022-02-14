
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, char *VAR_2, unsigned int VAR_3)
{
 char VAR_4[3];
 char *VAR_5;
 unsigned int VAR_6;

 VAR_4[2] = '\0';

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4[0] = *VAR_2++;
  VAR_4[1] = *VAR_2++;

  VAR_1[VAR_6] = (u8)FUNC_0(VAR_4, &VAR_5, 16);

  if (VAR_5 != &VAR_4[2])
   return -VAR_0;
 }

 if (*VAR_2 != '\0')
  return -VAR_0;

 return 0;
}
