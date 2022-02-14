
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct emac_rxch {int queue_active; int active_queue_head; int mac_addr; } ;
struct emac_priv {int speed; scalar_t__ duplex; int rx_addr_type; int napi; struct emac_rxch** rxch; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (size_t) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_2 (size_t) ;
 int VAR_53 ;
 size_t VAR_54 ;
 int FUNC_3 () ;
 int FUNC_4 (struct emac_priv*) ;
 int FUNC_5 (struct emac_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct emac_priv*,size_t,int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ,size_t) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct emac_priv *VAR_55)
{
 u32 VAR_56, VAR_57, VAR_58, VAR_59;


 FUNC_9(VAR_51, 1);
 while (FUNC_6(VAR_51))
  FUNC_3();


 FUNC_4(VAR_55);


 VAR_59 =
  (((VAR_18) ? (VAR_24) : 0x0) |
  ((VAR_55->speed == 1000) ? VAR_21 : 0x0) |
  ((VAR_17) ? (VAR_23) : 0x0) |
  ((VAR_55->duplex == VAR_0) ? 0x1 : 0));
 FUNC_9(VAR_20, VAR_59);

 VAR_58 =
  (((VAR_12) ? (VAR_43) : 0x0) |
  ((VAR_15) ? (VAR_45) : 0x0) |
   ((VAR_11) ? (VAR_42) : 0x0) |
   ((VAR_5) ? (VAR_38) : 0x0) |
   ((VAR_16) ? (VAR_39) : 0x0) |
   ((VAR_4) ? (VAR_36) : 0x0) |
   ((VAR_14) ? (VAR_35) : 0x0) |
   ((VAR_13 & VAR_37) << VAR_44) |

   ((VAR_2) ? (VAR_34) : 0x0) |
   ((VAR_1 & VAR_37) << VAR_33) |

   ((VAR_10) ? (VAR_41) : 0x0) |
   ((VAR_9 & VAR_37) << VAR_40));

 FUNC_9(VAR_32, VAR_58);
 FUNC_9(VAR_31, (VAR_6 &
       VAR_49));
 FUNC_9(VAR_27, (VAR_3 &
      VAR_47));
 FUNC_9(VAR_29, 0);
 FUNC_9(VAR_46, VAR_50);
 VAR_55->rx_addr_type = (FUNC_6(VAR_19) >> 8) & 0xFF;

 VAR_57 = FUNC_6(VAR_52);
 VAR_57 |= VAR_54;
 FUNC_9(VAR_52, VAR_57);
 VAR_57 = FUNC_6(VAR_28);
 VAR_57 |= VAR_48;
 FUNC_9(VAR_28, VAR_57);
 FUNC_9(VAR_25, VAR_26);

 for (VAR_56 = 0; VAR_56 < VAR_8; VAR_56++) {
  FUNC_9(FUNC_2(VAR_56), 0);
  FUNC_9(VAR_53, FUNC_0(VAR_56));
 }
 for (VAR_56 = 0; VAR_56 < VAR_7; VAR_56++) {
  struct emac_rxch *VAR_60 = VAR_55->rxch[VAR_56];
  FUNC_7(VAR_55, VAR_56, VAR_60->mac_addr);
  FUNC_9(VAR_30, FUNC_0(VAR_56));
  VAR_60->queue_active = 1;
  FUNC_9(FUNC_1(VAR_56),
      FUNC_8(VAR_60->active_queue_head));
 }


 VAR_57 = FUNC_6(VAR_20);
 VAR_57 |= (VAR_22);
 FUNC_9(VAR_20, VAR_57);


 FUNC_10(&VAR_55->napi);
 FUNC_5(VAR_55);
 return 0;

}
