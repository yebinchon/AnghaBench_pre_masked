
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ config_save_on_exit; } ;
struct TYPE_6__ {int video_driver; } ;
struct TYPE_8__ {TYPE_2__ bools; TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_2 (int ,int *) ;
 TYPE_3__* VAR_10 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int VAR_11 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 int FUNC_15 (int ,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,scalar_t__*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

void FUNC_21(void *VAR_15)
{
   settings_t *VAR_16 = VAR_10;

   if (VAR_9[0])
   {
      FUNC_18(VAR_16->arrays.video_driver, VAR_9);
      VAR_9[0] = 0;
      FUNC_1("[Video]: Restored video driver to \"%s\".\n", VAR_16->arrays.video_driver);
   }

   if (VAR_16->bools.config_save_on_exit)
      FUNC_2(VAR_1, ((void*)0));





   FUNC_15(VAR_4, ((void*)0));

   FUNC_16();





   FUNC_6(VAR_15);
   FUNC_7(
         FUNC_13(VAR_8),
         FUNC_14(VAR_8));

   VAR_11 = 0;
   VAR_14 = 0;
   VAR_13 = 0;
   VAR_12 = 0;

   FUNC_17();
   FUNC_4(VAR_2);
   FUNC_2(VAR_0, ((void*)0));

   FUNC_15(VAR_5, ((void*)0));
   FUNC_10();
   FUNC_15(VAR_3, ((void*)0));

   if (VAR_10)
      FUNC_5(VAR_10);
   VAR_10 = ((void*)0);

   FUNC_19();

   FUNC_9(0);

   FUNC_3(VAR_6, ((void*)0));
   FUNC_20();
   FUNC_8();




}
