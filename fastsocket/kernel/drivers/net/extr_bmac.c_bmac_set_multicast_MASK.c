
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8)
{
 struct dev_mc_list *VAR_9 = VAR_8->mc_list;
 char *VAR_10;
 int VAR_11;
 unsigned short VAR_12;
 u32 VAR_13;

 if((VAR_8->flags & VAR_4) || (VAR_8->mc_count > 64)) {
  FUNC_1(VAR_8, VAR_0, 0xffff);
  FUNC_1(VAR_8, VAR_1, 0xffff);
  FUNC_1(VAR_8, VAR_2, 0xffff);
  FUNC_1(VAR_8, VAR_3, 0xffff);
 } else if(VAR_8->flags & VAR_5) {
  VAR_12 = FUNC_0(VAR_8, VAR_6);
  VAR_12 |= VAR_7;
  FUNC_1(VAR_8, VAR_6, VAR_12);
 } else {
  u16 VAR_14[4];

  VAR_12 = FUNC_0(VAR_8, VAR_6);
  VAR_12 &= ~VAR_7;
  FUNC_1(VAR_8, VAR_6, VAR_12);

  for(VAR_11 = 0; VAR_11 < 4; VAR_11++) VAR_14[VAR_11] = 0;

  for(VAR_11 = 0; VAR_11 < VAR_8->mc_count; VAR_11++) {
   VAR_10 = VAR_9->dmi_addr;
   VAR_9 = VAR_9->next;

   if(!(*VAR_10 & 1))
    continue;

   VAR_13 = FUNC_2(6, VAR_10);
   VAR_13 >>= 26;
   VAR_14[VAR_13 >> 4] |= 1 << (VAR_13 & 0xf);
  }
  FUNC_1(VAR_8, VAR_0, VAR_14[0]);
  FUNC_1(VAR_8, VAR_1, VAR_14[1]);
  FUNC_1(VAR_8, VAR_2, VAR_14[2]);
  FUNC_1(VAR_8, VAR_3, VAR_14[3]);
 }
}
