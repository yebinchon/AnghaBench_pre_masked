
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mceusb_dev {int* buf_in; int tx_mask; int learning_enabled; TYPE_1__* rc; } ;
struct TYPE_2__ {int timeout; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mceusb_dev *VAR_0, int VAR_1)
{
 u8 VAR_2 = VAR_0->buf_in[VAR_1 + 1] & 0xff;
 u8 VAR_3 = VAR_0->buf_in[VAR_1 + 2] & 0xff;

 switch (VAR_0->buf_in[VAR_1]) {

 case 129:
  VAR_0->rc->timeout = FUNC_0((VAR_2 << 8 | VAR_3) / 2);
  break;


 case 128:
  VAR_0->tx_mask = VAR_2;
  break;
 case 130:
  VAR_0->learning_enabled = (VAR_2 == 0x02);
  break;
 default:
  break;
 }
}
