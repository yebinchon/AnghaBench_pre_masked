
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3)
{
 int VAR_4;

 if (VAR_3 & VAR_1)
  return 0;

 VAR_4 = FUNC_0(FUNC_1(VAR_3));
 if (VAR_4 + VAR_2 != VAR_0)
  return 0;

 return 1;
}
