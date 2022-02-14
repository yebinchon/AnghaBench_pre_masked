
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioport2; int dev; scalar_t__ bits; scalar_t__ ioport1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_4;

 FUNC_2(VAR_3.dev, VAR_0, &VAR_4);
 VAR_4 = (VAR_4 & 0xFFFF0000) | ((u32) VAR_3.ioport1);
 FUNC_3(VAR_3.dev, VAR_0, VAR_4);

 FUNC_2(VAR_3.dev, VAR_0, &VAR_4);
 VAR_4 = (VAR_4 & 0xFFF0FFFF) |
     (((u32) VAR_3.ioport1 ^ VAR_3.ioport2) << 16);
 FUNC_3(VAR_3.dev, VAR_0, VAR_4);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 &= ~(((u32) 0x3) << VAR_2);
 VAR_4 |= (((u32) VAR_3.bits) << VAR_2);
 FUNC_1(VAR_4, VAR_1);

 FUNC_2(VAR_3.dev, VAR_0, &VAR_4);
 VAR_4 = (VAR_4 & 0xFF1FFFFF) | 0x00C00000;
 FUNC_3(VAR_3.dev, VAR_0, VAR_4);
}
