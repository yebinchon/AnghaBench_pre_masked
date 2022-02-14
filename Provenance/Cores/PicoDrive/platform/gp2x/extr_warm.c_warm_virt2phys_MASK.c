
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

unsigned long FUNC_2(const void *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_3 = (unsigned long)VAR_2;
 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_1("WARMC_VIRT2PHYS failed");
  return (unsigned long)-1;
 }

 return VAR_3;
}
