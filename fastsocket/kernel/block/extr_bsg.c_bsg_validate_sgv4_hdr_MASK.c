
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {char guard; int protocol; scalar_t__ dout_xfer_len; int subprotocol; } ;
struct request_queue {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct request_queue *VAR_3, struct sg_io_v4 *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->guard != 'Q')
  return -VAR_0;

 switch (VAR_4->protocol) {
 case 130:
  switch (VAR_4->subprotocol) {
  case 129:
  case 128:
   break;
  default:
   VAR_6 = -VAR_0;
  }
  break;
 default:
  VAR_6 = -VAR_0;
 }

 *VAR_5 = VAR_4->dout_xfer_len ? VAR_2 : VAR_1;
 return VAR_6;
}
