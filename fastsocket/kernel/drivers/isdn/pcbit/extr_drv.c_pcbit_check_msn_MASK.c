
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {struct msn_entry* msn_list; } ;
struct msn_entry {int * msn; struct msn_entry* next; } ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct pcbit_dev *VAR_0, char *VAR_1)
{
 struct msn_entry *VAR_2;

 for (VAR_2=VAR_0->msn_list; VAR_2; VAR_2=VAR_2->next) {

  if (VAR_2->msn == ((void*)0))
   return 1;

  if (FUNC_0(VAR_2->msn, VAR_1) == 0)
   return 1;
 }

 return 0;
}
