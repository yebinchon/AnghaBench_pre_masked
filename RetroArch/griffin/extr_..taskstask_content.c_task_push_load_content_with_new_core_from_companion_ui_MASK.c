
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int retro_task_callback_t ;
struct TYPE_4__ {char* label; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;
typedef int content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int *,int,int) ;

bool FUNC_6(
      const char *VAR_5,
      const char *VAR_6,
      const char *VAR_7,
      content_ctx_info_t *VAR_8,
      retro_task_callback_t VAR_9,
      void *VAR_10)
{
   global_t *VAR_11 = FUNC_1();

   FUNC_3(VAR_2, VAR_6);
   FUNC_3(VAR_3, VAR_5);




   VAR_4 = 0;

   if (VAR_11)
   {
      if (VAR_7)
         FUNC_4(VAR_11->name.label, VAR_7, sizeof(VAR_11->name.label));
      else
         VAR_11->name.label[0] = '\0';
   }


   if (!FUNC_5(VAR_8, 1, 0))
      return 0;






   return 1;
}
