
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_a0_start; scalar_t__ tx_s_start; scalar_t__ tx_s_size; scalar_t__ rx2_fifo_start; } ;
struct TYPE_5__ {TYPE_1__ fifo; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_10)
{
 FUNC_1(FUNC_0(VAR_0),VAR_3) ;




 FUNC_1(FUNC_0(VAR_4),VAR_10->hw.fp.fifo.tx_a0_start) ;
 FUNC_1(FUNC_0(VAR_6),VAR_10->hw.fp.fifo.tx_a0_start) ;
 FUNC_1(FUNC_0(VAR_8),VAR_10->hw.fp.fifo.tx_a0_start) ;
 FUNC_1(FUNC_0(VAR_1),VAR_10->hw.fp.fifo.rx2_fifo_start-1) ;




 if (VAR_10->hw.fp.fifo.tx_s_size) {
  FUNC_1(FUNC_0(VAR_5),VAR_10->hw.fp.fifo.tx_s_start) ;
  FUNC_1(FUNC_0(VAR_7),VAR_10->hw.fp.fifo.tx_s_start) ;
  FUNC_1(FUNC_0(VAR_9),VAR_10->hw.fp.fifo.tx_s_start) ;
  FUNC_1(FUNC_0(VAR_2),VAR_10->hw.fp.fifo.tx_a0_start-1) ;
 }
 else {
  FUNC_1(FUNC_0(VAR_5),VAR_10->hw.fp.fifo.tx_a0_start-1) ;
  FUNC_1(FUNC_0(VAR_7),VAR_10->hw.fp.fifo.tx_a0_start-1) ;
  FUNC_1(FUNC_0(VAR_9),VAR_10->hw.fp.fifo.tx_a0_start-1) ;
  FUNC_1(FUNC_0(VAR_2),VAR_10->hw.fp.fifo.tx_a0_start-1) ;
 }
}
