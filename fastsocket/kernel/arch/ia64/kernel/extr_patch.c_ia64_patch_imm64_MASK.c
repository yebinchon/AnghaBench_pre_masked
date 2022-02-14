
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
     0x01fffefe000UL, ( ((VAR_1 & 0x8000000000000000UL) >> 27)
         | ((VAR_1 & 0x0000000000200000UL) << 0)
         | ((VAR_1 & 0x00000000001f0000UL) << 6)
         | ((VAR_1 & 0x000000000000ff80UL) << 20)
         | ((VAR_1 & 0x000000000000007fUL) << 13) ));
 FUNC_0(VAR_0 + 1, 0x1ffffffffffUL, VAR_1 >> 22);
}
