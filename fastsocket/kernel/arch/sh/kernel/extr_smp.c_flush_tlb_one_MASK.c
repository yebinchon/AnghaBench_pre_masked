
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_tlb_data {unsigned long addr1; unsigned long addr2; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ,void*,int) ;

void FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 struct flush_tlb_data VAR_3;

 VAR_3.addr1 = VAR_1;
 VAR_3.addr2 = VAR_2;

 FUNC_1(VAR_0, (void *)&VAR_3, 1);
 FUNC_0(VAR_1, VAR_2);
}
