
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue; int error; } ;
struct dmxdev_filter {TYPE_2__ buffer; TYPE_1__* dev; int state; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct dmxdev_filter *VAR_3 = (struct dmxdev_filter *)VAR_2;

 VAR_3->buffer.error = -VAR_1;
 FUNC_0(&VAR_3->dev->lock);
 VAR_3->state = VAR_0;
 FUNC_1(&VAR_3->dev->lock);
 FUNC_2(&VAR_3->buffer.queue);
}
