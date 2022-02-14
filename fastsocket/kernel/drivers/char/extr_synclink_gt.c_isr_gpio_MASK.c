
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {struct cond_wait* gpio_wait_q; } ;
struct cond_wait {unsigned int data; struct cond_wait* next; int q; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct cond_wait *VAR_3, *VAR_4;


 for (VAR_3 = VAR_0->gpio_wait_q, VAR_4 = ((void*)0) ; VAR_3 != ((void*)0) ; VAR_3 = VAR_3->next) {
  if (VAR_3->data & VAR_1) {
   VAR_3->data = VAR_2;
   FUNC_0(&VAR_3->q);
   if (VAR_4 != ((void*)0))
    VAR_4->next = VAR_3->next;
   else
    VAR_0->gpio_wait_q = VAR_3->next;
  } else
   VAR_4 = VAR_3;
 }
}
