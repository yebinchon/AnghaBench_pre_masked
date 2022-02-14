
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dev; struct edgeport_port* context; int complete; } ;
struct edgeport_port {scalar_t__ ep_read_urb_state; int ep_lock; int shadow_mcr; TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* serial; struct urb* read_urb; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct edgeport_port *VAR_5)
{
 struct urb *VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_0(&VAR_5->ep_lock, VAR_8);

 if (VAR_5->ep_read_urb_state == VAR_1) {
  VAR_6 = VAR_5->port->read_urb;
  VAR_6->complete = VAR_4;
  VAR_6->context = VAR_5;
  VAR_6->dev = VAR_5->port->serial->dev;
  VAR_7 = FUNC_2(VAR_6, VAR_2);
 }
 VAR_5->ep_read_urb_state = VAR_0;
 VAR_5->shadow_mcr |= VAR_3;

 FUNC_1(&VAR_5->ep_lock, VAR_8);

 return VAR_7;
}
