
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 scalar_t__ FUNC_4 (struct ql_adapter*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4, u16 VAR_5)
{
 struct ql_adapter *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = VAR_0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_2);
 if (VAR_8)
  return;
 if (FUNC_4
     (VAR_6, (u8 *) &VAR_7, VAR_1, VAR_5)) {
  FUNC_1(VAR_6, VAR_3, VAR_6->ndev,
     "Failed to init vlan address.\n");
 }
 FUNC_3(VAR_6, VAR_2);
}
