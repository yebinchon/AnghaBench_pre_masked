
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_ldg {int irq; } ;
struct niu {int num_ldg; struct niu_ldg* ldg; int * irq_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct niu_ldg*) ;
 int VAR_2 ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (int ,int ,int,int ,struct niu_ldg*) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_3);

 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_ldg; VAR_4++) {
  struct niu_ldg *VAR_7 = &VAR_3->ldg[VAR_4];

  VAR_6 = FUNC_2(VAR_7->irq, VAR_2,
      VAR_1 | VAR_0,
      VAR_3->irq_name[VAR_4], VAR_7);
  if (VAR_6)
   goto out_free_irqs;

 }

 return 0;

out_free_irqs:
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct niu_ldg *VAR_8 = &VAR_3->ldg[VAR_5];

  FUNC_0(VAR_8->irq, VAR_8);
 }
 return VAR_6;
}
