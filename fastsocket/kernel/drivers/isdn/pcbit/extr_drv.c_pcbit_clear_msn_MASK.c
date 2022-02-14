
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {struct msn_entry* msn_list; } ;
struct msn_entry {struct msn_entry* next; } ;


 int FUNC_0 (struct msn_entry*) ;

__attribute__((used)) static void FUNC_1(struct pcbit_dev *VAR_0)
{
 struct msn_entry *VAR_1, *VAR_2;

 for (VAR_1=VAR_0->msn_list; VAR_1; )
 {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 VAR_0->msn_list = ((void*)0);
}
