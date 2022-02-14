
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_drconf_cell {int flags; int aa_index; int reserved; int drc_index; int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const**) ;

__attribute__((used)) static void FUNC_1(struct of_drconf_cell *VAR_1, const u32 **VAR_2)
{
 const u32 *VAR_3;

 VAR_1->base_addr = FUNC_0(VAR_0, VAR_2);

 VAR_3 = *VAR_2;
 VAR_1->drc_index = VAR_3[0];
 VAR_1->reserved = VAR_3[1];
 VAR_1->aa_index = VAR_3[2];
 VAR_1->flags = VAR_3[3];

 *VAR_2 = VAR_3 + 4;
}
