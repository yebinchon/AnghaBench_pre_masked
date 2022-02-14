
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned short FUNC_0(unsigned short VAR_0)
{
 unsigned int VAR_1;


 VAR_1 = ~VAR_0;
 VAR_1 = (VAR_1 | (VAR_1>>1)) & 0x5555;

 VAR_1 = (VAR_1 | (VAR_1 >> 1)) & 0x3333;
 VAR_1 = (VAR_1 | (VAR_1 >> 2)) & 0x0f0f;
 VAR_1 = (VAR_1 | (VAR_1 >> 4)) & 0x00ff;
 return VAR_1;
}
