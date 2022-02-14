
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ide_hwif_t ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_1 (ide_hwif_t *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0 ? VAR_0 : 50;
 u8 VAR_5, VAR_6;

 if (VAR_4 <= 33) {
  VAR_5 = 9 - FUNC_0(VAR_2 * VAR_4 / 1000 + 1, 2, 9);
  VAR_6 = 15 - FUNC_0(VAR_3 * VAR_4 / 1000 + 1, 0, 15);
 } else {
  VAR_5 = 8 - FUNC_0(VAR_2 * VAR_4 / 1000 + 1, 1, 8);
  VAR_6 = 18 - FUNC_0(VAR_3 * VAR_4 / 1000 + 1, 3, 18);
 }

 return (VAR_6 << 4) | 0x08 | VAR_5;
}
