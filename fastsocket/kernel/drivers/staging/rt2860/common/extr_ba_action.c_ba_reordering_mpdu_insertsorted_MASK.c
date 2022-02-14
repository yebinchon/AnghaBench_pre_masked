
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reordering_mpdu {struct reordering_mpdu* next; int Sequence; } ;
struct reordering_list {int qlen; struct reordering_mpdu* next; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;

BOOLEAN FUNC_1(struct reordering_list *VAR_3, struct reordering_mpdu *VAR_4)
{

 struct reordering_mpdu **VAR_5 = &VAR_3->next;

 while (*VAR_5 != ((void*)0))
 {
  if (FUNC_0((*VAR_5)->Sequence, VAR_4->Sequence, VAR_1))
  {
   VAR_5 = &(*VAR_5)->next;
  }
  else if ((*VAR_5)->Sequence == VAR_4->Sequence)
  {

   return(VAR_0);
  }
  else
  {

   break;
  }
 }

 VAR_4->next = *VAR_5;
 *VAR_5 = VAR_4;
 VAR_3->qlen++;
 return VAR_2;
}
