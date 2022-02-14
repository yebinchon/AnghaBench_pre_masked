
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct gem {scalar_t__ regs; TYPE_1__* dev; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_2__ {int flags; int mc_count; struct dev_mc_list* mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct gem *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 if ((VAR_5->dev->flags & VAR_0) ||
     (VAR_5->dev->mc_count > 256)) {
      for (VAR_7=0; VAR_7<16; VAR_7++)
   FUNC_1(0xffff, VAR_5->regs + VAR_2 + (VAR_7 << 2));
  VAR_6 |= VAR_3;
 } else if (VAR_5->dev->flags & VAR_1) {
  VAR_6 |= VAR_4;
 } else {
  u16 VAR_8[16];
  u32 VAR_9;
  struct dev_mc_list *VAR_10 = VAR_5->dev->mc_list;
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
   VAR_8[VAR_11] = 0;

  for (VAR_11 = 0; VAR_11 < VAR_5->dev->mc_count; VAR_11++) {
   char *VAR_12 = VAR_10->dmi_addr;

   VAR_10 = VAR_10->next;

   if (!(*VAR_12 & 1))
    continue;

    VAR_9 = FUNC_0(6, VAR_12);
   VAR_9 >>= 24;
   VAR_8[VAR_9 >> 4] |= 1 << (15 - (VAR_9 & 0xf));
  }
      for (VAR_11=0; VAR_11<16; VAR_11++)
   FUNC_1(VAR_8[VAR_11], VAR_5->regs + VAR_2 + (VAR_11 << 2));
  VAR_6 |= VAR_3;
 }

 return VAR_6;
}
