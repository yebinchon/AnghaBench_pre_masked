
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int ctrl; } ;
struct TYPE_9__ {int bchannels; int channelmap; TYPE_1__ D; } ;
struct TYPE_10__ {int debug; TYPE_2__ dev; } ;
struct TYPE_13__ {int type; TYPE_3__ dch; } ;
struct ipac_hw {int type; int release; int init; TYPE_5__* hscx; TYPE_6__ isac; int name; void* hw; } ;
struct TYPE_11__ {int nr; int ctrl; int * send; int list; } ;
struct TYPE_14__ {int nr; void* hw; TYPE_4__ ch; } ;
struct TYPE_12__ {int off; int fifo_size; int slot; struct ipac_hw* ip; TYPE_7__ bch; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_6__*,void*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int,int ) ;

u32
FUNC_5(struct ipac_hw *VAR_17, void *VAR_18)
{
 u32 VAR_19;
 u8 VAR_20;

 VAR_17->hw = VAR_18;
 if (VAR_17->isac.dch.debug & VAR_0)
  FUNC_3("%s: ipac type %x\n", VAR_17->name, VAR_17->type);
 if (VAR_17->type & VAR_3) {
  VAR_17->isac.type = VAR_6;
  VAR_17->hscx[0].off = 0;
  VAR_17->hscx[1].off = 0x40;
  VAR_17->hscx[0].fifo_size = 32;
  VAR_17->hscx[1].fifo_size = 32;
 } else if (VAR_17->type & VAR_4) {
  VAR_17->isac.type = VAR_4 | VAR_6;
  VAR_17->hscx[0].off = 0;
  VAR_17->hscx[1].off = 0x40;
  VAR_17->hscx[0].fifo_size = 64;
  VAR_17->hscx[1].fifo_size = 64;
 } else if (VAR_17->type & VAR_5) {
  VAR_17->isac.type = VAR_5 | VAR_7;
  VAR_17->hscx[0].off = VAR_1;
  VAR_17->hscx[1].off = VAR_2;
  VAR_17->hscx[0].fifo_size = 64;
  VAR_17->hscx[1].fifo_size = 64;
 } else
  return 0;

 FUNC_2(&VAR_17->isac, VAR_18);

 VAR_17->isac.dch.dev.D.ctrl = VAR_15;

 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
  VAR_17->hscx[VAR_20].bch.nr = VAR_20 + 1;
  FUNC_4(VAR_20 + 1, VAR_17->isac.dch.dev.channelmap);
  FUNC_0(&VAR_17->hscx[VAR_20].bch.ch.list,
   &VAR_17->isac.dch.dev.bchannels);
  FUNC_1(&VAR_17->hscx[VAR_20].bch, VAR_11);
  VAR_17->hscx[VAR_20].bch.ch.nr = VAR_20 + 1;
  VAR_17->hscx[VAR_20].bch.ch.send = &VAR_14;
  VAR_17->hscx[VAR_20].bch.ch.ctrl = VAR_13;
  VAR_17->hscx[VAR_20].bch.hw = VAR_18;
  VAR_17->hscx[VAR_20].ip = VAR_17;


  VAR_17->hscx[VAR_20].slot = (VAR_20 == 0) ? 0x2f : 0x03;
 }

 VAR_17->init = VAR_16;
 VAR_17->release = VAR_12;

 VAR_19 = (1 << (VAR_10 & VAR_9)) |
  (1 << (VAR_8 & VAR_9));
 return VAR_19;
}
