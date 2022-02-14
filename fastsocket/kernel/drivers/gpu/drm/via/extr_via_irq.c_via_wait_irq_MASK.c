
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_8__ {scalar_t__ num_irqs; TYPE_5__* via_irqs; } ;
typedef TYPE_3__ drm_via_private_t ;
struct TYPE_7__ {int tval_usec; int tval_sec; } ;
struct TYPE_6__ {scalar_t__ irq; int type; int sequence; } ;
struct TYPE_9__ {TYPE_2__ reply; TYPE_1__ request; } ;
typedef TYPE_4__ drm_via_irqwait_t ;
struct TYPE_10__ {int irq_received; } ;
typedef TYPE_5__ drm_via_irq_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (struct drm_device*,scalar_t__,int,int *) ;

int FUNC_4(struct drm_device *VAR_5, void *VAR_6, struct drm_file *VAR_7)
{
 drm_via_irqwait_t *VAR_8 = VAR_6;
 struct timeval VAR_9;
 int VAR_10 = 0;
 drm_via_private_t *VAR_11 = (drm_via_private_t *) VAR_5->dev_private;
 drm_via_irq_t *VAR_12 = VAR_11->via_irqs;
 int VAR_13;

 if (VAR_8->request.irq >= VAR_11->num_irqs) {
  FUNC_0("Trying to wait on unknown irq %d\n",
     VAR_8->request.irq);
  return -VAR_0;
 }

 VAR_12 += VAR_8->request.irq;

 switch (VAR_8->request.type & ~VAR_1) {
 case 128:
  VAR_8->request.sequence +=
   FUNC_1(&VAR_12->irq_received);
  VAR_8->request.type &= ~VAR_4;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8->request.type & VAR_3) {
  FUNC_0("Signals on Via IRQs not implemented yet.\n");
  return -VAR_0;
 }

 VAR_13 = (VAR_8->request.type & VAR_2);

 VAR_10 = FUNC_3(VAR_5, VAR_8->request.irq, VAR_13,
      &VAR_8->request.sequence);
 FUNC_2(&VAR_9);
 VAR_8->reply.tval_sec = VAR_9.tv_sec;
 VAR_8->reply.tval_usec = VAR_9.tv_usec;

 return VAR_10;
}
