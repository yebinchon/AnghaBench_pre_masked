
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvidia_par {int PCIO; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct nvidia_par *VAR_0, int VAR_1)
{
 u8 VAR_2;

 FUNC_1(VAR_0->PCIO, 0x3D4, 0x1F);
 FUNC_1(VAR_0->PCIO, 0x3D5, VAR_1 ? 0x99 : 0x57);

 FUNC_1(VAR_0->PCIO, 0x3D4, 0x11);
 VAR_2 = FUNC_0(VAR_0->PCIO, 0x3D5);
 if (VAR_1)
  VAR_2 |= 0x80;
 else
  VAR_2 &= ~0x80;
 FUNC_1(VAR_0->PCIO, 0x3D5, VAR_2);
}
