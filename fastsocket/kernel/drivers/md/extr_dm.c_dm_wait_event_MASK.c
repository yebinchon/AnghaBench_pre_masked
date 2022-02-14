
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int event_nr; int eventq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct mapped_device *VAR_0, int VAR_1)
{
 return FUNC_1(VAR_0->eventq,
   (VAR_1 != FUNC_0(&VAR_0->event_nr)));
}
