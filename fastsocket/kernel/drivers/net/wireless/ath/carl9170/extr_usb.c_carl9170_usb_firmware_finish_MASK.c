
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int udev; int fw_load_wait; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ar9170 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err_freefw;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  goto err_freefw;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_6(VAR_0);
 if (VAR_1)
  goto err_unrx;

 FUNC_7(&VAR_0->fw_load_wait);
 FUNC_8(VAR_0->udev);
 return;

err_unrx:
 FUNC_3(VAR_0);

err_freefw:
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
}
