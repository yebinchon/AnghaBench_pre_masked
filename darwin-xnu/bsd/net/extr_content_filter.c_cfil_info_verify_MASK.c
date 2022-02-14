
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfil_info {int * cfi_entries; int cfi_rcv; int cfi_snd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct cfil_info *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->cfi_snd);
 FUNC_1(&VAR_1->cfi_rcv);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->cfi_entries[VAR_2]);
}
