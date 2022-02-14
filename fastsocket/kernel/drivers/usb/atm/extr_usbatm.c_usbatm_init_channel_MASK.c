
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct usbatm_channel {TYPE_1__ delay; int tasklet; int list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct usbatm_channel *VAR_1)
{
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->list);
 VAR_1->delay.function = VAR_0;
 VAR_1->delay.data = (unsigned long) &VAR_1->tasklet;
 FUNC_1(&VAR_1->delay);
}
