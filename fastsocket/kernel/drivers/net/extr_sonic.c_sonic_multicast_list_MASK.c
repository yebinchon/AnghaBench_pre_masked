
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int cda_laddr; } ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {unsigned char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 struct sonic_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct net_device*,int,int ,unsigned char) ;
 int VAR_13 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_14)
{
 struct sonic_local *VAR_15 = FUNC_2(VAR_14);
 unsigned int VAR_16;
 struct dev_mc_list *VAR_17 = VAR_14->mc_list;
 unsigned char *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_0(VAR_9) & ~(VAR_12 | VAR_10);
 VAR_16 |= VAR_11;

 if (VAR_14->flags & VAR_1) {
  VAR_16 |= VAR_12;
 } else {
  if ((VAR_14->flags & VAR_0) || (VAR_14->mc_count > 15)) {
   VAR_16 |= VAR_10;
  } else {
   if (VAR_13 > 2)
    FUNC_3("sonic_multicast_list: mc_count %d\n", VAR_14->mc_count);
   FUNC_6(VAR_14, 1);
   for (VAR_19 = 1; VAR_19 <= VAR_14->mc_count; VAR_19++) {
    VAR_18 = VAR_17->dmi_addr;
    VAR_17 = VAR_17->next;
    FUNC_4(VAR_14, VAR_19, VAR_4, VAR_18[1] << 8 | VAR_18[0]);
    FUNC_4(VAR_14, VAR_19, VAR_5, VAR_18[3] << 8 | VAR_18[2]);
    FUNC_4(VAR_14, VAR_19, VAR_6, VAR_18[5] << 8 | VAR_18[4]);
    FUNC_6(VAR_14, FUNC_5(VAR_14) | (1 << VAR_19));
   }
   FUNC_1(VAR_2, 16);

   FUNC_1(VAR_3, VAR_15->cda_laddr & 0xffff);
   FUNC_1(VAR_7, VAR_8);
  }
 }

 if (VAR_13 > 2)
  FUNC_3("sonic_multicast_list: setting RCR=%x\n", VAR_16);

 FUNC_1(VAR_9, VAR_16);
}
