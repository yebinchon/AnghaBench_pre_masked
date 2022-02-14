
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct adapter {int fn; } ;
struct TYPE_2__ {int viid; } ;


 struct adapter* FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, u32 VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
  VAR_1 = 2;

 return FUNC_2(VAR_2, VAR_2->fn, FUNC_1(VAR_0)->viid,
    VAR_1 * 5);
}
