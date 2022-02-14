
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dma_pub {int dummy; } ;
struct TYPE_2__ {int txavail; int dmactrlflags; } ;
struct dma_info {int ntxd; int txdpa; scalar_t__ aligndesc_4k; int core; TYPE_1__ dma; int txd64; scalar_t__ txout; scalar_t__ txin; int name; } ;
struct dma64desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dma_info*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char,int) ;

void FUNC_5(struct dma_pub *VAR_4)
{
 struct dma_info *VAR_5 = (struct dma_info *)VAR_4;
 u32 VAR_6 = VAR_1;

 FUNC_3(VAR_5->core, "%s:\n", VAR_5->name);

 if (VAR_5->ntxd == 0)
  return;

 VAR_5->txin = VAR_5->txout = 0;
 VAR_5->dma.txavail = VAR_5->ntxd - 1;


 FUNC_4(VAR_5->txd64, '\0', (VAR_5->ntxd * sizeof(struct dma64desc)));




 if (!VAR_5->aligndesc_4k)
  FUNC_1(VAR_5, VAR_3, VAR_5->txdpa);

 if ((VAR_5->dma.dmactrlflags & VAR_2) == 0)
  VAR_6 |= VAR_0;
 FUNC_2(VAR_5->core, FUNC_0(VAR_5, VAR_6), VAR_6);




 if (VAR_5->aligndesc_4k)
  FUNC_1(VAR_5, VAR_3, VAR_5->txdpa);
}
