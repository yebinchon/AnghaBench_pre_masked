
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int number; } ;
struct quatech2_port {int tx_pending_bytes; } ;


 int FUNC_0 (char*,int ,int,int) ;
 struct quatech2_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0,
 unsigned char VAR_1, unsigned char VAR_2)
{
 int VAR_3;

 struct quatech2_port *VAR_4 = FUNC_1(VAR_0);

 VAR_3 = (int)(VAR_2 * 16);
 VAR_3 += (int)VAR_1;



 VAR_4->tx_pending_bytes -= VAR_3;


 FUNC_0("port %d: %d bytes reported sent, %d still pending", VAR_0->number,
   VAR_3, VAR_4->tx_pending_bytes);


}
