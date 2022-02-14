
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_event_info {int (* func ) (int ,struct gpio_event_info*,int *,int) ;} ;
struct gpio_event {int * state; int input_dev; TYPE_1__* info; } ;
struct TYPE_2__ {int info_count; struct gpio_event_info** info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct gpio_event_info*,int *,int) ;
 int FUNC_2 (int ,struct gpio_event_info*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_event *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct gpio_event_info **VAR_7;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_2) {
  VAR_7 = VAR_3->info->info;
  for (VAR_5 = 0; VAR_5 < VAR_3->info->info_count; VAR_5++, VAR_7++) {
   if ((*VAR_7)->func == ((void*)0)) {
    VAR_6 = -VAR_0;
    FUNC_0("gpio_event_probe: Incomplete pdata, "
     "no function\n");
    goto err_no_func;
   }
   VAR_6 = (*VAR_7)->func(VAR_3->input_dev, *VAR_7, &VAR_3->state[VAR_5],
       VAR_4);
   if (VAR_6) {
    FUNC_0("gpio_event_probe: function failed\n");
    goto err_func_failed;
   }
  }
  return 0;
 }

 VAR_6 = 0;
 VAR_5 = VAR_3->info->info_count;
 VAR_7 = VAR_3->info->info + VAR_5;
 while (VAR_5 > 0) {
  VAR_5--;
  VAR_7--;
  (*VAR_7)->func(VAR_3->input_dev, *VAR_7, &VAR_3->state[VAR_5], VAR_4 & ~1);
err_func_failed:
err_no_func:
  ;
 }
 return VAR_6;
}
