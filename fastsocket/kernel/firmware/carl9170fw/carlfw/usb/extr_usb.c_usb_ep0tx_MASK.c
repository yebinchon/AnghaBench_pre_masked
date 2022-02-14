
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ep0_txrx_len; scalar_t__ ep0_txrx_pos; int ep0_txrx_buffer; } ;
struct TYPE_4__ {TYPE_1__ usb; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(void)
{
 if (FUNC_0(!VAR_0.usb.ep0_txrx_buffer || !VAR_0.usb.ep0_txrx_len))
  return ;

 FUNC_1(VAR_0.usb.ep0_txrx_buffer, VAR_0.usb.ep0_txrx_len);
 VAR_0.usb.ep0_txrx_pos = VAR_0.usb.ep0_txrx_len;
}
