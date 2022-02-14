
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int pdev; } ;
struct slgt_desc {int * buf; int buf_dma_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_1, struct slgt_desc *VAR_2, int VAR_3)
{
 int VAR_4;
 for (VAR_4=0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].buf == ((void*)0))
   continue;
  FUNC_0(VAR_1->pdev, VAR_0, VAR_2[VAR_4].buf, VAR_2[VAR_4].buf_dma_addr);
  VAR_2[VAR_4].buf = ((void*)0);
 }
}
