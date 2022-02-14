
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_handler {int dummy; } ;
struct TYPE_2__ {struct vga_switcheroo_handler* handler; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_2(struct vga_switcheroo_handler *VAR_3)
{
 FUNC_0(&VAR_1);
 if (VAR_2.handler) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }

 VAR_2.handler = VAR_3;
 FUNC_1(&VAR_1);
 return 0;
}
