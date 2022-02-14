
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int word_size; } ;
struct TYPE_4__ {TYPE_1__ nvm; } ;
struct e1000_adapter {TYPE_2__ hw; } ;


 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct e1000_adapter *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->hw.nvm.word_size * 2;
}
