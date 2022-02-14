
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int nservers; unsigned int nfilters; } ;
struct TYPE_4__ {scalar_t__ rev; TYPE_1__ mc5; } ;
struct adapter {int flags; TYPE_2__ params; int mc5; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct net_device *VAR_4, unsigned int VAR_5)
{
 struct port_info *VAR_6 = FUNC_1(VAR_4);
 struct adapter *VAR_7 = VAR_6->adapter;
 int VAR_8 = FUNC_0(VAR_7) ? VAR_3 : 0;

 if (VAR_7->flags & VAR_2)
  return -VAR_0;
 if (VAR_5 && VAR_7->params.rev == 0)
  return -VAR_1;
 if (VAR_5 > FUNC_2(&VAR_7->mc5) - VAR_7->params.mc5.nservers -
     VAR_8)
  return -VAR_1;
 VAR_7->params.mc5.nfilters = VAR_5;
 return 0;
}
