
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfc_multi {TYPE_1__* chan; } ;
struct TYPE_2__ {int conf; int bank_rx; int slot_rx; int bank_tx; int slot_tx; int protocol; } ;


 int FUNC_0 (struct hfc_multi*,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct hfc_multi *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_2 >= 0 && VAR_2 <= 7)
  VAR_0->chan[VAR_1].conf = VAR_2;
 else
  VAR_0->chan[VAR_1].conf = -1;
 FUNC_0(VAR_0, VAR_1, VAR_0->chan[VAR_1].protocol, VAR_0->chan[VAR_1].slot_tx,
     VAR_0->chan[VAR_1].bank_tx, VAR_0->chan[VAR_1].slot_rx,
     VAR_0->chan[VAR_1].bank_rx);
}
