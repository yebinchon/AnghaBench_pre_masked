
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {int cmd_seq; int usb_tasklet; TYPE_1__* intf; } ;
struct TYPE_2__ {scalar_t__ condition; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ar9170 *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->intf->condition != VAR_0)
  return 0;







 VAR_1->cmd_seq = -2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_4(VAR_1);

 if (VAR_2)
  goto err_out;

 FUNC_6(&VAR_1->usb_tasklet);


 FUNC_5(1100);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err_out;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto err_out;

 return 0;

err_out:
 FUNC_1(VAR_1);
 return VAR_2;
}
