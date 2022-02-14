
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char) ;

void FUNC_1(char *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(&VAR_0[VAR_3 * 2], "%.2x", (unsigned char)VAR_1[VAR_3]);
}
