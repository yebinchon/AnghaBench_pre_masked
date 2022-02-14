
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4 (enum fixed_addresses VAR_2, phys_addr_t VAR_3, pgprot_t VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_2);

 if (VAR_2 >= VAR_0) {
  FUNC_0();
  return;
 }

 FUNC_2(VAR_5, VAR_3, FUNC_3(VAR_4));
 VAR_1++;
}
