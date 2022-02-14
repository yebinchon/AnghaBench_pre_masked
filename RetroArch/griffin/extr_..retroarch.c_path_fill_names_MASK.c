
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ips; int bps; int ups; int savefile; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
   global_t *VAR_2 = &VAR_0;

   FUNC_2();

   if (VAR_2)
      FUNC_0(VAR_2->name.savefile);

   if (FUNC_3(VAR_1))
      return;

   if (VAR_2)
   {
      if (FUNC_3(VAR_2->name.ups))
         FUNC_1(VAR_2->name.ups, VAR_1,
               ".ups",
               sizeof(VAR_2->name.ups));

      if (FUNC_3(VAR_2->name.bps))
         FUNC_1(VAR_2->name.bps, VAR_1,
               ".bps",
               sizeof(VAR_2->name.bps));

      if (FUNC_3(VAR_2->name.ips))
         FUNC_1(VAR_2->name.ips, VAR_1,
               ".ips",
               sizeof(VAR_2->name.ips));
   }
}
