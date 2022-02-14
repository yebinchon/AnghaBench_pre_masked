
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int idx; struct TYPE_8__* msg; int handler; struct TYPE_8__* state; } ;
typedef TYPE_1__ retro_task_t ;
typedef int msg ;
typedef TYPE_1__ autoconfig_disconnect_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,char*,unsigned int,char const*) ;
 TYPE_1__* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;

bool FUNC_12(unsigned VAR_2, const char *VAR_3)
{
   char VAR_4[255];
   retro_task_t *VAR_5 = FUNC_10();
   autoconfig_disconnect_t *VAR_6 = (autoconfig_disconnect_t*)FUNC_0(1, sizeof(*VAR_6));

   if (!VAR_6 || !VAR_5)
      goto error;

   VAR_4[0] = '\0';

   VAR_6->idx = VAR_2;

   FUNC_7(VAR_4, sizeof(VAR_4), "%s #%u (%s).",
         FUNC_6(VAR_0),
         VAR_2, VAR_3);

   VAR_6->msg = FUNC_8(VAR_4);

   FUNC_5(VAR_6->idx);
   FUNC_4(VAR_6->idx);
   FUNC_2(VAR_6->idx);
   FUNC_3(VAR_6->idx);

   VAR_5->state = VAR_6;
   VAR_5->handler = VAR_1;

   FUNC_11(VAR_5);

   return 1;

error:
   if (VAR_6)
   {
      if (!FUNC_9(VAR_6->msg))
         FUNC_1(VAR_6->msg);
      FUNC_1(VAR_6);
   }
   if (VAR_5)
      FUNC_1(VAR_5);

   return 0;
}
