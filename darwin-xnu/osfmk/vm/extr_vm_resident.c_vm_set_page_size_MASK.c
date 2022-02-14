
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*) ;

void
FUNC_1(void)
{
 VAR_5 = VAR_2;
 VAR_3 = VAR_0;
 VAR_4 = VAR_1;

 if ((VAR_3 & VAR_5) != 0)
  FUNC_0("vm_set_page_size: page size not a power of two");

 for (VAR_4 = 0; ; VAR_4++)
  if ((1U << VAR_4) == VAR_5)
   break;
}
