
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {int flow_ctrl; } ;
struct link_params {int feature_config_flags; int* mac_addr; scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2x*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct link_params *VAR_17,
      struct link_vars *VAR_18,
      u8 VAR_19)
{
 struct bnx2x *VAR_20 = VAR_17->bp;
 u32 VAR_21;
 u32 VAR_22, VAR_23, VAR_24;


 VAR_21 = (VAR_17->port) ? VAR_4 : VAR_3;


 VAR_22 = 0x18000;
 VAR_23 = 0xFFFF8000;
 VAR_24 = 0x2;


 if (!(VAR_17->feature_config_flags &
       VAR_2)) {



  if (VAR_18->flow_ctrl & VAR_0)
   VAR_22 |= VAR_5;


  if (VAR_18->flow_ctrl & VAR_1)
   VAR_22 |= VAR_6;
 } else {
  VAR_24 |= VAR_8 |
   VAR_9 |
   VAR_10 |
   VAR_11 |
   VAR_7;

  FUNC_0(VAR_20, VAR_21 + VAR_14, VAR_22);
  FUNC_0(VAR_20, VAR_21 + VAR_15, VAR_23);
  FUNC_0(VAR_20, VAR_21 + VAR_16, VAR_24);
  VAR_24 &= ~VAR_7;

 }


 FUNC_0(VAR_20, VAR_21 + VAR_14, VAR_22);
 FUNC_0(VAR_20, VAR_21 + VAR_15, VAR_23);
 FUNC_0(VAR_20, VAR_21 + VAR_16, VAR_24);



 FUNC_0(VAR_20, VAR_21 + VAR_13,
        ((VAR_17->mac_addr[2] << 24) |
  (VAR_17->mac_addr[3] << 16) |
  (VAR_17->mac_addr[4] << 8) |
  (VAR_17->mac_addr[5])));
 FUNC_0(VAR_20, VAR_21 + VAR_12,
        ((VAR_17->mac_addr[0] << 8) |
  (VAR_17->mac_addr[1])));

 FUNC_1(30);
}
