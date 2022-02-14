
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_bd; TYPE_1__* ch_neo_uart; } ;
struct TYPE_2__ {int ier; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct jsm_channel *VAR_1)
{
 u8 VAR_2 = FUNC_1(&VAR_1->ch_neo_uart->ier);
 VAR_2 &= ~(VAR_0);
 FUNC_2(VAR_2, &VAR_1->ch_neo_uart->ier);


 FUNC_0(VAR_1->ch_bd);
}
