
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_4__ {scalar_t__ rbc_ram_start; int rbc_ram_end; } ;
struct TYPE_6__ {TYPE_1__ fifo; } ;
struct TYPE_5__ {TYPE_3__ fp; } ;
struct s_smc {TYPE_2__ hw; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct s_smc*,long) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_1)
{
 u_short VAR_2 ;

 VAR_1->hw.fp.fifo.rbc_ram_start = 0 ;
 VAR_1->hw.fp.fifo.rbc_ram_end =
  VAR_1->hw.fp.fifo.rbc_ram_start + VAR_0 ;
 FUNC_0() ;
 FUNC_1(VAR_1->hw.fp.fifo.rbc_ram_start) ;
 for (VAR_2 = VAR_1->hw.fp.fifo.rbc_ram_start;
  VAR_2 < (u_short) (VAR_1->hw.fp.fifo.rbc_ram_end-1); VAR_2++)
  FUNC_2(VAR_1,0L) ;

 FUNC_2(VAR_1,0L) ;
}
