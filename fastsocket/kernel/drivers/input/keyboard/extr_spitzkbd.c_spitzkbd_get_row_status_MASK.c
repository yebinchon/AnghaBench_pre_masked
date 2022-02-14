
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(int VAR_3)
{
 return ((VAR_0 >> 12) & 0x01) | ((VAR_0 >> 16) & 0x02)
  | ((VAR_2 >> 25) & 0x04) | ((VAR_1 << 1) & 0x08)
  | ((VAR_1 >> 0) & 0x10) | ((VAR_1 >> 1) & 0x60);
}
