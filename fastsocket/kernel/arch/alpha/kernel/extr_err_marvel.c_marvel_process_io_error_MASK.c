
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ev7_pal_io_subpacket {unsigned long po7_error_sum; TYPE_1__* ports; int po7_err_pkt1; int po7_err_pkt0; int po7_ugbge_sym; int po7_crrct_sym; int po7_uncrr_sym; } ;
struct ev7_lf_subpackets {unsigned long io_pid; struct ev7_pal_io_subpacket* io; int logout; } ;
struct TYPE_2__ {unsigned long pox_err_sum; unsigned long pox_first_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ev7_lf_subpackets*) ;
 int FUNC_2 (struct ev7_pal_io_subpacket*) ;
 int FUNC_3 (unsigned long,TYPE_1__*) ;
 int FUNC_4 (char*,int ,unsigned long,...) ;

__attribute__((used)) static int
FUNC_5(struct ev7_lf_subpackets *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_3;
 if (!VAR_5->logout || !VAR_5->io)
  return VAR_7;
 if ((VAR_5->io->po7_error_sum & (1UL << 32)) ||
     ((VAR_5->io->po7_error_sum |
       VAR_5->io->ports[0].pox_err_sum |
       VAR_5->io->ports[1].pox_err_sum |
       VAR_5->io->ports[2].pox_err_sum |
       VAR_5->io->ports[3].pox_err_sum) & (1UL << 63))) {





  if (!FUNC_1(VAR_5))
   return VAR_7;
 }




 VAR_7 = VAR_2;
 return VAR_7;
}
