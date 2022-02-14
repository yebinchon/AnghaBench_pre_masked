
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct korina_private {int lock; TYPE_1__* eth_regs; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_2__ {int etharc; int ethhash1; int ethhash0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 struct korina_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct korina_private *VAR_7 = FUNC_1(VAR_6);
 unsigned long VAR_8;
 struct dev_mc_list *VAR_9 = VAR_6->mc_list;
 u32 VAR_10 = VAR_0;
 int VAR_11;


 if (VAR_6->flags & VAR_5)
  VAR_10 |= VAR_3;

 else if ((VAR_6->flags & VAR_4) || (VAR_6->mc_count > 4))

  VAR_10 |= VAR_2;


 if (VAR_6->mc_count > 4) {
  u16 VAR_12[4];
  u32 VAR_13;

  for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
   VAR_12[VAR_11] = 0;

  for (VAR_11 = 0; VAR_11 < VAR_6->mc_count; VAR_11++) {
   char *VAR_14 = VAR_9->dmi_addr;

   VAR_9 = VAR_9->next;

   if (!(*VAR_14 & 1))
    continue;

   VAR_13 = FUNC_0(6, VAR_14);
   VAR_13 >>= 26;
   VAR_12[VAR_13 >> 4] |= 1 << (15 - (VAR_13 & 0xf));
  }

  VAR_10 |= VAR_1;


  FUNC_4((u32)(VAR_12[1] << 16 | VAR_12[0]),
     &VAR_7->eth_regs->ethhash0);
  FUNC_4((u32)(VAR_12[3] << 16 | VAR_12[2]),
     &VAR_7->eth_regs->ethhash1);
 }

 FUNC_2(&VAR_7->lock, VAR_8);
 FUNC_4(VAR_10, &VAR_7->eth_regs->etharc);
 FUNC_3(&VAR_7->lock, VAR_8);
}
