
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_4__ {TYPE_2__* tx_cur; TYPE_2__* tx_bd_base; } ;
typedef TYPE_1__ ser_info_t ;
struct TYPE_5__ {int status; int length; scalar_t__ buf; } ;
typedef TYPE_2__ QUICC_BD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_2, char VAR_3)
{
 volatile QUICC_BD *VAR_4;

 ser_info_t *VAR_5 = (ser_info_t *)VAR_2->driver_data;

 if (FUNC_0(VAR_5, VAR_2->name, "rs_send_char"))
  return;

 VAR_4 = VAR_5->tx_cur;
 while (VAR_4->status & VAR_0);


 *((char *)VAR_4->buf) = VAR_3;
 VAR_4->length = 1;
 VAR_4->status |= VAR_0;



 if (VAR_4->status & VAR_1)
  VAR_4 = VAR_5->tx_bd_base;
 else
  VAR_4++;

 VAR_5->tx_cur = (QUICC_BD *)VAR_4;
}
