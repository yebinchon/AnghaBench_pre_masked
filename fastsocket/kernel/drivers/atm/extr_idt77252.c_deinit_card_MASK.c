
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_8__ {scalar_t__ base; } ;
struct TYPE_7__ {scalar_t__ base; } ;
struct idt77252_dev {int name; int flags; scalar_t__ membase; scalar_t__* fbq; TYPE_4__* pcidev; TYPE_3__ tsq; TYPE_2__ rsq; int raw_cell_paddr; scalar_t__ raw_cell_hnd; int vcs; int scd2vc; int soft_tst; TYPE_1__* sbpool; scalar_t__ atmdev; int index; } ;
struct TYPE_9__ {int irq; } ;
struct TYPE_6__ {struct sk_buff** skb; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct idt77252_dev*) ;
 int FUNC_5 (struct idt77252_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,struct idt77252_dev*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_4__*,int,scalar_t__,int ) ;
 int FUNC_10 (TYPE_4__*,int ,scalar_t__,int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(struct idt77252_dev *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6, VAR_7;

 if (!FUNC_13(VAR_1, &VAR_4->flags)) {
  FUNC_11("%s: SAR not yet initialized.\n", VAR_4->name);
  return;
 }
 FUNC_0("idt77252: deinitialize card %u\n", VAR_4->index);

 FUNC_15(0, VAR_3);

 if (VAR_4->atmdev)
  FUNC_2(VAR_4->atmdev);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_5 = VAR_4->sbpool[VAR_6].skb[VAR_7];
   if (VAR_5) {
    FUNC_10(VAR_4->pcidev,
       FUNC_1(VAR_5),
       (FUNC_12(VAR_5) -
        VAR_5->data),
       VAR_2);
    VAR_4->sbpool[VAR_6].skb[VAR_7] = ((void*)0);
    FUNC_6(VAR_5);
   }
  }
 }

 FUNC_14(VAR_4->soft_tst);

 FUNC_14(VAR_4->scd2vc);

 FUNC_14(VAR_4->vcs);

 if (VAR_4->raw_cell_hnd) {
  FUNC_9(VAR_4->pcidev, 2 * sizeof(u32),
        VAR_4->raw_cell_hnd, VAR_4->raw_cell_paddr);
 }

 if (VAR_4->rsq.base) {
  FUNC_0("%s: Release RSQ ...\n", VAR_4->name);
  FUNC_4(VAR_4);
 }

 if (VAR_4->tsq.base) {
  FUNC_0("%s: Release TSQ ...\n", VAR_4->name);
  FUNC_5(VAR_4);
 }

 FUNC_0("idt77252: Release IRQ.\n");
 FUNC_7(VAR_4->pcidev->irq, VAR_4);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_4->fbq[VAR_6])
   FUNC_8(VAR_4->fbq[VAR_6]);
 }

 if (VAR_4->membase)
  FUNC_8(VAR_4->membase);

 FUNC_3(VAR_1, &VAR_4->flags);
 FUNC_0("%s: Card deinitialized.\n", VAR_4->name);
}
