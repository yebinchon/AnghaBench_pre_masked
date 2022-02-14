
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vqs; } ;
struct vhost_net {TYPE_2__ dev; int * poll; } ;
struct TYPE_3__ {int poll; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vhost_net *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->poll + VAR_1);
 FUNC_0(&VAR_0->dev.vqs[VAR_1].poll);
}
