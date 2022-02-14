
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sg_table {int dummy; } ;
struct iommu {int dummy; } ;


 scalar_t__ FUNC_0 (struct sg_table*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct iommu*,int ,struct sg_table*,void*,size_t,int ) ;
 struct sg_table* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct sg_table*) ;
 int FUNC_6 (struct sg_table*,int ,size_t) ;
 int FUNC_7 (struct sg_table*) ;

__attribute__((used)) static u32 FUNC_8(struct iommu *VAR_0, u32 VAR_1, u32 VAR_2, void *VAR_3,
     size_t VAR_4, u32 VAR_5)
{
 struct sg_table *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_6(VAR_6, VAR_2, VAR_4);

 VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_1)) {
  FUNC_5(VAR_6);
  FUNC_7(VAR_6);
 }

 return VAR_1;
}
