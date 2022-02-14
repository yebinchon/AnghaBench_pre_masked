
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int expires; } ;
struct frad_local {TYPE_1__ timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct net_device *VAR_2;
 struct frad_local *VAR_3;

 VAR_2 = (struct net_device *) VAR_1;
 VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_2, VAR_0))
  FUNC_3(VAR_2);

 VAR_3->timer.expires = 1;
 FUNC_0(&VAR_3->timer);
}
