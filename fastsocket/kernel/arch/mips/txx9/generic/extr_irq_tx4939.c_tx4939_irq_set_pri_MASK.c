
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4;

 if ((unsigned int)VAR_2 >= VAR_0)
  return 0;
 VAR_4 = VAR_1[VAR_2].level;
 VAR_1[VAR_2].level = VAR_3;
 return VAR_4;
}
