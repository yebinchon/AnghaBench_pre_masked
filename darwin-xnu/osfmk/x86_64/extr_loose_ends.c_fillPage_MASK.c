
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppnum_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(ppnum_t VAR_1, unsigned int VAR_2)
{
 pmap_paddr_t VAR_3;
 int VAR_4;
 int VAR_5 = VAR_0 / sizeof(unsigned int);
 unsigned int *VAR_6;

 VAR_3 = FUNC_1(VAR_1);
 for (VAR_4 = 0, VAR_6 = (unsigned int *)FUNC_0(VAR_3); VAR_4 < VAR_5; VAR_4++)
  *VAR_6++ = VAR_2;
}
