
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_fault_page {unsigned int page; int old_presence; } ;
typedef int pte_t ;
typedef int pmd_t ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int,int *) ;
 int * FUNC_3 (unsigned int,unsigned int*) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct kmmio_fault_page *VAR_0, bool VAR_1)
{
 unsigned int VAR_2;
 pte_t *VAR_3 = FUNC_3(VAR_0->page, &VAR_2);

 if (!VAR_3) {
  FUNC_4("kmmio: no pte for page 0x%08lx\n", VAR_0->page);
  return -1;
 }

 switch (VAR_2) {
 case 129:
  FUNC_1((pmd_t *)VAR_3, VAR_1, &VAR_0->old_presence);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_1, &VAR_0->old_presence);
  break;
 default:
  FUNC_4("kmmio: unexpected page level 0x%x.\n", VAR_2);
  return -1;
 }

 FUNC_0(VAR_0->page);
 return 0;
}
