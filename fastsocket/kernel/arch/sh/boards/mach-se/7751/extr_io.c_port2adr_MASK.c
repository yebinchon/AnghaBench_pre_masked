
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline volatile u16 *FUNC_1(unsigned int VAR_1)
{
 if (VAR_1 >= 0x2000)
  return (volatile __u16 *) (VAR_0 + (VAR_1 - 0x2000));
 FUNC_0((unsigned long)VAR_1);
 return (volatile __u16*)VAR_1;
}
