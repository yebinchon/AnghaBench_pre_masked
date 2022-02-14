
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(void) {



 if ((VAR_1 & 0x0F) == 0x0C &&
     ((1 << ((VAR_1 & 0xF0) >> 4)) & VAR_0))
  return 0;
 return 1;
}
