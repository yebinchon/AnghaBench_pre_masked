
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcs_struct {int * p_location_code; int p_partition_ID; int p_unit_address; } ;
struct hvcs_partner_info {int * location_code; int partition_ID; int unit_address; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct hvcs_partner_info *VAR_1, struct hvcs_struct *VAR_2)
{
 int VAR_3;

 VAR_2->p_unit_address = VAR_1->unit_address;
 VAR_2->p_partition_ID = VAR_1->partition_ID;
 VAR_3 = FUNC_0(&VAR_1->location_code[0]);
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;


 FUNC_1(&VAR_2->p_location_code[0],
   &VAR_1->location_code[0], VAR_3 + 1);
}
