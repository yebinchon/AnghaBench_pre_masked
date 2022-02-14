
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input; int output; int sync; int no_sync_ti; int no_sync_out_pci; int no_sync_out_ti; } ;
struct qdio_irq {TYPE_1__ siga_flag; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static void FUNC_0(struct qdio_irq *VAR_5, unsigned char VAR_6)
{
 if (VAR_6 & VAR_2)
  VAR_5->siga_flag.input = 1;
 if (VAR_6 & VAR_3)
  VAR_5->siga_flag.output = 1;
 if (VAR_6 & VAR_4)
  VAR_5->siga_flag.sync = 1;
 if (VAR_6 & VAR_1)
  VAR_5->siga_flag.no_sync_ti = 1;
 if (VAR_6 & VAR_0)
  VAR_5->siga_flag.no_sync_out_pci = 1;

 if (VAR_5->siga_flag.no_sync_out_pci &&
     VAR_5->siga_flag.no_sync_ti)
  VAR_5->siga_flag.no_sync_out_ti = 1;
}
