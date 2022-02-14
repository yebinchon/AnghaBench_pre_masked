
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {int orient; int accel_calib; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wiimote_t*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct wiimote_t*) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3(struct wiimote_t* VAR_3)
{
 if (FUNC_1(VAR_3) && FUNC_0(VAR_3, VAR_2)) {
  FUNC_2(&VAR_3->accel_calib, &VAR_3->orient, VAR_1);
  FUNC_2(&VAR_3->accel_calib, &VAR_3->orient, VAR_0);
 }
}
