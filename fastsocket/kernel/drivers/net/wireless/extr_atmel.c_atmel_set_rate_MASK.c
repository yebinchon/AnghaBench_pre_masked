
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ fixed; int value; } ;
struct atmel_private {int tx_rate; int auto_tx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_param *VAR_4,
     char *VAR_5)
{
 struct atmel_private *VAR_6 = FUNC_0(VAR_2);

 if (VAR_4->fixed == 0) {
  VAR_6->tx_rate = 3;
  VAR_6->auto_tx_rate = 1;
 } else {
  VAR_6->auto_tx_rate = 0;


  if ((VAR_4->value < 4) && (VAR_4->value >= 0)) {

   VAR_6->tx_rate = VAR_4->value;
  } else {

   switch (VAR_4->value) {
   case 1000000:
    VAR_6->tx_rate = 0;
    break;
   case 2000000:
    VAR_6->tx_rate = 1;
    break;
   case 5500000:
    VAR_6->tx_rate = 2;
    break;
   case 11000000:
    VAR_6->tx_rate = 3;
    break;
   default:
    return -VAR_1;
   }
  }
 }

 return -VAR_0;
}
