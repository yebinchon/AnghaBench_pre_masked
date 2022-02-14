
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; int recovery_work; int hw; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct wl1271*) ;

void FUNC_5(struct wl1271 *VAR_4)
{
 FUNC_0(!FUNC_3(VAR_0, &VAR_4->flags));


 if (VAR_4->state == VAR_2) {
  VAR_4->state = VAR_3;
  FUNC_2(VAR_1, &VAR_4->flags);
  FUNC_4(VAR_4);
  FUNC_1(VAR_4->hw, &VAR_4->recovery_work);
 }
}
