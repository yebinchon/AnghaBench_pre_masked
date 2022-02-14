
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int large_send; } ;
struct qeth_card {TYPE_1__ options; } ;
struct net_device {int features; struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct qeth_card *VAR_5 = VAR_3->ml_priv;
 int VAR_6 = 0;

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_5, VAR_2);
 } else {
  VAR_3->features &= ~VAR_0;
  VAR_5->options.large_send = VAR_1;
 }
 return VAR_6;
}
