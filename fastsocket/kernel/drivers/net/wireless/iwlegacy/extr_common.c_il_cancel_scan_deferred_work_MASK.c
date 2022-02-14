
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int mutex; int scan_check; int scan_completed; int abort_scan; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct il_priv *VAR_0)
{
 FUNC_1(&VAR_0->abort_scan);
 FUNC_1(&VAR_0->scan_completed);

 if (FUNC_0(&VAR_0->scan_check)) {
  FUNC_3(&VAR_0->mutex);
  FUNC_2(VAR_0);
  FUNC_4(&VAR_0->mutex);
 }
}
