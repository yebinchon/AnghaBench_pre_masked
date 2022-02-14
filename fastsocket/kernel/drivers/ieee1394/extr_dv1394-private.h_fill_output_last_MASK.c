
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct output_last {void** q; } ;


 void* FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct output_last *VAR_0,
        int VAR_1,
        int VAR_2,
        unsigned int VAR_3,
        unsigned long VAR_4)
{
 u32 VAR_5 = 0;
 VAR_5 |= 1 << 28;

 if (VAR_1)
  VAR_5 |= 1 << 27;

 if (VAR_2)
  VAR_5 |= 3 << 20;

 VAR_5 |= 3 << 18;
 VAR_5 |= VAR_3;

 VAR_0->q[0] = FUNC_0(VAR_5);
 VAR_0->q[1] = FUNC_0(VAR_4);
 VAR_0->q[2] = FUNC_0(0);
 VAR_0->q[3] = FUNC_0(0);
}
