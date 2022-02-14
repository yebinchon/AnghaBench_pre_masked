
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {unsigned long extra_base; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_0, u8 VAR_1)
{
 unsigned long VAR_2 = VAR_0->extra_base;
 u8 VAR_3 = FUNC_0(VAR_2 + 0x6b);

 if ((VAR_3 & 0x7f) == VAR_1)
  return;


 FUNC_1(0x80, VAR_2 + 0x63);
 FUNC_1(0x80, VAR_2 + 0x67);


 FUNC_1(VAR_1, VAR_2 + 0x6b);
 FUNC_1(0xc0, VAR_2 + 0x69);





 FUNC_1(FUNC_0(VAR_2 + 0x60) | 0x32, VAR_2 + 0x60);
 FUNC_1(FUNC_0(VAR_2 + 0x64) | 0x32, VAR_2 + 0x64);


 FUNC_1(0x00, VAR_2 + 0x69);


 FUNC_1(0x00, VAR_2 + 0x63);
 FUNC_1(0x00, VAR_2 + 0x67);
}
