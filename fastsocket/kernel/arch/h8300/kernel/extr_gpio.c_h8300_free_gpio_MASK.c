
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char used; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2, unsigned int VAR_3)
{
 unsigned char *VAR_4;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return -1;
 VAR_4 = &(VAR_1[VAR_2].used);
 if ((*VAR_4 & VAR_3) != VAR_3)
  return 0;
 *VAR_4 &= (~VAR_3);
 return 1;
}
