
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_task {int thread_done; int * thread; int (* loop_ops ) (struct usbip_task*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct usbip_task*) ;
 int FUNC_6 () ;

int FUNC_7(void *VAR_3)
{
 struct usbip_task *VAR_4 = VAR_3;

 if (!VAR_4)
  return -VAR_0;

 FUNC_4();
 FUNC_3(VAR_4->name);
 FUNC_0(VAR_1);
 VAR_4->thread = VAR_2;
 FUNC_6();


 FUNC_1(&VAR_4->thread_done);


 VAR_4->loop_ops(VAR_4);


 VAR_4->thread = ((void*)0);

 FUNC_2(&VAR_4->thread_done, 0);
}
