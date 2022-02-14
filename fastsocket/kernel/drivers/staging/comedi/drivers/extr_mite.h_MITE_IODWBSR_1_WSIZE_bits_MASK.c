
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned FUNC_1(unsigned VAR_0)
{
 unsigned VAR_1 = 0;
 while (VAR_0 >>= 1)
  ++VAR_1;
 FUNC_0(VAR_1 < 1);
 return (VAR_1 - 1) & 0x1f;
}
