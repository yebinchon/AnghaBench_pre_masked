
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {size_t ict_index; int inta_mask; int inta; int irq_lock; int status; scalar_t__* ict_tbl; int use_ict; } ;
struct iwl_trans {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_5 ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int,void*) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,size_t,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;

irqreturn_t FUNC_15(int VAR_6, void *VAR_7)
{
 struct iwl_trans *VAR_8 = VAR_7;
 struct iwl_trans_pcie *VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13;
 unsigned long VAR_14;

 if (!VAR_8)
  return VAR_3;

 VAR_9 = FUNC_1(VAR_8);

 FUNC_9(&VAR_9->irq_lock, VAR_14);




 if (FUNC_14(!VAR_9->use_ict)) {
  irqreturn_t VAR_15 = FUNC_3(VAR_6, VAR_7);
  FUNC_10(&VAR_9->irq_lock, VAR_14);
  return VAR_15;
 }

 FUNC_13(VAR_8->dev);






 VAR_11 = FUNC_5(VAR_8, VAR_0);
 FUNC_6(VAR_8, VAR_0, 0x00000000);




 VAR_13 = FUNC_7(VAR_9->ict_tbl[VAR_9->ict_index]);
 FUNC_12(VAR_8->dev, VAR_9->ict_index, VAR_13);
 if (!VAR_13) {
  FUNC_0(VAR_8, "Ignore interrupt, inta == 0\n");
  goto none;
 }





 do {
  VAR_12 |= VAR_13;
  FUNC_0(VAR_8, "ICT index %d value 0x%08X\n",
    VAR_9->ict_index, VAR_13);
  VAR_9->ict_tbl[VAR_9->ict_index] = 0;
  VAR_9->ict_index =
   FUNC_4(VAR_9->ict_index, VAR_1);

  VAR_13 = FUNC_7(VAR_9->ict_tbl[VAR_9->ict_index]);
  FUNC_12(VAR_8->dev, VAR_9->ict_index,
        VAR_13);
 } while (VAR_13);


 if (VAR_12 == 0xffffffff)
  VAR_12 = 0;
 if (VAR_12 & 0xC0000)
  VAR_12 |= 0x8000;

 VAR_10 = (0xff & VAR_12) | ((0xff00 & VAR_12) << 16);
 FUNC_0(VAR_8, "ISR inta 0x%08x, enabled 0x%08x ict 0x%08x\n",
        VAR_10, VAR_11, VAR_12);

 VAR_10 &= VAR_9->inta_mask;
 VAR_9->inta |= VAR_10;


 if (FUNC_8(VAR_10)) {
  FUNC_10(&VAR_9->irq_lock, VAR_14);
  return VAR_4;
 } else if (FUNC_11(VAR_5, &VAR_9->status) &&
   !VAR_9->inta) {




  FUNC_2(VAR_8);
 }

 FUNC_10(&VAR_9->irq_lock, VAR_14);
 return VAR_2;

 none:



 if (FUNC_11(VAR_5, &VAR_9->status) &&
     !VAR_9->inta)
  FUNC_2(VAR_8);

 FUNC_10(&VAR_9->irq_lock, VAR_14);
 return VAR_3;
}
