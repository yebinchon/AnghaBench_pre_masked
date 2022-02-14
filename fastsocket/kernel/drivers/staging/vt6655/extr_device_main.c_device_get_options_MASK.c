
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int bbp_type; int long_retry; int short_retry; int channel_num; int data_rate; int frag_thresh; int rts_thresh; int int_works; int * nTxDescs; int nRxDescs1; int nRxDescs0; } ;
struct TYPE_4__ {TYPE_2__ sOpts; } ;
typedef TYPE_1__* PSDevice ;
typedef TYPE_2__* POPTIONS ;


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

__attribute__((used)) static void
FUNC_0(PSDevice VAR_17, int VAR_18, char* VAR_19) {

    POPTIONS VAR_20 = &(VAR_17->sOpts);
  VAR_20->nRxDescs0=VAR_12;
  VAR_20->nRxDescs1=VAR_13;
  VAR_20->nTxDescs[0]=VAR_15;
  VAR_20->nTxDescs[1]=VAR_16;
VAR_20->flags|=VAR_5;
  VAR_20->int_works=VAR_9;
  VAR_20->rts_thresh=VAR_11;
  VAR_20->frag_thresh=VAR_8;
  VAR_20->data_rate=VAR_2;
  VAR_20->channel_num=VAR_1;

VAR_20->flags|=VAR_7;
VAR_20->flags|=VAR_6;

  VAR_20->short_retry=VAR_14;
  VAR_20->long_retry=VAR_10;
  VAR_20->bbp_type=VAR_0;
VAR_20->flags|=VAR_3;
VAR_20->flags|=VAR_4;


}
