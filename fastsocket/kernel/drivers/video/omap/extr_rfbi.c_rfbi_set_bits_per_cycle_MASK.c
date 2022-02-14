
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_cycle; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_2)
{
 u32 VAR_3;

 FUNC_1(1);
 VAR_3 = FUNC_2(VAR_0);
 VAR_3 &= ~(0x03 << 0);

 switch (VAR_2) {
 case 8:
  break;
 case 16:
  VAR_3 |= 3;
  break;
 default:
  FUNC_0();
 }
 FUNC_3(VAR_0, VAR_3);
 VAR_1.bits_per_cycle = VAR_2;
 FUNC_1(0);
}
