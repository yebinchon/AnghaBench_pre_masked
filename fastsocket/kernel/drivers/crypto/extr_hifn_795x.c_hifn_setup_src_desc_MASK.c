
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct hifn_dma {int srci; int srcu; TYPE_1__* srcr; } ;
struct hifn_device {int flags; int pdev; scalar_t__ desc_virt; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {void* l; void* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hifn_device*,int ,int ) ;
 unsigned int FUNC_2 (int ,struct page*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct hifn_device *VAR_9, struct page *VAR_10,
  unsigned int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct hifn_dma *VAR_14 = (struct hifn_dma *)VAR_9->desc_virt;
 int VAR_15;
 dma_addr_t VAR_16;

 VAR_16 = FUNC_2(VAR_9->pdev, VAR_10, VAR_11, VAR_12, VAR_8);

 VAR_15 = VAR_14->srci;

 VAR_14->srcr[VAR_15].p = FUNC_0(VAR_16);
 VAR_14->srcr[VAR_15].l = FUNC_0(VAR_12 | VAR_6 |
   VAR_4 | (VAR_13 ? VAR_3 : 0));

 if (++VAR_15 == VAR_5) {
  VAR_14->srcr[VAR_15].l = FUNC_0(VAR_6 |
    VAR_2 | VAR_4 |
    (VAR_13 ? VAR_3 : 0));
  VAR_15 = 0;
 }

 VAR_14->srci = VAR_15;
 VAR_14->srcu++;

 if (!(VAR_9->flags & VAR_7)) {
  FUNC_1(VAR_9, VAR_0, VAR_1);
  VAR_9->flags |= VAR_7;
 }

 return VAR_12;
}
