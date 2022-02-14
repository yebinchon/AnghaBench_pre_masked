
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int drv_data; int drv_id; int probed; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* update_keycode ) (int ,int*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int FUNC_4(int *VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;

 VAR_8 = FUNC_1();

 while (1)
 {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   in_dev_t *VAR_9 = &VAR_1[VAR_5];
   if (!VAR_9->probed)
    continue;

   VAR_7 = FUNC_0(VAR_9->drv_id).update_keycode(VAR_9->drv_data, &VAR_6);
   if (VAR_7 == -1)
    continue;

   if (VAR_2)
    *VAR_2 = VAR_5;
   if (VAR_3)
    *VAR_3 = VAR_6;
   return VAR_7;
  }

  if (VAR_4 >= 0 && (int)(FUNC_1() - VAR_8) > VAR_4)
   break;

  FUNC_2(10);
 }

 return -1;
}
