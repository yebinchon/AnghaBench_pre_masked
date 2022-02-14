
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct t3cdev {TYPE_3__* lldev; } ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dev; } ;
struct TYPE_4__ {scalar_t__ rev; int b_wnd; int a_wnd; int mtus; } ;
struct adapter {int open_device_map; TYPE_3__** port; TYPE_1__ params; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {int mtu; TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct t3cdev*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct t3cdev*) ;
 int FUNC_4 (struct adapter*) ;
 struct t3cdev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 struct port_info* FUNC_9 (struct net_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (struct adapter*,int ,int ,int ,int) ;
 int FUNC_12 (struct adapter*,int) ;
 scalar_t__ FUNC_13 (int ,int*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_3)
{
 struct port_info *VAR_4 = FUNC_9(VAR_3);
 struct adapter *VAR_5 = VAR_4->adapter;
 struct t3cdev *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = VAR_5->open_device_map & VAR_1;
 int VAR_8;

 if (FUNC_13(VAR_0, &VAR_5->open_device_map))
  return 0;

 if (!VAR_7 && (VAR_8 = FUNC_4(VAR_5)) < 0)
  goto out;

 FUNC_12(VAR_5, 1);
 VAR_6->lldev = VAR_5->port[0];
 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8)
  goto out;

 FUNC_7(VAR_5);
 FUNC_11(VAR_5, VAR_5->params.mtus, VAR_5->params.a_wnd,
       VAR_5->params.b_wnd,
       VAR_5->params.rev == 0 ?
       VAR_5->port[0]->mtu : 0xffff);
 FUNC_8(VAR_5);

 if (FUNC_10(&VAR_6->lldev->dev.kobj, &VAR_2))
  FUNC_6(&VAR_3->dev, "cannot create sysfs group\n");


 FUNC_1(VAR_6);

out:

 if (VAR_8) {
  FUNC_12(VAR_5, 0);
  FUNC_0(VAR_0, &VAR_5->open_device_map);
  FUNC_3(VAR_6);
 }
 return VAR_8;
}
