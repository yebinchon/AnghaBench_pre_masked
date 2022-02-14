
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {scalar_t__ ixgbe_dbg_adapter; int pdev; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 struct dentry* FUNC_1 (char*,int,scalar_t__,struct ixgbe_adapter*,int *) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;

void FUNC_4(struct ixgbe_adapter *VAR_3)
{
 const char *VAR_4 = FUNC_3(VAR_3->pdev);
 struct dentry *VAR_5;
 VAR_3->ixgbe_dbg_adapter = FUNC_0(VAR_4, VAR_2);
 if (VAR_3->ixgbe_dbg_adapter) {
  VAR_5 = FUNC_1("reg_ops", 0600,
         VAR_3->ixgbe_dbg_adapter, VAR_3,
         &VAR_1);
  if (!VAR_5)
   FUNC_2("debugfs reg_ops for %s failed\n", VAR_4);
  VAR_5 = FUNC_1("netdev_ops", 0600,
         VAR_3->ixgbe_dbg_adapter, VAR_3,
         &VAR_0);
  if (!VAR_5)
   FUNC_2("debugfs netdev_ops for %s failed\n", VAR_4);
 } else {
  FUNC_2("debugfs entry for %s failed\n", VAR_4);
 }
}
