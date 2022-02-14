
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int numb_path; int traffic_class; int pkey; int sgid; TYPE_1__ dgid; } ;
struct ipoib_path {TYPE_2__ pathrec; int neigh_list; int queue; struct net_device* dev; } ;
struct ipoib_dev_priv {TYPE_4__* broadcast; int pkey; int local_gid; } ;
struct TYPE_7__ {int traffic_class; } ;
struct TYPE_8__ {TYPE_3__ mcmember; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct ipoib_path* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,void*,int) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ipoib_path *FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_4(VAR_1);
 struct ipoib_path *VAR_4;

 if (!VAR_3->broadcast)
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_1;

 FUNC_5(&VAR_4->queue);

 FUNC_0(&VAR_4->neigh_list);

 FUNC_3(VAR_4->pathrec.dgid.raw, VAR_2, sizeof (union ib_gid));
 VAR_4->pathrec.sgid = VAR_3->local_gid;
 VAR_4->pathrec.pkey = FUNC_1(VAR_3->pkey);
 VAR_4->pathrec.numb_path = 1;
 VAR_4->pathrec.traffic_class = VAR_3->broadcast->mcmember.traffic_class;

 return VAR_4;
}
