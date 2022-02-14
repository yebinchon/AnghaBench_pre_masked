
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int viid; TYPE_1__* adapter; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {int fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;
 struct port_info *VAR_6 = FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_6->adapter, VAR_6->adapter->fn, VAR_6->viid, VAR_3,
        (VAR_2->flags & VAR_1) ? 1 : 0,
        (VAR_2->flags & VAR_0) ? 1 : 0, 1, -1,
        VAR_4);
 return VAR_5;
}
