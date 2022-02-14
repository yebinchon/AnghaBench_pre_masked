
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_2 == 1) ? VAR_1 >> 4 : VAR_1;

 return (VAR_3 & 0x08) ? VAR_0[VAR_3 & 0x07] : 0;
}
