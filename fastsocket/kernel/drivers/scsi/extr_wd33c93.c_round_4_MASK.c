
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int
FUNC_0(unsigned int VAR_0)
{
 switch (VAR_0 & 3) {
  case 1: --VAR_0;
   break;
  case 2: ++VAR_0;
  case 3: ++VAR_0;
 }
 return VAR_0;
}
