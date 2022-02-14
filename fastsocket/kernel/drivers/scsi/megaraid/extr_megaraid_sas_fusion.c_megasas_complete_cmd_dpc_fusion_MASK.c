
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct megasas_instance {scalar_t__ msix_vectors; scalar_t__ adprecovery; int hba_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct megasas_instance*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(unsigned long VAR_1)
{
 struct megasas_instance *VAR_2 =
  (struct megasas_instance *)VAR_1;
 unsigned long VAR_3;
 u32 VAR_4, VAR_5;

 VAR_4 = VAR_2->msix_vectors > 0 ? VAR_2->msix_vectors : 1;


 FUNC_1(&VAR_2->hba_lock, VAR_3);
 if (VAR_2->adprecovery == VAR_0) {
  FUNC_2(&VAR_2->hba_lock, VAR_3);
  return;
 }
 FUNC_2(&VAR_2->hba_lock, VAR_3);

 for (VAR_5 = 0 ; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(VAR_2, VAR_5);
}
