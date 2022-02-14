
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int ucode_write_complete; int ucode_write_waitq; } ;
struct iwl_trans {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct iwl_trans*,int ,int) ;
 int FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct iwl_trans *VAR_12, u32 VAR_13,
       dma_addr_t VAR_14, u32 VAR_15)
{
 struct iwl_trans_pcie *VAR_16 = FUNC_6(VAR_12);
 int VAR_17;

 VAR_16->ucode_write_complete = 0;

 FUNC_8(VAR_12,
      FUNC_2(VAR_3),
      VAR_9);

 FUNC_8(VAR_12,
      FUNC_0(VAR_3),
      VAR_13);

 FUNC_8(VAR_12,
      FUNC_3(VAR_3),
      VAR_14 & VAR_1);

 FUNC_8(VAR_12,
      FUNC_4(VAR_3),
      (FUNC_7(VAR_14)
    << VAR_2) | VAR_15);

 FUNC_8(VAR_12,
      FUNC_1(VAR_3),
      1 << VAR_5 |
      1 << VAR_4 |
      VAR_6);

 FUNC_8(VAR_12,
      FUNC_2(VAR_3),
      VAR_8 |
      VAR_10 |
      VAR_7);

 VAR_17 = FUNC_9(VAR_16->ucode_write_waitq,
     VAR_16->ucode_write_complete, 5 * VAR_11);
 if (!VAR_17) {
  FUNC_5(VAR_12, "Failed to load firmware chunk!\n");
  return -VAR_0;
 }

 return 0;
}
