
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2,
          uint32_t VAR_3)
{
 return (VAR_0 & 0xFFFF) |
   ((VAR_1 & 0xFF) << 16) |
   ((!!VAR_2) << 30) |
   ((!!VAR_3) << 31);
}
