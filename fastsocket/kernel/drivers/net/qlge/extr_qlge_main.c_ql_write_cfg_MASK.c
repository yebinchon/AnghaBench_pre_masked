
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int pdev; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*,int) ;
 int FUNC_7 (struct ql_adapter*,int ,int) ;

int FUNC_8(struct ql_adapter *VAR_13, void *VAR_14, int VAR_15, u32 VAR_16,
   u16 VAR_17)
{
 u64 VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 u32 VAR_21;
 u32 VAR_22;

 VAR_20 =
     (VAR_16 & (VAR_3 | VAR_2 | VAR_1)) ? VAR_10 :
     VAR_9;

 VAR_18 = FUNC_2(VAR_13->pdev, VAR_14, VAR_15, VAR_20);
 if (FUNC_1(VAR_13->pdev, VAR_18)) {
  FUNC_0(VAR_13, VAR_12, VAR_13->ndev, "Couldn't map DMA area.\n");
  return -VAR_6;
 }

 VAR_19 = FUNC_4(VAR_13, VAR_11);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_6(VAR_13, VAR_16);
 if (VAR_19) {
  FUNC_0(VAR_13, VAR_12, VAR_13->ndev,
     "Timed out waiting for CFG to come ready.\n");
  goto exit;
 }

 FUNC_7(VAR_13, VAR_8, (u32) VAR_18);
 FUNC_7(VAR_13, VAR_7, (u32) (VAR_18 >> 32));

 VAR_21 = VAR_4 | (VAR_16 << 16);
 VAR_22 = VAR_16 | (VAR_17 << VAR_5);
 FUNC_7(VAR_13, VAR_0, (VAR_21 | VAR_22));




 VAR_19 = FUNC_6(VAR_13, VAR_16);
exit:
 FUNC_5(VAR_13, VAR_11);
 FUNC_3(VAR_13->pdev, VAR_18, VAR_15, VAR_20);
 return VAR_19;
}
