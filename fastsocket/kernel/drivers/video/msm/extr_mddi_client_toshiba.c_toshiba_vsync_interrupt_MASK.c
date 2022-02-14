
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_info {int toshiba_got_int; TYPE_1__* toshiba_callback; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* func ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct panel_info *VAR_4 = VAR_3;

 VAR_4->toshiba_got_int = 1;
 if (VAR_4->toshiba_callback) {
  VAR_4->toshiba_callback->func(VAR_4->toshiba_callback);
  VAR_4->toshiba_callback = 0;
 }
 FUNC_1(&VAR_1);
 return VAR_0;
}
