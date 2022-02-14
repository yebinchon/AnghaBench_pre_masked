
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static __inline__ int FUNC_0(unsigned VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_2 & ~0xffff)
  return -1;
 for (VAR_4 = (VAR_2 >> 2); VAR_4 < (VAR_2 >> 2) + VAR_3; VAR_4++)
  if (VAR_1[VAR_4] != VAR_0)
   return 1;
 return 0;
}
