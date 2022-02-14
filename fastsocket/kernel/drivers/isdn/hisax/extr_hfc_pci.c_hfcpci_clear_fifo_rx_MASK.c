
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int fifo_en; scalar_t__* last_bfifo_cnt; scalar_t__ fifos; } ;
struct TYPE_10__ {TYPE_3__ hfcpci; } ;
struct IsdnCardState {TYPE_4__ hw; } ;
struct TYPE_12__ {size_t f1; size_t f2; TYPE_2__* za; } ;
struct TYPE_7__ {TYPE_6__ rxbz_b1; TYPE_6__ rxbz_b2; } ;
struct TYPE_11__ {TYPE_1__ b_chans; } ;
typedef TYPE_5__ fifo_area ;
typedef TYPE_6__ bzfifo_type ;
struct TYPE_8__ {scalar_t__ z1; scalar_t__ z2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct IsdnCardState *VAR_6, int VAR_7)
{ u_char VAR_8;
        bzfifo_type *VAR_9;

 if (VAR_7) {
         VAR_9 = &((fifo_area *) (VAR_6->hw.hfcpci.fifos))->b_chans.rxbz_b2;
  VAR_8 = VAR_6->hw.hfcpci.fifo_en & VAR_3;
 } else {
         VAR_9 = &((fifo_area *) (VAR_6->hw.hfcpci.fifos))->b_chans.rxbz_b1;
  VAR_8 = VAR_6->hw.hfcpci.fifo_en & VAR_2;
 }
 if (VAR_8)
         VAR_6->hw.hfcpci.fifo_en ^= VAR_8;
 FUNC_0(VAR_6, VAR_4, VAR_6->hw.hfcpci.fifo_en);
 VAR_6->hw.hfcpci.last_bfifo_cnt[VAR_7] = 0;
 VAR_9->za[VAR_5].z1 = VAR_0 + VAR_1 - 1;
 VAR_9->za[VAR_5].z2 = VAR_9->za[VAR_5].z1;
 VAR_9->f1 = VAR_5;
 VAR_9->f2 = VAR_9->f1;
 if (VAR_8)
         VAR_6->hw.hfcpci.fifo_en |= VAR_8;
 FUNC_0(VAR_6, VAR_4, VAR_6->hw.hfcpci.fifo_en);
}
