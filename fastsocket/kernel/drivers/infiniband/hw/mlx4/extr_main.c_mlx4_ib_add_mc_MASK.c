
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_ib_qp {int port; } ;
struct TYPE_2__ {struct net_device** netdevs; int lock; } ;
struct mlx4_ib_dev {TYPE_1__ iboe; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int *,int,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct in6_addr*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx4_ib_dev *VAR_0, struct mlx4_ib_qp *VAR_1,
     union ib_gid *VAR_2)
{
 u8 VAR_3[6];
 struct net_device *VAR_4;
 int VAR_5 = 0;

 if (!VAR_1->port)
  return 0;

 FUNC_6(&VAR_0->iboe.lock);
 VAR_4 = VAR_0->iboe.netdevs[VAR_1->port - 1];
 if (VAR_4)
  FUNC_0(VAR_4);
 FUNC_7(&VAR_0->iboe.lock);

 if (VAR_4) {
  FUNC_3((struct in6_addr *)VAR_2, VAR_3);
  FUNC_4();
  FUNC_1(VAR_0->iboe.netdevs[VAR_1->port - 1], VAR_3, 6, 0);
  VAR_5 = 1;
  FUNC_5();
  FUNC_2(VAR_4);
 }

 return VAR_5;
}
