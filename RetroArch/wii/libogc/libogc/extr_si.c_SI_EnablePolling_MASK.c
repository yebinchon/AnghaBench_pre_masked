
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int poll; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_3(u32 VAR_2)
{
 u32 VAR_3,VAR_4;
 FUNC_1(VAR_3);
 VAR_2 >>= 24;
 VAR_4 = (VAR_2>>4)&0x0f;
 VAR_1.poll &= ~VAR_4;

 VAR_2 &= (0x03fffff0|VAR_4);

 VAR_1.poll |= (VAR_2&~0x03ffff00);
 FUNC_0();
 VAR_0[12] = VAR_1.poll;
 FUNC_2(VAR_3);
}
