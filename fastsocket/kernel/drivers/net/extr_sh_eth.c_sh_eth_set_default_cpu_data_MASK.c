
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_cpu_data {int fcftr_value; scalar_t__ tx_error_check; scalar_t__ eesr_err_check; scalar_t__ tx_check; scalar_t__ rmcr_value; scalar_t__ fdr_value; scalar_t__ ecsipr_value; scalar_t__ ecsr_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_0(struct sh_eth_cpu_data *VAR_9)
{
 if (!VAR_9->ecsr_value)
  VAR_9->ecsr_value = VAR_1;

 if (!VAR_9->ecsipr_value)
  VAR_9->ecsipr_value = VAR_0;

 if (!VAR_9->fcftr_value)
  VAR_9->fcftr_value = VAR_5 | VAR_4;


 if (!VAR_9->fdr_value)
  VAR_9->fdr_value = VAR_3;

 if (!VAR_9->rmcr_value)
  VAR_9->rmcr_value = VAR_6;

 if (!VAR_9->tx_check)
  VAR_9->tx_check = VAR_7;

 if (!VAR_9->eesr_err_check)
  VAR_9->eesr_err_check = VAR_2;

 if (!VAR_9->tx_error_check)
  VAR_9->tx_error_check = VAR_8;
}
