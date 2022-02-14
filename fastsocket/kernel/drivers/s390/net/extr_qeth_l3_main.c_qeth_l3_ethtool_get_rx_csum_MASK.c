
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ checksum_type; } ;
struct qeth_card {TYPE_1__ options; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct net_device *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_1->ml_priv;

 return (VAR_2->options.checksum_type == VAR_0);
}
