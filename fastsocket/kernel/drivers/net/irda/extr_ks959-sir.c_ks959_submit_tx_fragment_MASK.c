
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ks959_cb {unsigned int tx_buf_clear_used; unsigned int tx_buf_clear_sent; TYPE_2__* tx_urb; int tx_buf_xored; TYPE_1__* tx_setuprequest; int usbdev; int tx_buf_clear; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_4__ {void* wLength; void* wValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,unsigned int,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,unsigned char*,int ,unsigned int,int ,struct ks959_cb*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ks959_cb *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;



 VAR_5 = (VAR_1 & ~0x7) - 0x10;
 if (VAR_5 > VAR_3->tx_buf_clear_used)
  VAR_5 = VAR_3->tx_buf_clear_used;



 VAR_4 = FUNC_1(VAR_3->tx_buf_clear, VAR_5,
         VAR_3->tx_buf_xored,
         VAR_1);


 VAR_3->tx_setuprequest->wValue = FUNC_0(VAR_5);
 VAR_3->tx_setuprequest->wLength = FUNC_0(VAR_4);

 FUNC_2(VAR_3->tx_urb, VAR_3->usbdev,
        FUNC_3(VAR_3->usbdev, 0),
        (unsigned char *)VAR_3->tx_setuprequest,
        VAR_3->tx_buf_xored, VAR_4,
        VAR_2, VAR_3);
 VAR_3->tx_urb->status = 0;
 VAR_6 = FUNC_4(VAR_3->tx_urb, VAR_0);


 VAR_3->tx_buf_clear_sent = (VAR_6 == 0) ? VAR_5 : 0;
 return VAR_6;
}
