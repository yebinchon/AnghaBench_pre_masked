
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int settings_t ;
struct TYPE_7__ {int argc; char** argv; int environ_get; void* args; } ;
typedef TYPE_2__ content_ctx_info_t ;
struct TYPE_9__ {int info; } ;
struct TYPE_8__ {TYPE_1__* application; } ;
struct TYPE_6__ {int exiting; int (* quit ) () ;int (* process_events ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,int *) ;
 int * VAR_9 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 TYPE_5__ VAR_12 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int *,int *,TYPE_2__*,int ,int *,int *) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 TYPE_3__ VAR_13 ;
 int VAR_14 ;

int FUNC_25(int VAR_15, char *VAR_16[], void *VAR_17)
{
   FUNC_12(&VAR_12.info);
   FUNC_4(VAR_0, ((void*)0));
   FUNC_15();

   VAR_9 = (settings_t*)FUNC_3(1, sizeof(settings_t));

   FUNC_5(VAR_6, ((void*)0));
   FUNC_14(VAR_5, ((void*)0));
   FUNC_10();

   FUNC_8(VAR_17);

   if (VAR_10)
      FUNC_6(VAR_2);





   VAR_14 = 1;
   VAR_8 = 1;
   {
      uint8_t VAR_18;
      for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
         FUNC_11(VAR_18, VAR_7);
   }
   FUNC_16();

   if (FUNC_9())
   {
      content_ctx_info_t VAR_19;

      VAR_19.argc = VAR_15;
      VAR_19.argv = VAR_16;
      VAR_19.args = VAR_17;
      VAR_19.environ_get = FUNC_7();

      if (!FUNC_22(
               ((void*)0),
               ((void*)0),
               &VAR_19,
               VAR_1,
               ((void*)0),
               ((void*)0)))
         return 1;
   }

   FUNC_24();


   do
   {
      int VAR_20;
      bool VAR_21 = 0;



      VAR_20 = FUNC_17();

      FUNC_23();





      if (VAR_20 == -1 || VAR_21)
      {



         break;
      }
   }while(1);

   FUNC_13(VAR_17);


   return 0;
}
