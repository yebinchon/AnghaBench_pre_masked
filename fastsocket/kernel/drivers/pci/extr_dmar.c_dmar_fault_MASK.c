
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct intel_iommu {int reg; int register_lock; int cap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct intel_iommu*,int,int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int,int) ;

irqreturn_t FUNC_14(int VAR_5, void *VAR_6)
{
 struct intel_iommu *VAR_7 = VAR_6;
 int VAR_8, VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;

 FUNC_11(&VAR_7->register_lock, VAR_11);
 VAR_10 = FUNC_10(VAR_7->reg + VAR_0);
 if (VAR_10)
  FUNC_9("DRHD: handling fault status reg %x\n", VAR_10);


 if (!(VAR_10 & VAR_2))
  goto clear_rest;

 VAR_9 = FUNC_6(VAR_10);
 VAR_8 = FUNC_0(VAR_7->cap);
 while (1) {
  u8 VAR_12;
  u16 VAR_13;
  u64 VAR_14;
  int VAR_15;
  u32 VAR_16;


  VAR_16 = FUNC_10(VAR_7->reg + VAR_8 +
    VAR_9 * VAR_4 + 12);
  if (!(VAR_16 & VAR_1))
   break;

  VAR_12 = FUNC_2(VAR_16);
  VAR_15 = FUNC_5(VAR_16);

  VAR_16 = FUNC_10(VAR_7->reg + VAR_8 +
    VAR_9 * VAR_4 + 8);
  VAR_13 = FUNC_4(VAR_16);

  VAR_14 = FUNC_8(VAR_7->reg + VAR_8 +
    VAR_9 * VAR_4);
  VAR_14 = FUNC_3(VAR_14);

  FUNC_13(VAR_1, VAR_7->reg + VAR_8 +
   VAR_9 * VAR_4 + 12);

  FUNC_12(&VAR_7->register_lock, VAR_11);

  FUNC_7(VAR_7, VAR_15, VAR_12,
    VAR_13, VAR_14);

  VAR_9++;
  if (VAR_9 >= FUNC_1(VAR_7->cap))
   VAR_9 = 0;
  FUNC_11(&VAR_7->register_lock, VAR_11);
 }
clear_rest:

 VAR_10 = FUNC_10(VAR_7->reg + VAR_0);
 FUNC_13(VAR_10, VAR_7->reg + VAR_0);

 FUNC_12(&VAR_7->register_lock, VAR_11);
 return VAR_3;
}
