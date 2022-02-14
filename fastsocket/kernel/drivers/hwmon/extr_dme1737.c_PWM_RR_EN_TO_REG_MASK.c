
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_1 == 1) ? 0x80 : 0x08;

 return VAR_0 ? VAR_2 | VAR_3 : VAR_2 & ~VAR_3;
}
