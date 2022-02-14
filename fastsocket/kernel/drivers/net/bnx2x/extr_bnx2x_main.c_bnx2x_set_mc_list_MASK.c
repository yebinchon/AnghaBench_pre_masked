
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x_mcast_ramrod_params {int * mcast_obj; int * member_0; } ;
struct bnx2x {int mcast_obj; struct net_device* dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_2 (struct bnx2x_mcast_ramrod_params*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct bnx2x_mcast_ramrod_params VAR_4 = {((void*)0)};
 int VAR_5 = 0;

 VAR_4.mcast_obj = &VAR_2->mcast_obj;


 VAR_5 = FUNC_1(VAR_2, &VAR_4, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0("Failed to clear multicast configuration: %d\n", VAR_5);
  return VAR_5;
 }


 if (FUNC_4(VAR_3)) {
  VAR_5 = FUNC_3(VAR_2, &VAR_4);
  if (VAR_5) {
   FUNC_0("Failed to create multicast MACs list: %d\n",
      VAR_5);
   return VAR_5;
  }


  VAR_5 = FUNC_1(VAR_2, &VAR_4,
     VAR_0);
  if (VAR_5 < 0)
   FUNC_0("Failed to set a new multicast configuration: %d\n",
      VAR_5);

  FUNC_2(&VAR_4);
 }

 return VAR_5;
}
