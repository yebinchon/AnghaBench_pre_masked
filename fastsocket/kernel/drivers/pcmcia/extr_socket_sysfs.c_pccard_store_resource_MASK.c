
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int resource_setup_done; int state; int skt_mutex; TYPE_1__* callback; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int owner; int (* requery ) (struct pcmcia_socket*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct pcmcia_socket*,int ) ;
 struct pcmcia_socket* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;
 struct pcmcia_socket *VAR_8 = FUNC_6(VAR_3);

 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_8->lock, VAR_7);
 if (!VAR_8->resource_setup_done)
  VAR_8->resource_setup_done = 1;
 FUNC_4(&VAR_8->lock, VAR_7);

 FUNC_1(&VAR_8->skt_mutex);
 if ((VAR_8->callback) &&
     (VAR_8->state & VAR_2) &&
     !(VAR_8->state & VAR_1)) {
  if (FUNC_7(VAR_8->callback->owner)) {
   VAR_8->callback->requery(VAR_8, 0);
   FUNC_0(VAR_8->callback->owner);
  }
 }
 FUNC_2(&VAR_8->skt_mutex);

 return VAR_6;
}
