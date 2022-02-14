
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_0)
{
 int VAR_1 = 0;

 while (VAR_0) {
  VAR_0 >>= 1;
  VAR_1++;
 }
 if (VAR_1 > 0x7)
  FUNC_0("comedi: bug! retry_limit too large\n");
 return (VAR_1 & 0x7) << 21;
}
