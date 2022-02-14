
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 > 30)



  VAR_3 = 30;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4] < ' ' || VAR_2[VAR_4] == ':'
      || (VAR_2[VAR_4] > 0x7e && VAR_2[VAR_4] < 0xa0))
   return -VAR_0;
 }

 return 0;
}
