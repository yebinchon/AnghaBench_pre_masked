
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int (* start ) (int *) ;int * (* init ) () ;int (* stop ) (int *) ;int (* free ) (int *) ;} ;
typedef TYPE_3__ wifi_driver_t ;
struct TYPE_11__ {int wifi_allow; } ;
struct TYPE_10__ {int wifi_driver; } ;
struct TYPE_13__ {TYPE_2__ bools; TYPE_1__ arrays; } ;
typedef TYPE_4__ settings_t ;
typedef enum rarch_wifi_ctl_state { ____Placeholder_rarch_wifi_ctl_state } rarch_wifi_ctl_state ;
struct TYPE_14__ {char* label; scalar_t__ len; int s; } ;
typedef TYPE_5__ driver_ctx_info_t ;
struct TYPE_15__ {int ident; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 () ;
 int * VAR_2 ;
 TYPE_3__ const* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (unsigned int) ;
 TYPE_6__** VAR_5 ;

bool FUNC_11(enum rarch_wifi_ctl_state VAR_6, void *VAR_7)
{

   switch (VAR_6)
   {
      case 136:
         VAR_4 = 0;
         VAR_3 = ((void*)0);
         VAR_2 = ((void*)0);
         break;
      case 132:
         VAR_4 = 1;
         break;
      case 135:
         {
            int VAR_8;
            driver_ctx_info_t VAR_9;
            settings_t *VAR_10 = VAR_1;

            VAR_9.label = "wifi_driver";
            VAR_9.s = VAR_10->arrays.wifi_driver;

            FUNC_3(VAR_0, &VAR_9);

            VAR_8 = (int)VAR_9.len;

            if (VAR_8 >= 0)
               VAR_3 = (const wifi_driver_t*)FUNC_10(VAR_8);
            else
            {
               if (FUNC_9())
               {
                  unsigned VAR_11;
                  FUNC_0("Couldn't find any wifi driver named \"%s\"\n",
                        VAR_10->arrays.wifi_driver);
                  FUNC_1("Available wifi drivers are:\n");
                  for (VAR_11 = 0; FUNC_10(VAR_11); VAR_11++)
                     FUNC_1("\t%s\n", VAR_5[VAR_11]->ident);

                  FUNC_2("Going to default to first wifi driver...\n");
               }

               VAR_3 = (const wifi_driver_t*)FUNC_10(0);

               if (!VAR_3)
                  FUNC_4(1, "find_wifi_driver()");
            }
         }
         break;
      case 128:
         VAR_4 = 0;
         break;
      case 133:
        return VAR_4;
      case 137:
        if (VAR_2 && VAR_3)
        {
           if (VAR_3->free)
              VAR_3->free(VAR_2);
        }

        VAR_2 = ((void*)0);
        break;
      case 129:
        if ( VAR_3
              && VAR_3->stop
              && VAR_2)
           VAR_3->stop(VAR_2);
        break;
      case 130:
        if (VAR_3 && VAR_2 && VAR_3->start)
        {
           settings_t *VAR_12 = VAR_1;
           if (VAR_12->bools.wifi_allow)
              return VAR_3->start(VAR_2);
        }
        return 0;
      case 131:
        {



        }
        break;
      case 134:

        if (VAR_2)
           return 0;

        FUNC_11(135, ((void*)0));

        VAR_2 = VAR_3->init();

        if (!VAR_2)
        {
           FUNC_0("Failed to initialize wifi driver. Will continue without wifi.\n");
           FUNC_11(128, ((void*)0));
        }



        break;
      default:
         break;
   }

   return 0;
}
