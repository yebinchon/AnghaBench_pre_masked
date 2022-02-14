
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_timer {struct brcms_timer* next; struct brcms_timer* name; struct brcms_info* wl; } ;
struct brcms_info {struct brcms_timer* timers; } ;


 int FUNC_0 (struct brcms_timer*) ;
 int FUNC_1 (struct brcms_timer*) ;

void FUNC_2(struct brcms_timer *VAR_0)
{
 struct brcms_info *VAR_1 = VAR_0->wl;
 struct brcms_timer *VAR_2;


 FUNC_0(VAR_0);

 if (VAR_1->timers == VAR_0) {
  VAR_1->timers = VAR_1->timers->next;



  FUNC_1(VAR_0);
  return;

 }

 VAR_2 = VAR_1->timers;
 while (VAR_2) {
  if (VAR_2->next == VAR_0) {
   VAR_2->next = VAR_0->next;



   FUNC_1(VAR_0);
   return;
  }
  VAR_2 = VAR_2->next;
 }

}
