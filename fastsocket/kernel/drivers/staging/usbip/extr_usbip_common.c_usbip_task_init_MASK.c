
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_task {char* name; void (* loop_ops ) (struct usbip_task*) ;int thread_done; int * thread; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct usbip_task *VAR_0, char *VAR_1,
  void (*VAR_2)(struct usbip_task *))
{
 VAR_0->thread = ((void*)0);
 FUNC_0(&VAR_0->thread_done);
 VAR_0->name = VAR_1;
 VAR_0->loop_ops = VAR_2;
}
