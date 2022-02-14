
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reordering_mpdu {struct reordering_mpdu* next; } ;
struct reordering_list {struct reordering_mpdu* next; scalar_t__ qlen; } ;


 int FUNC_0 (struct reordering_list*) ;

__attribute__((used)) static inline struct reordering_mpdu * FUNC_1(struct reordering_list *VAR_0)
{
 struct reordering_mpdu *VAR_1 = ((void*)0);

 FUNC_0(VAR_0);

  if (VAR_0->qlen)
  {
   VAR_0->qlen--;
   VAR_1 = VAR_0->next;
   if (VAR_1)
   {
    VAR_0->next = VAR_1->next;
    VAR_1->next = ((void*)0);
   }
  }
 return VAR_1;
}
