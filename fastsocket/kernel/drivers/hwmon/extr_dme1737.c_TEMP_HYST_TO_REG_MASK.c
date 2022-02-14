
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0((VAR_0 + 500) / 1000, 0, 15);

 return (VAR_1 == 1) ? (VAR_2 & 0xf0) | VAR_3 : (VAR_2 & 0x0f) | (VAR_3 << 4);
}
