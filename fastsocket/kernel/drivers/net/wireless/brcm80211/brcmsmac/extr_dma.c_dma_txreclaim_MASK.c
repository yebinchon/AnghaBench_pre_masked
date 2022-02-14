
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dma_pub {int dummy; } ;
struct TYPE_2__ {int dmactrlflags; } ;
struct dma_info {scalar_t__ txin; scalar_t__ txout; TYPE_1__ dma; int name; int core; } ;
typedef enum txd_range { ____Placeholder_txd_range } txd_range ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct dma_pub*,int) ;

void FUNC_3(struct dma_pub *VAR_3, enum txd_range VAR_4)
{
 struct dma_info *VAR_5 = (struct dma_info *)VAR_3;
 struct sk_buff *VAR_6;

 FUNC_0(VAR_5->core, "%s: %s\n",
        VAR_5->name,
        VAR_4 == VAR_1 ? "all" :
        VAR_4 == VAR_2 ? "transmitted" :
        "transferred");

 if (VAR_5->txin == VAR_5->txout)
  return;

 while ((VAR_6 = FUNC_2(VAR_3, VAR_4))) {

  if (!(VAR_5->dma.dmactrlflags & VAR_0))
   FUNC_1(VAR_6);
 }
}
