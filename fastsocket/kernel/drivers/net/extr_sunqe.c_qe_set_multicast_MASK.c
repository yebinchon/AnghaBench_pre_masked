
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sunqe {int mconfig; scalar_t__ mregs; } ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 struct sunqe* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
 struct sunqe *VAR_9 = FUNC_2(VAR_8);
 struct dev_mc_list *VAR_10 = VAR_8->mc_list;
 u8 VAR_11 = VAR_9->mconfig;
 char *VAR_12;
 int VAR_13;
 u32 VAR_14;


 FUNC_3(VAR_8);

 if ((VAR_8->flags & VAR_0) || (VAR_8->mc_count > 64)) {
  FUNC_6(VAR_4 | VAR_5,
       VAR_9->mregs + VAR_3);
  while ((FUNC_5(VAR_9->mregs + VAR_3) & VAR_4) != 0)
   FUNC_0();
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
   FUNC_6(0xff, VAR_9->mregs + VAR_2);
  FUNC_6(0, VAR_9->mregs + VAR_3);
 } else if (VAR_8->flags & VAR_1) {
  VAR_11 |= VAR_7;
 } else {
  u16 VAR_15[4];
  u8 *VAR_16 = (unsigned char *) &VAR_15[0];

  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   VAR_15[VAR_13] = 0;

  for (VAR_13 = 0; VAR_13 < VAR_8->mc_count; VAR_13++) {
   VAR_12 = VAR_10->dmi_addr;
   VAR_10 = VAR_10->next;

   if (!(*VAR_12 & 1))
    continue;
   VAR_14 = FUNC_1(6, VAR_12);
   VAR_14 >>= 26;
   VAR_15[VAR_14 >> 4] |= 1 << (VAR_14 & 0xf);
  }

  FUNC_6(VAR_4 | VAR_5,
       VAR_9->mregs + VAR_3);
  while ((FUNC_5(VAR_9->mregs + VAR_3) & VAR_4) != 0)
   FUNC_0();
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
   u8 VAR_17 = *VAR_16++;
   FUNC_6(VAR_17, VAR_9->mregs + VAR_2);
  }
  FUNC_6(0, VAR_9->mregs + VAR_3);
 }







 VAR_9->mconfig = VAR_11;
 FUNC_6(VAR_9->mconfig, VAR_9->mregs + VAR_6);


 FUNC_4(VAR_8);
}
