
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct bpqdev {int bpq_list; int acpt_addr; int dest_addr; struct net_device* axdev; struct net_device* ethdev; } ;
typedef int bpq_eth_addr ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ,int) ;
 struct bpqdev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 int VAR_5;
 struct net_device *VAR_6;
 struct bpqdev *VAR_7;

 VAR_6 = FUNC_0(sizeof(struct bpqdev), "bpq%d",
      VAR_3);
 if (!VAR_6)
  return -VAR_0;


 VAR_7 = FUNC_8(VAR_6);
 FUNC_3(VAR_4);
 VAR_7->ethdev = VAR_4;
 VAR_7->axdev = VAR_6;

 FUNC_7(VAR_7->dest_addr, VAR_1, sizeof(bpq_eth_addr));
 FUNC_7(VAR_7->acpt_addr, VAR_1, sizeof(bpq_eth_addr));

 VAR_5 = FUNC_2(VAR_6, VAR_6->name);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = FUNC_9(VAR_6);
 if (VAR_5)
  goto error;
 FUNC_1(VAR_6);


 FUNC_6(&VAR_7->bpq_list, &VAR_2);
 return 0;

 error:
 FUNC_4(VAR_4);
 FUNC_5(VAR_6);
 return VAR_5;

}
