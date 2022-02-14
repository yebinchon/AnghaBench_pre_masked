
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct port_info *VAR_4 = FUNC_1(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 int VAR_6;

 if (VAR_3 == 0)
  VAR_3 = 2;

 for (VAR_6 = 0; VAR_6 < VAR_3 * 2; VAR_6++) {
  FUNC_2(VAR_5, VAR_0, VAR_1,
     (VAR_6 & 1) ? VAR_1 : 0);
  if (FUNC_0(500))
   break;
 }
 FUNC_2(VAR_5, VAR_0, VAR_1,
    VAR_1);
 return 0;
}
