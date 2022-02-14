
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {unsigned long long ict_tbl; int ict_tbl_dma; int inta_mask; scalar_t__ ict_index; } ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,unsigned long long) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long long FUNC_3 (int ,int,int*,int ) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (unsigned long long,int ,int) ;

int FUNC_6(struct iwl_trans *VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_1(VAR_5);

 VAR_6->ict_tbl =
  FUNC_3(VAR_5->dev, VAR_4,
       &VAR_6->ict_tbl_dma,
       VAR_3);
 if (!VAR_6->ict_tbl)
  return -VAR_2;


 if (FUNC_2(VAR_6->ict_tbl_dma & (VAR_4 - 1))) {
  FUNC_4(VAR_5);
  return -VAR_1;
 }

 FUNC_0(VAR_5, "ict dma addr %Lx\n",
        (unsigned long long)VAR_6->ict_tbl_dma);

 FUNC_0(VAR_5, "ict vir addr %p\n", VAR_6->ict_tbl);


 FUNC_5(VAR_6->ict_tbl, 0, VAR_4);
 VAR_6->ict_index = 0;


 VAR_6->inta_mask |= VAR_0;
 return 0;
}
