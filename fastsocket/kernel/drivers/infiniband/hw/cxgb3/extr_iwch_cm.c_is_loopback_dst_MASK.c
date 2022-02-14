
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
struct iw_cm_id {TYPE_2__ remote_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 struct net_device* FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct iw_cm_id *VAR_1)
{
 struct net_device *VAR_2;

 VAR_2 = FUNC_1(&VAR_0, VAR_1->remote_addr.sin_addr.s_addr);
 if (!VAR_2)
  return 0;
 FUNC_0(VAR_2);
 return 1;
}
