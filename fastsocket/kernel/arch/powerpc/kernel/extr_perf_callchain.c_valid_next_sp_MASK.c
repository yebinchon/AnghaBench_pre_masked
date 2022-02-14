
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_3, unsigned long VAR_4)
{
 if (VAR_3 & 0xf)
  return 0;
 if (!FUNC_0(VAR_3, VAR_2, VAR_0))
  return 0;
 if (VAR_3 >= VAR_4 + VAR_0)
  return 1;




 if ((VAR_3 & ~(VAR_1 - 1)) != (VAR_4 & ~(VAR_1 - 1)))
  return 1;
 return 0;
}
