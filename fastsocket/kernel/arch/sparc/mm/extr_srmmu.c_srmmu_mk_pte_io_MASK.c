
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pgprot_t ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static pte_t FUNC_2(unsigned long VAR_0, pgprot_t VAR_1, int VAR_2)
{ return FUNC_0(((VAR_0) >> 4) | (VAR_2 << 28) | FUNC_1(VAR_1)); }
