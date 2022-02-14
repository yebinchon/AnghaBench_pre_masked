
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned long*,int,int,int ) ;

unsigned long FUNC_2(unsigned long VAR_2)
{
 if (VAR_2 >= VAR_1 && VAR_2 <= VAR_0) {
  unsigned long VAR_3;
  FUNC_1(0, VAR_2, &VAR_3, sizeof(VAR_3), 1, 0);
  return VAR_3;
 } else
  return *(volatile unsigned long *)FUNC_0(VAR_2);
}
