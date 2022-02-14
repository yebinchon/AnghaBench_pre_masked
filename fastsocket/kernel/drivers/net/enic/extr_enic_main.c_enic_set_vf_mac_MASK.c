
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct enic_port_profile {int vf_mac; } ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,struct enic*,int ,int *) ;
 int FUNC_1 (struct enic*,int,struct enic_port_profile*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 struct enic* FUNC_6 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct enic *VAR_7 = FUNC_6(VAR_4);
 struct enic_port_profile *VAR_8;
 int VAR_9;

 FUNC_1(VAR_7, VAR_5, VAR_8, &VAR_9);
 if (VAR_9)
  return VAR_9;

 if (FUNC_3(VAR_6) || FUNC_4(VAR_6)) {
  if (VAR_5 == VAR_2) {
   FUNC_5(VAR_8->vf_mac, VAR_6, VAR_1);
   return 0;
  } else {



   FUNC_0(VAR_5, VAR_9, VAR_7,
    VAR_3, VAR_6);
   return FUNC_2(VAR_9);
  }
 } else
  return -VAR_0;
}
