
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pbtn; int key; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, int VAR_3, char *VAR_4)
{
 int VAR_5;
 if (VAR_3 < 0)
 {

  VAR_3 = -VAR_3;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_1[VAR_5].pbtn == VAR_3)
    return VAR_1[VAR_5].key;
 }
 else
 {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_1[VAR_5].key == VAR_3)
    return VAR_1[VAR_5].pbtn;
 }

 return 0;
}
