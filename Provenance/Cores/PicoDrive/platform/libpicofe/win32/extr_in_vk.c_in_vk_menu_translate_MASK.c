
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pbtn; int key; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_3 < 0)
 {

  VAR_3 = -VAR_3;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   if (VAR_1[VAR_4].pbtn == VAR_3)
    return VAR_1[VAR_4].key;
 }
 else
 {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   if (VAR_1[VAR_4].key == VAR_3)
    return VAR_1[VAR_4].pbtn;
 }

 return 0;
}
