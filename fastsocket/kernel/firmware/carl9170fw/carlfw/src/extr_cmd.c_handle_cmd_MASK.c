
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_20__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint32_t ;
struct carl9170_tally_rsp {int dummy; } ;
struct TYPE_24__ {int len; int cmd; int seq; int ext; } ;
struct TYPE_29__ {int tick; } ;
struct TYPE_40__ {scalar_t__ tsf; } ;
struct TYPE_38__ {TYPE_18__* vals; } ;
struct TYPE_34__ {int * vals; } ;
struct carl9170_rsp {TYPE_13__ hdr; TYPE_18__ tally; TYPE_9__ tsf; TYPE_7__ echo; TYPE_3__ rreg_res; } ;
struct TYPE_28__ {int len; int cmd; int seq; int ext; } ;
struct TYPE_27__ {int state; } ;
struct TYPE_23__ {int mode; size_t vif_id; int bcn_len; int bcn_addr; } ;
struct TYPE_21__ {int rx_filter; } ;
struct TYPE_39__ {int * vals; } ;
struct TYPE_37__ {TYPE_5__* regs; } ;
struct TYPE_35__ {int * regs; } ;
struct carl9170_cmd {TYPE_17__ hdr; TYPE_16__ psm; int disablekey; int setkey; TYPE_12__ bcn_ctrl; int wol; TYPE_10__ rx_filter; TYPE_8__ echo; TYPE_6__ wreg; TYPE_4__ rreg; } ;
struct TYPE_36__ {int val; int addr; } ;
struct TYPE_31__ {struct carl9170_cmd cmd; } ;
struct TYPE_33__ {TYPE_1__ cmd; } ;
struct TYPE_32__ {TYPE_2__ reserved; } ;
struct TYPE_25__ {int state; } ;
struct TYPE_26__ {TYPE_14__ psm; } ;
struct TYPE_22__ {int * cab_flush_trigger; int rx_filter; int mac_reset; } ;
struct TYPE_30__ {int reboot; TYPE_15__ phy; TYPE_11__ wlan; int tally; int ticks_per_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 TYPE_20__ VAR_8 ;
 TYPE_19__ VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_18__*,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct carl9170_cmd*,struct carl9170_rsp*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (size_t) ;
 int FUNC_13 (size_t,int ,int ) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct carl9170_rsp *VAR_10)
{
 struct carl9170_cmd *VAR_11 = &VAR_8.reserved.cmd.cmd;
 unsigned int VAR_12;


 VAR_10->hdr.len = VAR_11->hdr.len;
 VAR_10->hdr.cmd = VAR_11->hdr.cmd;
 VAR_10->hdr.ext = VAR_11->hdr.ext;
 VAR_10->hdr.seq |= VAR_11->hdr.seq;

 switch (VAR_11->hdr.cmd & ~VAR_6) {
 case 133:
  for (VAR_12 = 0; VAR_12 < (VAR_11->hdr.len / 4); VAR_12++)
   VAR_10->rreg_res.vals[VAR_12] = FUNC_2(VAR_11->rreg.regs[VAR_12]);
  break;

 case 128:
  VAR_10->hdr.len = 0;
  for (VAR_12 = 0; VAR_12 < (VAR_11->hdr.len / 8); VAR_12++)
   FUNC_10(VAR_11->wreg.regs[VAR_12].addr, VAR_11->wreg.regs[VAR_12].val);
  break;

 case 141:
  FUNC_4(VAR_10->echo.vals, VAR_11->echo.vals, VAR_11->hdr.len);
  break;

 case 131:
  break;

 case 135:



  VAR_9.reboot = 1;
  break;

 case 136:
  VAR_10->hdr.len = 8;
  FUNC_6((uint32_t *)VAR_10->tsf.tsf);
  break;

 case 132:
  VAR_10->hdr.len = 0;
  VAR_9.wlan.rx_filter = VAR_11->rx_filter.rx_filter;
  break;

 case 129:
  FUNC_14(&VAR_11->wol);
  break;

 case 130:
  VAR_10->hdr.len = sizeof(struct carl9170_tally_rsp);
  FUNC_4(&VAR_10->tally, &VAR_9.tally, sizeof(struct carl9170_tally_rsp));
  VAR_10->tally.tick = VAR_9.ticks_per_usec;
  FUNC_5(&VAR_9.tally, 0, sizeof(struct carl9170_tally_rsp));
  break;
 default:
  FUNC_0("Unknown command %x\n", VAR_11->hdr.cmd);
  break;
 }
}
