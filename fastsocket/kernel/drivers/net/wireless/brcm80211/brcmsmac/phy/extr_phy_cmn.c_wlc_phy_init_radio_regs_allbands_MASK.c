
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u16 ;
struct radio_20xx_regs {int address; scalar_t__ init; scalar_t__ do_init; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int ) ;

uint
FUNC_1(struct brcms_phy *VAR_0,
     struct radio_20xx_regs *VAR_1)
{
 uint VAR_2 = 0;

 do {
  if (VAR_1[VAR_2].do_init)
   FUNC_0(VAR_0, VAR_1[VAR_2].address,
     (u16) VAR_1[VAR_2].init);

  VAR_2++;
 } while (VAR_1[VAR_2].address != 0xffff);

 return VAR_2;
}
