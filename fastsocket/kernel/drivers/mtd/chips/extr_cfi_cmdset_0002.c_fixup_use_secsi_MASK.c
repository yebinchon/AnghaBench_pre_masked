
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {void* read_fact_prot_reg; void* read_user_prot_reg; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_1, void *VAR_2)
{

 VAR_1->read_user_prot_reg = VAR_0;
 VAR_1->read_fact_prot_reg = VAR_0;
}
