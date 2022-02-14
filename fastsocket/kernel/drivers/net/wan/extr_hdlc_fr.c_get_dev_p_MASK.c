
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* main; struct net_device* ether; } ;
typedef TYPE_1__ pvc_device ;


 int VAR_0 ;

__attribute__((used)) static inline struct net_device** FUNC_0(pvc_device *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0)
  return &VAR_1->ether;
 else
  return &VAR_1->main;
}
