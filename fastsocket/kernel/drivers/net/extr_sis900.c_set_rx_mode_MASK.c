
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sis900_private {scalar_t__ chipset_rev; } ;
struct net_device {long base_addr; int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 struct sis900_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_20)
{
 long VAR_21 = VAR_20->base_addr;
 struct sis900_private *VAR_22 = FUNC_1(VAR_20);
 u16 VAR_23[16] = {0};
 int VAR_24, VAR_25;
 u32 VAR_26;


 if((VAR_22->chipset_rev >= VAR_10) ||
   (VAR_22->chipset_rev == VAR_11))
  VAR_25 = 16;
 else
  VAR_25 = 8;

 if (VAR_20->flags & VAR_2) {

  VAR_26 = VAR_7;
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++)
   VAR_23[VAR_24] = 0xffff;
 } else if ((VAR_20->mc_count > VAR_15) ||
     (VAR_20->flags & VAR_0)) {

  VAR_26 = VAR_3 | VAR_4;
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++)
   VAR_23[VAR_24] = 0xffff;
 } else {



  struct dev_mc_list *VAR_27;
  VAR_26 = VAR_3;
  for (VAR_24 = 0, VAR_27 = VAR_20->mc_list;
   VAR_27 && VAR_24 < VAR_20->mc_count;
   VAR_24++, VAR_27 = VAR_27->next) {
   unsigned int VAR_28 =
    FUNC_3(VAR_27->dmi_addr, VAR_22->chipset_rev);
   VAR_23[VAR_28 >> 4] |= (1 << (VAR_28 & 0xf));
  }
 }


 for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {

  FUNC_2((u32)(0x00000004+VAR_24) << VAR_5, VAR_21 + VAR_16);
  FUNC_2(VAR_23[VAR_24], VAR_21 + VAR_17);
 }

 FUNC_2(VAR_6 | VAR_26, VAR_21 + VAR_16);



 if (VAR_20->flags & VAR_1) {
  u32 VAR_29;

  VAR_29 = FUNC_0(VAR_21 + VAR_14);
  FUNC_2(VAR_29 | VAR_12 | VAR_9, VAR_21 + VAR_14);

  FUNC_2(FUNC_0(VAR_21 + VAR_19) | VAR_13, VAR_21 + VAR_19);
  FUNC_2(FUNC_0(VAR_21 + VAR_18) | VAR_8, VAR_21 + VAR_18);

  FUNC_2(VAR_29, VAR_21 + VAR_14);
 }

 return;
}
