
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrcd_table_entry {struct ib_xrcd* xrcd; } ;
struct inode {int dummy; } ;
struct ib_xrcd {int dummy; } ;
struct ib_uverbs_device {int dummy; } ;


 struct xrcd_table_entry* FUNC_0 (struct ib_uverbs_device*,struct inode*) ;

__attribute__((used)) static struct ib_xrcd *FUNC_1(struct ib_uverbs_device *VAR_0, struct inode *VAR_1)
{
 struct xrcd_table_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2->xrcd;
}
