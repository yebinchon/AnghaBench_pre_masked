
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct virtqueue {TYPE_2__ vring; TYPE_1__* dev; } ;
struct net_info {int tunfd; } ;
struct iovec {int dummy; } ;
struct TYPE_3__ {struct net_info* priv; } ;


 int FUNC_0 (struct virtqueue*,unsigned int,int ) ;
 int FUNC_1 (int,char*) ;
 unsigned int FUNC_2 (struct virtqueue*,struct iovec*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_3 (int ,struct iovec*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_0)
{
 struct net_info *VAR_1 = VAR_0->dev->priv;
 unsigned int VAR_2, VAR_3, VAR_4;
 struct iovec VAR_5[VAR_0->vring.num];


 VAR_2 = FUNC_2(VAR_0, VAR_5, &VAR_3, &VAR_4);
 if (VAR_4)
  FUNC_1(1, "Input buffers in net output queue?");




 if (FUNC_3(VAR_1->tunfd, VAR_5, VAR_3) < 0)
  FUNC_1(1, "Write to tun failed?");





 FUNC_0(VAR_0, VAR_2, 0);
}
