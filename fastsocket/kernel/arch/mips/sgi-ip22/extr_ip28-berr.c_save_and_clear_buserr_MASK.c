
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_24__ {int extio; } ;
struct TYPE_23__ {int pbdma_dptr; int pbdma_bptr; int pbdma_ctrl; } ;
struct TYPE_22__ {unsigned long addr; int ndptr; int cbp; int ctrl; } ;
struct TYPE_21__ {int tx_ndptr; scalar_t__ tx_cbptr; int tx_ctrl; int rx_ndptr; scalar_t__ rx_cbptr; int rx_ctrl; } ;
struct TYPE_20__ {unsigned long addr; int ndptr; scalar_t__ cbp; int ctrl; } ;
struct TYPE_19__ {unsigned long addr; int ndptr; scalar_t__ cbp; int ctrl; } ;
struct TYPE_18__ {int ndptr; int cbptr; int ctrl; } ;
struct TYPE_17__ {unsigned long addr; int ndptr; int cbp; int ctrl; } ;
struct TYPE_16__ {int ndptr; int cbptr; int ctrl; } ;
struct TYPE_15__ {TYPE_7__* pbdma; TYPE_5__ ethtx; TYPE_4__ ethrx; TYPE_2__* scsi; } ;
struct TYPE_14__ {TYPE_8__* pbdma; TYPE_6__ ethregs; TYPE_3__ scsi_chan1; TYPE_1__ scsi_chan0; int bestat; } ;
struct TYPE_13__ {int cerr; int cstat; int gerr; int gstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_12__ VAR_6 ;
 int VAR_7 ;
 TYPE_11__* VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_10__* VAR_9 ;
 TYPE_9__* VAR_10 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_11;


 VAR_1 = VAR_9->cerr;
 VAR_2 = VAR_9->cstat;
 VAR_4 = VAR_9->gerr;
 VAR_5 = VAR_9->gstat;
 VAR_3 = VAR_10->extio;
 VAR_7 = VAR_8->bestat;

 VAR_6[0].addr = (unsigned long)&VAR_8->scsi_chan0;
 VAR_6[0].ctrl = VAR_8->scsi_chan0.ctrl;
 VAR_6[0].cbp = VAR_8->scsi_chan0.cbptr;
 VAR_6[0].ndptr = VAR_8->scsi_chan0.ndptr;

 VAR_6[1].addr = (unsigned long)&VAR_8->scsi_chan1;
 VAR_6[1].ctrl = VAR_8->scsi_chan1.ctrl;
 VAR_6[1].cbp = VAR_8->scsi_chan1.cbptr;
 VAR_6[1].ndptr = VAR_8->scsi_chan1.ndptr;

 VAR_6 = (unsigned long)&VAR_8->ethregs.rx_cbptr;
 VAR_6 = VAR_8->ethregs.rx_ctrl;
 VAR_6 = VAR_8->ethregs.rx_cbptr;
 VAR_6 = VAR_8->ethregs.rx_ndptr;

 VAR_6 = (unsigned long)&VAR_8->ethregs.tx_cbptr;
 VAR_6 = VAR_8->ethregs.tx_ctrl;
 VAR_6 = VAR_8->ethregs.tx_cbptr;
 VAR_6 = VAR_8->ethregs.tx_ndptr;

 for (VAR_11 = 0; VAR_11 < 8; ++VAR_11) {

  VAR_6[VAR_11].addr = (unsigned long)&VAR_8->pbdma[VAR_11];
  VAR_6[VAR_11].ctrl = VAR_8->pbdma[VAR_11].pbdma_ctrl;
  VAR_6[VAR_11].cbp = VAR_8->pbdma[VAR_11].pbdma_bptr;
  VAR_6[VAR_11].ndptr = VAR_8->pbdma[VAR_11].pbdma_dptr;
 }
 VAR_11 = 0;
 if (VAR_5 & VAR_0)
  VAR_11 = VAR_4;
 if (VAR_2 & VAR_0)
  VAR_11 = VAR_1;
 FUNC_0(VAR_11);

 VAR_9->cstat = VAR_9->gstat = 0;
}
