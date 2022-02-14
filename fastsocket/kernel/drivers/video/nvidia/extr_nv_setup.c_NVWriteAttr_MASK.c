
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvidia_par {int PCIO; scalar_t__ paletteEnabled; scalar_t__ IOBase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct nvidia_par *VAR_2, u8 VAR_3, u8 VAR_4)
{
 volatile u8 VAR_5;

 VAR_5 = FUNC_0(VAR_2->PCIO, VAR_2->IOBase + 0x0a);
 if (VAR_2->paletteEnabled)
  VAR_3 &= ~0x20;
 else
  VAR_3 |= 0x20;
 FUNC_1(VAR_2->PCIO, VAR_0, VAR_3);
 FUNC_1(VAR_2->PCIO, VAR_1, VAR_4);
}
