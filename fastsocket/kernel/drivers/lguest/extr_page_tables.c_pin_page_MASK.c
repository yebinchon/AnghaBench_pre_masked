
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int dummy; } ;


 int FUNC_0 (struct lg_cpu*,unsigned long,int) ;
 int FUNC_1 (struct lg_cpu*,char*,unsigned long) ;
 int FUNC_2 (struct lg_cpu*,unsigned long) ;

void FUNC_3(struct lg_cpu *VAR_0, unsigned long VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1) && !FUNC_0(VAR_0, VAR_1, 2))
  FUNC_1(VAR_0, "bad stack page %#lx", VAR_1);
}
