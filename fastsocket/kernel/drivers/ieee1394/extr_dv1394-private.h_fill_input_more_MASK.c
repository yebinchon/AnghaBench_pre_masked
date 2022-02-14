
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_more {void** q; } ;


 void* FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct input_more *VAR_0,
       int VAR_1,
       unsigned int VAR_2,
       unsigned long VAR_3)
{
 u32 VAR_4 = 2 << 28;
 VAR_4 |= 8 << 24;
 if (VAR_1)
  VAR_4 |= 0 << 20;
 VAR_4 |= 0x0 << 16;

        VAR_4 |= VAR_2;

 VAR_0->q[0] = FUNC_0(VAR_4);
 VAR_0->q[1] = FUNC_0(VAR_3);
 VAR_0->q[2] = FUNC_0(0);
 VAR_0->q[3] = FUNC_0(0);
}
