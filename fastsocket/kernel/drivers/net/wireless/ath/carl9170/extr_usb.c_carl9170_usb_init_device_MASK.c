
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int cmd_seq; int mutex; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_0)
{
 int VAR_1;
 VAR_0->cmd_seq = -2;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto err_out;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err_unrx;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto err_unrx;

 FUNC_6(&VAR_0->mutex);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_7(&VAR_0->mutex);
 if (VAR_1)
  goto err_stop;

 return 0;

err_stop:
 FUNC_5(VAR_0);

err_unrx:
 FUNC_0(VAR_0);

err_out:
 return VAR_1;
}
