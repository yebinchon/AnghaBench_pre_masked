
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_context {int notify_flag; struct pvr2_context* notify_next; struct pvr2_context* notify_prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct pvr2_context* VAR_1 ;
 struct pvr2_context* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pvr2_context *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 FUNC_0(&VAR_0);
 if (VAR_5) {
  if (!VAR_4->notify_flag) {
   VAR_6 = (VAR_1 == ((void*)0));
   VAR_4->notify_prev = VAR_2;
   VAR_4->notify_next = ((void*)0);
   VAR_2 = VAR_4;
   if (VAR_4->notify_prev) {
    VAR_4->notify_prev->notify_next = VAR_4;
   } else {
    VAR_1 = VAR_4;
   }
   VAR_4->notify_flag = !0;
  }
 } else {
  if (VAR_4->notify_flag) {
   VAR_4->notify_flag = 0;
   if (VAR_4->notify_next) {
    VAR_4->notify_next->notify_prev = VAR_4->notify_prev;
   } else {
    VAR_2 = VAR_4->notify_prev;
   }
   if (VAR_4->notify_prev) {
    VAR_4->notify_prev->notify_next = VAR_4->notify_next;
   } else {
    VAR_1 = VAR_4->notify_next;
   }
  }
 }
 FUNC_1(&VAR_0);
 if (VAR_6) FUNC_2(&VAR_3);
}
