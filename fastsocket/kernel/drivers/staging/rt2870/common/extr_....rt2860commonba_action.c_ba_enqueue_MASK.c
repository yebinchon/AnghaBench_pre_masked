
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reordering_mpdu {struct reordering_mpdu* next; } ;
struct reordering_list {struct reordering_mpdu* next; int qlen; } ;



__attribute__((used)) static inline void FUNC_0(struct reordering_list *VAR_0, struct reordering_mpdu *VAR_1)
{
 VAR_0->qlen++;
 VAR_1->next = VAR_0->next;
 VAR_0->next = VAR_1;
}
