
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_2,
           unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2 & ~(VAR_1-1);
 unsigned long VAR_5 = (VAR_3<<VAR_0) & (VAR_1-1);

 if (VAR_4 + VAR_5 <= VAR_2)
  return VAR_4 + VAR_5;
 return VAR_4 - VAR_5;
}
