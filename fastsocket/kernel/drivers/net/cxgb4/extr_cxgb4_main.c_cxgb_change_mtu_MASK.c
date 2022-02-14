
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int viid; TYPE_1__* adapter; } ;
struct net_device {int mtu; } ;
struct TYPE_2__ {int fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 int VAR_4;
 struct port_info *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 < 81 || VAR_3 > VAR_1)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_5->adapter, VAR_5->adapter->fn, VAR_5->viid, VAR_3, -1,
       -1, -1, -1, 1);
 if (!VAR_4)
  VAR_2->mtu = VAR_3;
 return VAR_4;
}
