
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_ckhdid {int dummy; } ;
struct wusbhc {int pal; int mutex; struct wusb_ckhdid chid; scalar_t__ active; } ;
typedef int chid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wusb_ckhdid const*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

int FUNC_5(struct wusbhc *VAR_2, const struct wusb_ckhdid *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_3, &VAR_1, sizeof(VAR_3)) == 0)
  VAR_3 = ((void*)0);

 FUNC_1(&VAR_2->mutex);
 if (VAR_3) {
  if (VAR_2->active) {
   FUNC_2(&VAR_2->mutex);
   return -VAR_0;
  }
  VAR_2->chid = *VAR_3;
 }
 FUNC_2(&VAR_2->mutex);

 if (VAR_3)
  VAR_4 = FUNC_3(&VAR_2->pal);
 else
  FUNC_4(&VAR_2->pal);
 return VAR_4;
}
