
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_wait {struct cond_wait* next; int wait; int q; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cond_wait **VAR_1, struct cond_wait *VAR_2)
{
 struct cond_wait *VAR_3, *VAR_4;
 FUNC_0(&VAR_2->q, &VAR_2->wait);
 FUNC_1(VAR_0);
 for (VAR_3 = *VAR_1, VAR_4 = ((void*)0) ; VAR_3 != ((void*)0) ; VAR_4 = VAR_3, VAR_3 = VAR_3->next) {
  if (VAR_3 == VAR_2) {
   if (VAR_4 != ((void*)0))
    VAR_4->next = VAR_3->next;
   else
    *VAR_1 = VAR_3->next;
   break;
  }
 }
}
