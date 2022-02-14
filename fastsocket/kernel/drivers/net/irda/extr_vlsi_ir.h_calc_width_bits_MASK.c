
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned
FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;

 if (VAR_1)
  return (VAR_2) ? 12 : 24;

 VAR_3 = ((VAR_2) ? 12 : 24) / (FUNC_0(VAR_0)+1);



 return (VAR_3>0) ? (VAR_3-1) : 0;
}
