
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;
struct cas {scalar_t__ regs; TYPE_1__* dev; } ;
typedef int hash_table ;
struct TYPE_2__ {int flags; struct dev_mc_list* mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_5(struct cas *VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8;

 if (VAR_6->dev->flags & VAR_3) {
  VAR_7 |= VAR_5;

 } else if (VAR_6->dev->flags & VAR_2) {
      for (VAR_8=0; VAR_8 < 16; VAR_8++)
   FUNC_4(0xFFFF, VAR_6->regs + FUNC_1(VAR_8));
  VAR_7 |= VAR_4;

 } else {
  u16 VAR_9[16];
  u32 VAR_10;
  struct dev_mc_list *VAR_11 = VAR_6->dev->mc_list;
  int VAR_12;




  for (VAR_12 = 1; VAR_12 <= VAR_0; VAR_12++) {
   if (!VAR_11) {
    FUNC_4(0x0, VAR_6->regs + FUNC_0(VAR_12*3 + 0));
    FUNC_4(0x0, VAR_6->regs + FUNC_0(VAR_12*3 + 1));
    FUNC_4(0x0, VAR_6->regs + FUNC_0(VAR_12*3 + 2));
    continue;
   }
   FUNC_4((VAR_11->dmi_addr[4] << 8) | VAR_11->dmi_addr[5],
          VAR_6->regs + FUNC_0(VAR_12*3 + 0));
   FUNC_4((VAR_11->dmi_addr[2] << 8) | VAR_11->dmi_addr[3],
          VAR_6->regs + FUNC_0(VAR_12*3 + 1));
   FUNC_4((VAR_11->dmi_addr[0] << 8) | VAR_11->dmi_addr[1],
          VAR_6->regs + FUNC_0(VAR_12*3 + 2));
   VAR_11 = VAR_11->next;
  }




  FUNC_3(VAR_9, 0, sizeof(VAR_9));
  while (VAR_11) {
    VAR_10 = FUNC_2(VAR_1, VAR_11->dmi_addr);
   VAR_10 >>= 24;
   VAR_9[VAR_10 >> 4] |= 1 << (15 - (VAR_10 & 0xf));
   VAR_11 = VAR_11->next;
  }
      for (VAR_12=0; VAR_12 < 16; VAR_12++)
   FUNC_4(VAR_9[VAR_12], VAR_6->regs +
          FUNC_1(VAR_12));
  VAR_7 |= VAR_4;
 }

 return VAR_7;
}
