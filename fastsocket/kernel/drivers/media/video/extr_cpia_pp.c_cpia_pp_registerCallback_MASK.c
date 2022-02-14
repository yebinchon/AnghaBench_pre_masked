
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_cam_entry {void (* cb_func ) (void*) ;int cb_task; void* cb_data; TYPE_1__* port; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void *VAR_2, void (*VAR_3)(void *VAR_4), void *VAR_5)
{
 struct pp_cam_entry *VAR_6 = VAR_2;
 int VAR_7 = 0;

 if(VAR_6->port->irq != VAR_0) {
  VAR_6->cb_func = VAR_3;
  VAR_6->cb_data = VAR_5;
  FUNC_0(&VAR_6->cb_task, VAR_1);
 } else {
  VAR_7 = -1;
 }
 return VAR_7;
}
