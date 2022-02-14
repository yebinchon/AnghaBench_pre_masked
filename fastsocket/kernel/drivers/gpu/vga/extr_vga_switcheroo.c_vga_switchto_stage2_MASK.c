
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vga_switcheroo_client {int active; scalar_t__ pwr_state; int id; int pdev; TYPE_2__* ops; scalar_t__ fb_info; } ;
struct fb_event {scalar_t__ info; } ;
struct TYPE_6__ {TYPE_1__* handler; int clients; } ;
struct TYPE_5__ {int (* reprobe ) (int ) ;} ;
struct TYPE_4__ {int (* switchto ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct fb_event*) ;
 struct vga_switcheroo_client* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vga_switcheroo_client*) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_6(struct vga_switcheroo_client *VAR_4)
{
 int VAR_5;
 struct vga_switcheroo_client *VAR_6;

 VAR_6 = FUNC_1(&VAR_3.clients);
 if (!VAR_6)
  return 0;

 VAR_6->active = 0;

 FUNC_2(VAR_6->id, VAR_1);

 if (VAR_4->fb_info) {
  struct fb_event VAR_7;
  VAR_7.info = VAR_4->fb_info;
  FUNC_0(VAR_0, &VAR_7);
 }

 VAR_5 = VAR_3.handler->switchto(VAR_4->id);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->ops->reprobe)
  VAR_4->ops->reprobe(VAR_4->pdev);

 if (VAR_6->pwr_state == VAR_2)
  FUNC_5(VAR_6);

 FUNC_2(VAR_4->id, VAR_2);

 VAR_4->active = 1;
 return 0;
}
