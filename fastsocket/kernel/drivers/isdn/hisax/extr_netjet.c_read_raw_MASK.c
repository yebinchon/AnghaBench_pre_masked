
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_9__ {int* rec; int r_state; int r_one; int r_val; int r_bitcnt; int* rcvbuf; int r_tot; void* r_fcs; int r_err; } ;
struct TYPE_10__ {TYPE_3__ tiger; } ;
struct BCState {scalar_t__ mode; TYPE_4__ hw; int err_inv; TYPE_5__* cs; int err_crc; scalar_t__ channel; } ;
struct TYPE_7__ {int irqstat0; } ;
struct TYPE_8__ {TYPE_1__ njet; } ;
struct TYPE_11__ {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,int) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (struct BCState*,int) ;
 int FUNC_3 (TYPE_5__*,int*,int,char*) ;

__attribute__((used)) static void FUNC_4(struct BCState *VAR_10, u_int *VAR_11, int VAR_12){
 int VAR_13;
 register u_char VAR_14;
 register u_char VAR_15;
 u_int *VAR_16 = VAR_10->hw.tiger.rec +VAR_7 -1;
 register u_char VAR_17 = VAR_10->hw.tiger.r_state;
 register u_char VAR_18 = VAR_10->hw.tiger.r_one;
 register u_char VAR_19 = VAR_10->hw.tiger.r_val;
 register u_int VAR_20 = VAR_10->hw.tiger.r_bitcnt;
 u_int *VAR_21 = VAR_11;
 int VAR_22;
 u_char VAR_23;

        if (VAR_10->mode == VAR_6) {
  VAR_23 = 0xff;
  VAR_22 = 8;
 }
 else {
  VAR_23 = 0x7f;
  VAR_22 = 7;
 };
 for (VAR_13=0;VAR_13<VAR_12;VAR_13++) {
  VAR_15 = VAR_10->channel ? ((*VAR_21>>8) & 0xff) : (*VAR_21 & 0xff);
  VAR_21++;
  if (VAR_21 > VAR_16)
   VAR_21 = VAR_10->hw.tiger.rec;
  if ((VAR_15 & VAR_23) == VAR_23) {
   VAR_17 = VAR_3;
   VAR_10->hw.tiger.r_tot++;
   VAR_20 = 0;
   VAR_18 = 0;
   continue;
  }
  for (VAR_14=0;VAR_14<VAR_22;VAR_14++) {
   if (VAR_17 == VAR_3) {
    if (VAR_15 & 1) {
     VAR_18++;
    } else {
     VAR_18=0;
     VAR_17= VAR_1;
     if (VAR_10->cs->debug & VAR_5)
      FUNC_1(VAR_10->cs,"tiger read_raw: zBit(%d,%d,%d) %x",
       VAR_10->hw.tiger.r_tot,VAR_13,VAR_14,VAR_15);
    }
   } else if (VAR_17 == VAR_1) {
    if (VAR_15 & 1) {
     VAR_18++;
     if (VAR_18>6) {
      VAR_17=VAR_3;
     }
    } else {
     if (VAR_18==6) {
      VAR_20=0;
      VAR_19=0;
      VAR_17=VAR_0;
      if (VAR_10->cs->debug & VAR_5)
       FUNC_1(VAR_10->cs,"tiger read_raw: flag(%d,%d,%d) %x",
        VAR_10->hw.tiger.r_tot,VAR_13,VAR_14,VAR_15);
     }
     VAR_18=0;
    }
   } else if (VAR_17 == VAR_0) {
    if (VAR_15 & 1) {
     VAR_18++;
     if (VAR_18>6) {
      VAR_17=VAR_3;
     } else {
      VAR_19 >>= 1;
      VAR_19 |= 0x80;
      VAR_20++;
     }
    } else {
     if (VAR_18==6) {
      VAR_20=0;
      VAR_19=0;
      VAR_18=0;
      VAR_15 >>= 1;
      continue;
     } else if (VAR_18!=5) {
      VAR_19 >>= 1;
      VAR_19 &= 0x7f;
      VAR_20++;
     }
     VAR_18=0;
    }
    if ((VAR_17 != VAR_3) &&
     !(VAR_20 & 7)) {
     VAR_17=VAR_2;
     VAR_10->hw.tiger.r_fcs = VAR_9;
     VAR_10->hw.tiger.rcvbuf[0] = VAR_19;
     VAR_10->hw.tiger.r_fcs = FUNC_0 (VAR_10->hw.tiger.r_fcs, VAR_19);
     if (VAR_10->cs->debug & VAR_5)
      FUNC_1(VAR_10->cs,"tiger read_raw: byte1(%d,%d,%d) rval %x val %x i %x",
       VAR_10->hw.tiger.r_tot,VAR_13,VAR_14,VAR_19,VAR_15,
       VAR_10->cs->hw.njet.irqstat0);
    }
   } else if (VAR_17 == VAR_2) {
    if (VAR_15 & 1) {
     VAR_18++;
     if (VAR_18>6) {
      VAR_17=VAR_3;
      VAR_20=0;
     } else {
      VAR_19 >>= 1;
      VAR_19 |= 0x80;
      VAR_20++;
     }
    } else {
     if (VAR_18==6) {
      VAR_19=0;
      VAR_18=0;
      VAR_20++;
      if (VAR_20 & 7) {
       FUNC_1(VAR_10->cs, "tiger: frame not byte aligned");
       VAR_17=VAR_1;
       VAR_10->hw.tiger.r_err++;



      } else {
       if (VAR_10->cs->debug & VAR_5)
        FUNC_1(VAR_10->cs,"tiger frame end(%d,%d): fcs(%x) i %x",
         VAR_13,VAR_14,VAR_10->hw.tiger.r_fcs, VAR_10->cs->hw.njet.irqstat0);
       if (VAR_10->hw.tiger.r_fcs == VAR_8) {
        FUNC_2(VAR_10, (VAR_20>>3)-3);
       } else {
        if (VAR_10->cs->debug) {
         FUNC_1(VAR_10->cs, "tiger FCS error");
         FUNC_3(VAR_10->cs, VAR_10->hw.tiger.rcvbuf,
          (VAR_20>>3)-1, "rec");
         VAR_10->hw.tiger.r_err++;
        }



       }
       VAR_17=VAR_0;
      }
      VAR_20=0;
     } else if (VAR_18==5) {
      VAR_15 >>= 1;
      VAR_18=0;
      continue;
     } else {
      VAR_19 >>= 1;
      VAR_19 &= 0x7f;
      VAR_20++;
     }
     VAR_18=0;
    }
    if ((VAR_17 == VAR_2) &&
     !(VAR_20 & 7)) {
     if ((VAR_20>>3)>=VAR_4) {
      FUNC_1(VAR_10->cs, "tiger: frame too big");
      VAR_19=0;
      VAR_17=VAR_1;
      VAR_10->hw.tiger.r_err++;



     } else {
      VAR_10->hw.tiger.rcvbuf[(VAR_20>>3)-1] = VAR_19;
      VAR_10->hw.tiger.r_fcs =
       FUNC_0 (VAR_10->hw.tiger.r_fcs, VAR_19);
     }
    }
   }
   VAR_15 >>= 1;
  }
  VAR_10->hw.tiger.r_tot++;
 }
 VAR_10->hw.tiger.r_state = VAR_17;
 VAR_10->hw.tiger.r_one = VAR_18;
 VAR_10->hw.tiger.r_val = VAR_19;
 VAR_10->hw.tiger.r_bitcnt = VAR_20;
}
