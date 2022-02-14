
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int current_address; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct seq_file*,struct pg_state*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_2, struct pg_state *VAR_3, pmd_t VAR_4,
       unsigned long VAR_5)
{
 int VAR_6;
 pte_t *VAR_7;

 VAR_7 = (pte_t *) FUNC_2(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  pgprot_t VAR_8 = FUNC_3(*VAR_7);

  VAR_3->current_address = FUNC_0(VAR_5 + VAR_6 * VAR_0);
  FUNC_1(VAR_2, VAR_3, VAR_8, 4);
  VAR_7++;
 }
}
