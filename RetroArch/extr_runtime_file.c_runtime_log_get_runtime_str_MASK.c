
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hours; int minutes; int seconds; } ;
struct TYPE_5__ {TYPE_1__ runtime; } ;
typedef TYPE_2__ runtime_log_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,char*,...) ;

void FUNC_2(runtime_log_t *VAR_1, char *VAR_2, size_t VAR_3)
{
   int VAR_4 = 0;

   if (VAR_1)
   {
      VAR_4 = FUNC_1(VAR_2, VAR_3, "%s %02u:%02u:%02u",
            FUNC_0(VAR_0),
            VAR_1->runtime.hours, VAR_1->runtime.minutes, VAR_1->runtime.seconds);
   }
   else
   {
      VAR_4 = FUNC_1(VAR_2, VAR_3, "%s 00:00:00",
            FUNC_0(VAR_0));
   }

   if ((VAR_4 < 0) || (VAR_4 >= 64))
      VAR_4 = 0;
}
