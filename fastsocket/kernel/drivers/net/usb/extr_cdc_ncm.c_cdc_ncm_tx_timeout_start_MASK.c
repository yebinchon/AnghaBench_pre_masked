
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdc_ncm_ctx {int tx_timer; int stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cdc_ncm_ctx *VAR_2)
{

 if (!(FUNC_1(&VAR_2->tx_timer) || FUNC_0(&VAR_2->stop)))
  FUNC_2(&VAR_2->tx_timer,
    FUNC_3(0, VAR_0),
    VAR_1);
}
