
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adsp_device {scalar_t__ abort; int event_queue_lock; int event_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct adsp_device *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;
 FUNC_1(&VAR_0->event_queue_lock, VAR_1);
 VAR_2 = !FUNC_0(&VAR_0->event_queue);
 FUNC_2(&VAR_0->event_queue_lock, VAR_1);
 return VAR_2 || VAR_0->abort;
}
