
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int baud; unsigned int cflag; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

unsigned int FUNC_0(unsigned int VAR_2, int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].baud != -1; VAR_4++)
  if (VAR_1[VAR_4].cflag == (VAR_2 & VAR_0))
   break;

 VAR_4 += 1;
 if (VAR_1[VAR_4].baud == -1)
  VAR_4 = 0;

 *VAR_3 = VAR_1[VAR_4].baud;
 return VAR_1[VAR_4].cflag;
}
