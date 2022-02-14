
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int savefile; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
   FUNC_0();

   FUNC_1();

   if (!FUNC_3())
   {
      global_t *VAR_1 = &VAR_0;
      FUNC_2(VAR_1->name.savefile);
   }
}
