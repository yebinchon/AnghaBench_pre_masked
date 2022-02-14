
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int large_send; } ;
struct qeth_card {TYPE_2__ options; TYPE_1__* dev; } ;
typedef enum qeth_large_send_types { ____Placeholder_qeth_large_send_types } qeth_large_send_types ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct qeth_card*,int ) ;

int FUNC_1(struct qeth_card *VAR_7,
  enum qeth_large_send_types VAR_8)
{
 int VAR_9 = 0;

 VAR_7->options.large_send = VAR_8;
 if (VAR_7->dev == ((void*)0))
  return 0;

 if (VAR_7->options.large_send == VAR_6) {
  if (FUNC_0(VAR_7, VAR_1)) {
   VAR_7->dev->features |= VAR_4 | VAR_3 |
     VAR_2;
  } else {
   VAR_7->dev->features &= ~(VAR_4 | VAR_3 |
     VAR_2);
   VAR_7->options.large_send = VAR_5;
   VAR_9 = -VAR_0;
  }
 } else {
  VAR_7->dev->features &= ~(VAR_4 | VAR_3 |
     VAR_2);
  VAR_7->options.large_send = VAR_5;
 }
 return VAR_9;
}
