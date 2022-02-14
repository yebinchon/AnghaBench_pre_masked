
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pub {int dummy; } ;
struct dma_info {int nrxd; int rxdpa; scalar_t__ aligndesc_4k; int rxd64; scalar_t__ rxout; scalar_t__ rxin; int name; int core; } ;
struct dma64desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_info*,int ,int ) ;
 int FUNC_1 (struct dma_info*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char,int) ;

void FUNC_4(struct dma_pub *VAR_1)
{
 struct dma_info *VAR_2 = (struct dma_info *)VAR_1;

 FUNC_2(VAR_2->core, "%s:\n", VAR_2->name);

 if (VAR_2->nrxd == 0)
  return;

 VAR_2->rxin = VAR_2->rxout = 0;


 FUNC_3(VAR_2->rxd64, '\0', VAR_2->nrxd * sizeof(struct dma64desc));




 if (!VAR_2->aligndesc_4k)
  FUNC_0(VAR_2, VAR_0, VAR_2->rxdpa);

 FUNC_1(VAR_2);

 if (VAR_2->aligndesc_4k)
  FUNC_0(VAR_2, VAR_0, VAR_2->rxdpa);
}
