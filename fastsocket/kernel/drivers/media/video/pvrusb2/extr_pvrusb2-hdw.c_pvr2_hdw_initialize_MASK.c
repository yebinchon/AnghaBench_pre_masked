
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {void (* state_func ) (void*) ;int flag_init_ok; int big_lock; void* state_data; scalar_t__ flag_disconnected; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*) ;

int FUNC_3(struct pvr2_hdw *VAR_0,
   void (*VAR_1)(void *),
   void *VAR_2)
{
 FUNC_1(VAR_0->big_lock); do {
  if (VAR_0->flag_disconnected) {






   break;
  }
  VAR_0->state_data = VAR_2;
  VAR_0->state_func = VAR_1;
  FUNC_2(VAR_0);
 } while (0); FUNC_0(VAR_0->big_lock);
 return VAR_0->flag_init_ok;
}
