
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
struct virtqueue {scalar_t__ pending_used; TYPE_2__* dev; TYPE_1__ vring; } ;
struct net_info {int tunfd; } ;
struct iovec {int dummy; } ;
struct TYPE_4__ {struct net_info* priv; } ;


 int FUNC_0 (struct virtqueue*,unsigned int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,struct iovec*,unsigned int) ;
 int FUNC_4 (struct virtqueue*) ;
 unsigned int FUNC_5 (struct virtqueue*,struct iovec*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct virtqueue *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2, VAR_3, VAR_4;
 struct iovec VAR_5[VAR_0->vring.num];
 struct net_info *VAR_6 = VAR_0->dev->priv;





 VAR_2 = FUNC_5(VAR_0, VAR_5, &VAR_3, &VAR_4);
 if (VAR_3)
  FUNC_2(1, "Output buffers in net input queue?");





 if (VAR_0->pending_used && FUNC_6(VAR_6->tunfd))
  FUNC_4(VAR_0);





 VAR_1 = FUNC_3(VAR_6->tunfd, VAR_5, VAR_4);
 if (VAR_1 <= 0)
  FUNC_1(1, "Failed to read from tun.");





 FUNC_0(VAR_0, VAR_2, VAR_1);
}
