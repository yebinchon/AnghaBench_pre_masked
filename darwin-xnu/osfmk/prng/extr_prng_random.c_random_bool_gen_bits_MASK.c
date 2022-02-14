
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bool_gen {int dummy; } ;


 int FUNC_0 (struct bool_gen*,unsigned int*,unsigned int) ;

unsigned int
FUNC_1(struct bool_gen * VAR_0, unsigned int * VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 for (unsigned int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {




  while (VAR_4 < VAR_2 && VAR_1[VAR_4] == 0)
   VAR_4++;


  if (VAR_4 == VAR_2) {
   FUNC_0(VAR_0, VAR_1, VAR_2);
   VAR_4 = 0;
  }


  unsigned int VAR_7 = VAR_1[VAR_4] & 1;
  VAR_1[VAR_4] = VAR_1[VAR_4] >> 1;
  VAR_5 = VAR_7 | (VAR_5 << 1);
 }
 return VAR_5;
}
