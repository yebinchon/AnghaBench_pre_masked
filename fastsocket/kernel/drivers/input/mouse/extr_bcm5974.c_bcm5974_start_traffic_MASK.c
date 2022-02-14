
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm5974 {int bt_urb; int tp_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bcm5974*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct bcm5974 *VAR_2)
{
 if (FUNC_0(VAR_2, 1)) {
  FUNC_1(1, "bcm5974: mode switch failed\n");
  goto error;
 }

 if (FUNC_3(VAR_2->bt_urb, VAR_1))
  goto error;

 if (FUNC_3(VAR_2->tp_urb, VAR_1))
  goto err_kill_bt;

 return 0;

err_kill_bt:
 FUNC_2(VAR_2->bt_urb);
error:
 return -VAR_0;
}
