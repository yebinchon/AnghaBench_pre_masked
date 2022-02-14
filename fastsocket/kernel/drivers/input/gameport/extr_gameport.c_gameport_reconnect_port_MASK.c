
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {struct gameport* child; TYPE_1__* drv; } ;
struct TYPE_2__ {scalar_t__ (* reconnect ) (struct gameport*) ;} ;


 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*) ;
 scalar_t__ FUNC_2 (struct gameport*) ;

__attribute__((used)) static void FUNC_3(struct gameport *VAR_0)
{
 do {
  if (!VAR_0->drv || !VAR_0->drv->reconnect || VAR_0->drv->reconnect(VAR_0)) {
   FUNC_0(VAR_0);
   FUNC_1(VAR_0);

   break;
  }
  VAR_0 = VAR_0->child;
 } while (VAR_0);
}
