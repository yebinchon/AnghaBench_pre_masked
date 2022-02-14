
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_1)
{
 int VAR_2 = 0;







 if (FUNC_0(FUNC_1()))
  VAR_2 = VAR_0/2;

 if (VAR_1 < 10)
  return VAR_2;
 if (VAR_1 < 100)
  return VAR_2 + 1;
 if (VAR_1 < 1000)
  return VAR_2 + 2;
 if (VAR_1 < 10000)
  return VAR_2 + 3;
 if (VAR_1 < 100000)
  return VAR_2 + 4;
 return VAR_2 + 5;
}
