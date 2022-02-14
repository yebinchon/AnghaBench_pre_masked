
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int ctx; int stop_event_polling; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct carlu *VAR_1 = (void *)VAR_0;
 FUNC_0("event thread active and polling.\n");

 while (!VAR_1->stop_event_polling)
  FUNC_1(VAR_1->ctx);

 FUNC_0("==> event thread desixed.\n");
 return 0;
}
