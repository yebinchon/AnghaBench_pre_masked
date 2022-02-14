
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;
struct bdx_priv {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
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
 int FUNC_1 (struct bdx_priv*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bdx_priv*,int,int) ;
 struct bdx_priv* FUNC_4 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_14)
{
 struct bdx_priv *VAR_15 = FUNC_4(VAR_14);

 u32 VAR_16 =
     VAR_3 | VAR_2 | VAR_4;
 int VAR_17;

 VAR_0;




 if (VAR_14->flags & VAR_7) {
  VAR_16 |= VAR_5;
 } else if (VAR_14->flags & VAR_6) {

  for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
   FUNC_3(VAR_15, VAR_13 + VAR_17 * 4, ~0);
 } else if (VAR_14->mc_count) {
  u8 VAR_18;
  struct dev_mc_list *VAR_19;
  u32 VAR_20, VAR_21;


  for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
   FUNC_3(VAR_15, VAR_13 + VAR_17 * 4, 0);

  for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
   FUNC_3(VAR_15, VAR_11 + VAR_17 * 8, 0);
   FUNC_3(VAR_15, VAR_12 + VAR_17 * 8, 0);
  }





  VAR_19 = VAR_14->mc_list;


  for (; VAR_19; VAR_19 = VAR_19->next) {
   VAR_18 = 0;
   for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
    VAR_18 ^= VAR_19->dmi_addr[VAR_17];
   VAR_20 = VAR_13 + ((VAR_18 >> 5) << 2);
   VAR_21 = FUNC_1(VAR_15, VAR_20);
   VAR_21 |= (1 << (VAR_18 % 32));
   FUNC_3(VAR_15, VAR_20, VAR_21);
  }

 } else {
  FUNC_0("only own mac %d\n", VAR_14->mc_count);
  VAR_16 |= VAR_2;
 }
 FUNC_3(VAR_15, VAR_10, VAR_16);


 FUNC_2();
}
