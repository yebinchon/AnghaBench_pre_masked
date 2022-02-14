
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {int ch_mostat; TYPE_1__* ch_neo_uart; int ch_flags; } ;
struct TYPE_2__ {int mcr; int msr; int lsr; int isr_fcr; int txrx; int efr; int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_5)
{
 FUNC_1(0, &VAR_5->ch_neo_uart->ier);
 FUNC_1(0, &VAR_5->ch_neo_uart->efr);
 FUNC_1(VAR_1, &VAR_5->ch_neo_uart->efr);


 FUNC_0(&VAR_5->ch_neo_uart->txrx);
 FUNC_1((VAR_4|VAR_2|VAR_3), &VAR_5->ch_neo_uart->isr_fcr);
 FUNC_0(&VAR_5->ch_neo_uart->lsr);
 FUNC_0(&VAR_5->ch_neo_uart->msr);

 VAR_5->ch_flags |= VAR_0;


 FUNC_1(VAR_5->ch_mostat, &VAR_5->ch_neo_uart->mcr);
}
