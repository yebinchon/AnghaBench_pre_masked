
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int refill; int st_wq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct virtnet_info*,int ) ;
 int FUNC_3 (struct virtnet_info*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct virtnet_info *VAR_2 = FUNC_0(VAR_1);


 if (!FUNC_2(VAR_2, VAR_0))
  FUNC_1(VAR_2->st_wq, &VAR_2->refill, 0);

 FUNC_3(VAR_2);
 return 0;
}
