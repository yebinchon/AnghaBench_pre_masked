
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uio_port {scalar_t__ size; TYPE_3__* portio; } ;
struct uio_mem {scalar_t__ size; TYPE_1__* map; } ;
struct uio_device {TYPE_4__* dev; int * portio_dir; TYPE_2__* info; int * map_dir; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {struct uio_port* port; struct uio_mem* mem; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct uio_device *VAR_3)
{
 int VAR_4;
 struct uio_mem *VAR_5;
 struct uio_port *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = &VAR_3->info->mem[VAR_4];
  if (VAR_5->size == 0)
   break;
  FUNC_0(&VAR_5->map->kobj);
 }
 FUNC_0(VAR_3->map_dir);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = &VAR_3->info->port[VAR_4];
  if (VAR_6->size == 0)
   break;
  FUNC_0(&VAR_6->portio->kobj);
 }
 FUNC_0(VAR_3->portio_dir);

 FUNC_1(&VAR_3->dev->kobj, &VAR_2);
}
