
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int FUNC_0 (unsigned long,int,unsigned long) ;

void
FUNC_1 (u64 VAR_0, u64 VAR_1)
{



   VAR_0 &= -16UL;
 FUNC_0(VAR_0 + 2,
     0x011ffffe000UL, ( ((VAR_1 & 0x0800000000000000UL) >> 23)
         | ((VAR_1 & 0x00000000000fffffUL) << 13) ));
 FUNC_0(VAR_0 + 1, 0x1fffffffffcUL, VAR_1 >> 18);
}
