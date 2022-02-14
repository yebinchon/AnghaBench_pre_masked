
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgprot_t ;
typedef enum km_type { ____Placeholder_km_type } km_type ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;

void *FUNC_7(unsigned long VAR_3, enum km_type VAR_4, pgprot_t VAR_5)
{
 enum fixed_addresses VAR_6;
 unsigned long VAR_7;

 FUNC_3();

 FUNC_2(VAR_4);
 VAR_6 = VAR_4 + VAR_1 * FUNC_6();
 VAR_7 = FUNC_0(VAR_0 + VAR_6);
 FUNC_5(VAR_2 - VAR_6, FUNC_4(VAR_3, VAR_5));
 FUNC_1();

 return (void *)VAR_7;
}
