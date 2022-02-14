
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct iommu {int nr_tlb_entries; int name; int dev; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_2 (int ,int ) ;
 struct dentry* FUNC_3 (char*,int,struct dentry*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iommu* FUNC_4 (struct platform_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct platform_device* FUNC_5 (struct device*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_5(VAR_9);
 struct iommu *VAR_12 = FUNC_4(VAR_11);
 struct dentry *VAR_13, *VAR_14;

 if (!VAR_12 || !VAR_12->dev)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_12->name, VAR_2);
 if (!VAR_13)
  return -VAR_1;
 VAR_14 = VAR_13;

 VAR_13 = FUNC_3("nr_tlb_entries", 400, VAR_14,
         (u8 *)&VAR_12->nr_tlb_entries);
 if (!VAR_13)
  return -VAR_1;

 FUNC_1(VAR_8);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 FUNC_0(VAR_5);
 FUNC_1(VAR_4);
 FUNC_0(VAR_3);

 return 0;
}
