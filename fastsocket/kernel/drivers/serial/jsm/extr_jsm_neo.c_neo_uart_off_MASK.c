
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {TYPE_1__* ch_neo_uart; } ;
struct TYPE_2__ {int ier; int efr; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct jsm_channel *VAR_0)
{

 FUNC_0(0, &VAR_0->ch_neo_uart->efr);


 FUNC_0(0, &VAR_0->ch_neo_uart->ier);
}
