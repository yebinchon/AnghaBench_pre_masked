
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; struct dev_mc_list* mc_list; } ;
struct ethoc {int dummy; } ;
struct dev_mc_list {int dmi_addr; int dmi_addrlen; struct dev_mc_list* next; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ethoc*,int ) ;
 int FUNC_2 (struct ethoc*,int ,int) ;
 struct ethoc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10)
{
 struct ethoc *VAR_11 = FUNC_3(VAR_10);
 u32 VAR_12 = FUNC_1(VAR_11, VAR_6);
 struct dev_mc_list *VAR_13 = ((void*)0);
 u32 VAR_14[2] = { 0, 0 };


 if (VAR_10->flags & VAR_4)
  VAR_12 |= VAR_8;
 else
  VAR_12 &= ~VAR_8;


 if (VAR_10->flags & VAR_3)
  VAR_12 &= ~VAR_7;
 else
  VAR_12 |= VAR_7;


 if (VAR_10->flags & VAR_5)
  VAR_12 |= VAR_9;
 else
  VAR_12 &= ~VAR_9;

 FUNC_2(VAR_11, VAR_6, VAR_12);


 if (VAR_10->flags & VAR_2) {
  VAR_14[0] = 0xffffffff;
  VAR_14[1] = 0xffffffff;
 } else {
  for (VAR_13 = VAR_10->mc_list; VAR_13; VAR_13 = VAR_13->next) {
   u32 VAR_15 = FUNC_0(VAR_13->dmi_addrlen, VAR_13->dmi_addr);
   int VAR_16 = (VAR_15 >> 26) & 0x3f;
   VAR_14[VAR_16 >> 5] |= 1 << (VAR_16 & 0x1f);
  }
 }

 FUNC_2(VAR_11, VAR_0, VAR_14[0]);
 FUNC_2(VAR_11, VAR_1, VAR_14[1]);
}
