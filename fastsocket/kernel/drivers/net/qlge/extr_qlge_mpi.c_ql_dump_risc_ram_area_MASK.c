
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (void*,char*,int) ;
 char* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,int) ;

int FUNC_4(struct ql_adapter *VAR_1, void *VAR_2,
  u32 VAR_3, int VAR_4)
{
 int VAR_5;
 char *VAR_6;
 dma_addr_t VAR_7;

 VAR_6 = FUNC_1(VAR_1->pdev, VAR_4 * sizeof(u32),
     &VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1, VAR_7, VAR_3, VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_2, VAR_6, VAR_4 * sizeof(u32));

 FUNC_2(VAR_1->pdev, VAR_4 * sizeof(u32), VAR_6,
    VAR_7);
 return VAR_5;
}
