
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rx1_fifo_size; int fifo_config_mode; int tx_s_size; int tx_a0_size; int rx1_fifo_start; int rbc_ram_start; int tx_s_start; int tx_a0_start; int rx2_fifo_start; int rbc_ram_end; scalar_t__ rx2_fifo_size; } ;
struct TYPE_9__ {TYPE_3__ fifo; } ;
struct TYPE_10__ {TYPE_4__ fp; } ;
struct TYPE_7__ {int fddiESSSynchTxMode; TYPE_1__* a; } ;
struct s_smc {TYPE_5__ hw; TYPE_2__ mib; } ;
struct TYPE_6__ {scalar_t__ fddiPATHSbaPayload; } ;


 int FUNC_0 (char*,int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct s_smc*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_15)
{
 if (VAR_8 == 0) {
  FUNC_1(VAR_15,VAR_6, VAR_7) ;
 }

 switch(VAR_9) {
 case 0:
  VAR_15->hw.fp.fifo.rx1_fifo_size = VAR_2 ;
  VAR_15->hw.fp.fifo.rx2_fifo_size = 0 ;
  break ;
 case 1:
 case 2:
 case 3:
  VAR_15->hw.fp.fifo.rx1_fifo_size = VAR_3 ;
  VAR_15->hw.fp.fifo.rx2_fifo_size = VAR_4 ;
  break ;
 default:
  VAR_15->hw.fp.fifo.rx1_fifo_size = VAR_2 *
  VAR_8/(VAR_8+VAR_9) ;
  VAR_15->hw.fp.fifo.rx2_fifo_size = VAR_2 *
  VAR_9/(VAR_8+VAR_9) ;
  break ;
 }
 if (VAR_15->mib.a[VAR_0].fddiPATHSbaPayload) {




 }
 else {
  VAR_15->hw.fp.fifo.fifo_config_mode &=
   ~(VAR_5|VAR_10) ;
 }




 if (VAR_15->hw.fp.fifo.fifo_config_mode & VAR_10) {
  if (VAR_15->hw.fp.fifo.fifo_config_mode & VAR_5) {
   VAR_15->hw.fp.fifo.tx_s_size = VAR_12 ;
   VAR_15->hw.fp.fifo.tx_a0_size = VAR_14 ;
  }
  else {
   VAR_15->hw.fp.fifo.tx_s_size = VAR_13 ;
   VAR_15->hw.fp.fifo.tx_a0_size = VAR_13 ;
  }
 }
 else {
   VAR_15->hw.fp.fifo.tx_s_size = 0 ;
   VAR_15->hw.fp.fifo.tx_a0_size = VAR_11 ;
 }

 VAR_15->hw.fp.fifo.rx1_fifo_start = VAR_15->hw.fp.fifo.rbc_ram_start +
  VAR_1 ;
 VAR_15->hw.fp.fifo.tx_s_start = VAR_15->hw.fp.fifo.rx1_fifo_start +
  VAR_15->hw.fp.fifo.rx1_fifo_size ;
 VAR_15->hw.fp.fifo.tx_a0_start = VAR_15->hw.fp.fifo.tx_s_start +
  VAR_15->hw.fp.fifo.tx_s_size ;
 VAR_15->hw.fp.fifo.rx2_fifo_start = VAR_15->hw.fp.fifo.tx_a0_start +
  VAR_15->hw.fp.fifo.tx_a0_size ;

 FUNC_0("FIFO split: mode = %x\n",VAR_15->hw.fp.fifo.fifo_config_mode,0) ;
 FUNC_0("rbc_ram_start =	%x	 rbc_ram_end = 	%x\n",
  VAR_15->hw.fp.fifo.rbc_ram_start, VAR_15->hw.fp.fifo.rbc_ram_end) ;
 FUNC_0("rx1_fifo_start = %x	 tx_s_start = 	%x\n",
  VAR_15->hw.fp.fifo.rx1_fifo_start, VAR_15->hw.fp.fifo.tx_s_start) ;
 FUNC_0("tx_a0_start =	%x	 rx2_fifo_start = 	%x\n",
  VAR_15->hw.fp.fifo.tx_a0_start, VAR_15->hw.fp.fifo.rx2_fifo_start) ;
}
