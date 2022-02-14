
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_12__ {int ctrl; int send; } ;
struct TYPE_16__ {int Dprotocols; int Bprotocols; int nrbchan; int bchannels; int channelmap; TYPE_1__ D; } ;
struct TYPE_17__ {TYPE_5__ dev; struct w6692_hw* hw; } ;
struct w6692_hw {int fmask; int list; TYPE_7__ dch; TYPE_4__* bc; int addr; int irq; int name; TYPE_3__* pdev; int lock; } ;
struct TYPE_13__ {int nr; int list; int ctrl; int send; } ;
struct TYPE_18__ {int nr; TYPE_2__ ch; struct w6692_hw* hw; } ;
struct TYPE_15__ {TYPE_8__ bch; } ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct w6692_hw*) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,struct w6692_hw*) ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (struct w6692_hw*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_8__*,int ) ;
 int FUNC_11 (TYPE_7__*,int ,int ) ;
 int FUNC_12 (TYPE_5__*,int *,int ) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (struct w6692_hw*) ;
 int FUNC_18 (int ,scalar_t__,char*,int) ;
 int FUNC_19 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static int
FUNC_22(struct w6692_hw *VAR_16)
{
 int VAR_17, VAR_18;
 u_long VAR_19;

 FUNC_18(VAR_16->name, VAR_7 - 1, "w6692.%d", VAR_11 + 1);
 FUNC_20(&VAR_9, VAR_19);
 FUNC_6(&VAR_16->list, &VAR_0);
 FUNC_21(&VAR_9, VAR_19);
 VAR_16->fmask = (1 << VAR_11);
 FUNC_0(VAR_16);
 FUNC_19(&VAR_16->lock);
 FUNC_11(&VAR_16->dch, VAR_6, VAR_8);
 VAR_16->dch.dev.Dprotocols = (1 << VAR_4);
 VAR_16->dch.dev.D.send = VAR_15;
 VAR_16->dch.dev.D.ctrl = VAR_12;
 VAR_16->dch.dev.Bprotocols = (1 << (VAR_3 & VAR_2)) |
  (1 << (VAR_1 & VAR_2));
 VAR_16->dch.hw = VAR_16;
 VAR_16->dch.dev.nrbchan = 2;
 for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
  FUNC_10(&VAR_16->bc[VAR_17].bch, VAR_5);
  VAR_16->bc[VAR_17].bch.hw = VAR_16;
  VAR_16->bc[VAR_17].bch.nr = VAR_17 + 1;
  VAR_16->bc[VAR_17].bch.ch.nr = VAR_17 + 1;
  VAR_16->bc[VAR_17].bch.ch.send = VAR_14;
  VAR_16->bc[VAR_17].bch.ch.ctrl = VAR_10;
  FUNC_16(VAR_17 + 1, VAR_16->dch.dev.channelmap);
  FUNC_5(&VAR_16->bc[VAR_17].bch.ch.list, &VAR_16->dch.dev.bchannels);
 }
 VAR_18 = FUNC_17(VAR_16);
 if (VAR_18)
  goto error_setup;
 VAR_18 = FUNC_12(&VAR_16->dch.dev, &VAR_16->pdev->dev,
  VAR_16->name);
 if (VAR_18)
  goto error_reg;
 VAR_18 = FUNC_3(VAR_16);
 if (VAR_18)
  goto error_init;
 VAR_18 = FUNC_1(&VAR_16->dch, VAR_13);
 if (!VAR_18) {
  VAR_11++;
  FUNC_14("W6692 %d cards installed\n", VAR_11);
  return 0;
 }

 FUNC_2(VAR_16->irq, VAR_16);
error_init:
 FUNC_13(&VAR_16->dch.dev);
error_reg:
 FUNC_15(VAR_16->addr, 256);
error_setup:
 FUNC_8(&VAR_16->bc[1].bch);
 FUNC_8(&VAR_16->bc[0].bch);
 FUNC_9(&VAR_16->dch);
 FUNC_20(&VAR_9, VAR_19);
 FUNC_7(&VAR_16->list);
 FUNC_21(&VAR_9, VAR_19);
 FUNC_4(VAR_16);
 return VAR_18;
}
