
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int inta; int status; int irq_lock; } ;
struct iwl_trans {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int VAR_6 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct iwl_trans*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_8, void *VAR_9)
{
 struct iwl_trans *VAR_10 = VAR_9;
 struct iwl_trans_pcie *VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12, VAR_13;




 FUNC_8(&VAR_11->irq_lock);

 FUNC_10(VAR_10->dev);





 VAR_13 = FUNC_5(VAR_10, VAR_2);
 FUNC_6(VAR_10, VAR_2, 0x00000000);


 VAR_12 = FUNC_5(VAR_10, VAR_1);

 if (VAR_12 & (~VAR_13)) {
  FUNC_0(VAR_10,
         "We got a masked interrupt (0x%08x)...Ack and ignore\n",
         VAR_12 & (~VAR_13));
  FUNC_6(VAR_10, VAR_1, VAR_12 & (~VAR_13));
  VAR_12 &= VAR_13;
 }




 if (!VAR_12) {
  FUNC_0(VAR_10, "Ignore interrupt, inta == 0\n");
  goto none;
 }

 if ((VAR_12 == 0xFFFFFFFF) || ((VAR_12 & 0xFFFFFFF0) == 0xa5a5a5a0)) {


  FUNC_2(VAR_10, "HARDWARE GONE?? INTA == 0x%08x\n", VAR_12);
  return VAR_3;
 }
 VAR_11->inta |= VAR_12;

 if (FUNC_7(VAR_12))
  return VAR_5;
 else if (FUNC_9(VAR_7, &VAR_11->status) &&
   !VAR_11->inta)
  FUNC_3(VAR_10);
 return VAR_3;

none:


 if (FUNC_9(VAR_7, &VAR_11->status) &&
     !VAR_11->inta)
  FUNC_3(VAR_10);

 return VAR_4;
}
