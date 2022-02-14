
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct cp_private {int rx_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_10 ;
 struct cp_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_11)
{
 struct cp_private *VAR_12 = FUNC_2(VAR_11);
 u32 VAR_13[2];
 int VAR_14, VAR_15;


 if (VAR_11->flags & VAR_6) {

  VAR_15 =
      VAR_1 | VAR_2 | VAR_3 |
      VAR_0;
  VAR_13[1] = VAR_13[0] = 0xffffffff;
 } else if ((VAR_11->mc_count > VAR_10)
     || (VAR_11->flags & VAR_5)) {

  VAR_15 = VAR_1 | VAR_2 | VAR_3;
  VAR_13[1] = VAR_13[0] = 0xffffffff;
 } else {
  struct dev_mc_list *VAR_16;
  VAR_15 = VAR_1 | VAR_3;
  VAR_13[1] = VAR_13[0] = 0;
  for (VAR_14 = 0, VAR_16 = VAR_11->mc_list; VAR_16 && VAR_14 < VAR_11->mc_count;
       VAR_14++, VAR_16 = VAR_16->next) {
   int VAR_17 = FUNC_1(VAR_4, VAR_16->dmi_addr) >> 26;

   VAR_13[VAR_17 >> 5] |= 1 << (VAR_17 & 31);
   VAR_15 |= VAR_2;
  }
 }


 VAR_12->rx_config = VAR_9 | VAR_15;
 FUNC_0 (VAR_8, VAR_12->rx_config);

 FUNC_0 (VAR_7 + 0, VAR_13[0]);
 FUNC_0 (VAR_7 + 4, VAR_13[1]);
}
