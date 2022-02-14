
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int mutex; } ;
struct wusb_dev {int entry_ts; } ;


 int FUNC_0 (struct wusbhc*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wusbhc *VAR_1, struct wusb_dev *VAR_2)
{
 FUNC_1(&VAR_1->mutex);
 VAR_2->entry_ts = VAR_0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->mutex);
}
