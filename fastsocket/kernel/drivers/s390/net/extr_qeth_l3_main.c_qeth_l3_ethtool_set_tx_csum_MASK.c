
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qeth_card {int dummy; } ;
struct net_device {int features; struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct qeth_card *VAR_5 = VAR_3->ml_priv;

 if (VAR_4) {
  if (FUNC_0(VAR_5, VAR_1))
   VAR_3->features |= VAR_2;
  else
   return -VAR_0;
 } else
  VAR_3->features &= ~VAR_2;

 return 0;
}
