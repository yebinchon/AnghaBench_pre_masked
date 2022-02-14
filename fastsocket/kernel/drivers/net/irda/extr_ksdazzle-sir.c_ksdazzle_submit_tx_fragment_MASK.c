
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksdazzle_cb {unsigned int tx_buf_clear_used; unsigned char* tx_payload; unsigned int tx_buf_clear_sent; TYPE_1__* tx_urb; int ep_out; int usbdev; int tx_buf_clear; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,unsigned char*,int,int ,struct ksdazzle_cb*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ksdazzle_cb *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;


 VAR_3 = 7;
 if (VAR_3 > VAR_2->tx_buf_clear_used)
  VAR_3 = VAR_2->tx_buf_clear_used;


 FUNC_1(VAR_2->tx_payload, 0, 8);
 VAR_2->tx_payload[0] = (unsigned char)0xf8 + VAR_3;
 FUNC_0(VAR_2->tx_payload + 1, VAR_2->tx_buf_clear, VAR_3);

 FUNC_2(VAR_2->tx_urb, VAR_2->usbdev,
    FUNC_3(VAR_2->usbdev, VAR_2->ep_out),
    VAR_2->tx_payload, 8, VAR_1, VAR_2, 1);
 VAR_2->tx_urb->status = 0;
 VAR_4 = FUNC_4(VAR_2->tx_urb, VAR_0);


 VAR_2->tx_buf_clear_sent = (VAR_4 == 0) ? VAR_3 : 0;
 return VAR_4;
}
