
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* led_driver; } ;
struct TYPE_10__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {int (* init ) () ;} ;


 int FUNC_0 (char*,char*,TYPE_3__*) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 () ;

bool FUNC_4(void)
{
   settings_t *VAR_4 = FUNC_1();
   char *VAR_5 = VAR_4 ? VAR_4->arrays.led_driver : ((void*)0);

   if(!VAR_5)
      VAR_5 = (char*)"null";

   VAR_0 = &VAR_1;
   FUNC_0("[LED]: LED driver = '%s' %p\n",
         VAR_5, VAR_0);

   if(VAR_0)
      (*VAR_0->init)();

   return 1;
}
