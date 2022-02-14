
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int stop_event_polling; int dev_list; int event_thread; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct carlu*) ;
 int FUNC_2 (struct carlu*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct carlu *VAR_0)
{
 int VAR_1;

 FUNC_3("==>release device.\n");

 VAR_0->stop_event_polling = 1;

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->event_thread, &VAR_1);

 FUNC_2(VAR_0);
 FUNC_4(&VAR_0->dev_list);
}
