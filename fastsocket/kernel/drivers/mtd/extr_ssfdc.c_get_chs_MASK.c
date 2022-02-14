
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long size; unsigned short cyl; unsigned char head; unsigned char sec; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1, unsigned short *VAR_2, unsigned char *VAR_3,
   unsigned char *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 VAR_5 = 0;
 while (VAR_0[VAR_5].size > 0 && VAR_1 > VAR_0[VAR_5].size)
  VAR_5++;

 if (VAR_0[VAR_5].size > 0) {
  if (VAR_2)
   *VAR_2 = VAR_0[VAR_5].cyl;
  if (VAR_3)
   *VAR_3 = VAR_0[VAR_5].head;
  if (VAR_4)
   *VAR_4 = VAR_0[VAR_5].sec;
  VAR_6 = 1;
 }

 return VAR_6;
}
