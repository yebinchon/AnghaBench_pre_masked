
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int link_up; } ;
struct bnx2x {int flags; scalar_t__ state; TYPE_1__ link_vars; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bnx2x* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->flags & VAR_1 || (VAR_3->state != VAR_0))
  return 0;

 return VAR_3->link_vars.link_up;
}
