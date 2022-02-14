
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int dummy; } ;
struct orinoco_private {int has_sensitivity; struct hermes hw; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ fixed; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hermes*,int ,int ,int *) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     struct iw_param *VAR_6,
     char *VAR_7)
{
 struct orinoco_private *VAR_8 = FUNC_1(VAR_4);
 struct hermes *VAR_9 = &VAR_8->hw;
 u16 VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 if (!VAR_8->has_sensitivity)
  return -VAR_1;

 if (FUNC_2(VAR_8, &VAR_12) != 0)
  return -VAR_0;
 VAR_11 = FUNC_0(VAR_9, VAR_3,
      VAR_2, &VAR_10);
 FUNC_3(VAR_8, &VAR_12);

 if (VAR_11)
  return VAR_11;

 VAR_6->value = VAR_10;
 VAR_6->fixed = 0;

 return 0;
}
