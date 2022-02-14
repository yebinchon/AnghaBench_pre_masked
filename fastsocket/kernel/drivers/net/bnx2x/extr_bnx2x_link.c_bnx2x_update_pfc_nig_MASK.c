
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct link_vars {int dummy; } ;
struct link_params {size_t port; int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x_nig_brb_pfc_port_params {int llfc_out_en; int llfc_enable; int pause_enable; int pkt_priority_to_cos; size_t num_of_rx_cos_priority_mask; int llfc_high_priority_classes; int llfc_low_priority_classes; int * rx_cos_priority_mask; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct link_params *VAR_28,
  struct link_vars *VAR_29,
  struct bnx2x_nig_brb_pfc_port_params *VAR_30)
{
 u32 VAR_31 = 0, VAR_32 = 0, VAR_33 = 0, VAR_34 = 0;
 u32 VAR_35 = 0, VAR_36 = 0, VAR_37 = 0;
 u32 VAR_38 = 0;
 struct bnx2x *VAR_39 = VAR_28->bp;
 u8 VAR_40 = VAR_28->port;

 int VAR_41 = VAR_28->feature_config_flags &
  VAR_0;
 FUNC_1(VAR_1, "updating pfc nig parameters\n");





 VAR_31 = FUNC_2(VAR_39, VAR_40 ? VAR_17 :
     VAR_16);



 if (VAR_41) {
  VAR_33 = 0;
  VAR_34 = 0;
  VAR_35 = 0;
  if (FUNC_0(VAR_39))
   VAR_32 = 0;
  else
   VAR_32 = 1;
  VAR_31 &= ~(VAR_40 ? VAR_3 :
         VAR_2);
  VAR_36 = 0;
  VAR_37 = 1;
 } else {
  if (VAR_30) {
   VAR_34 = VAR_30->llfc_out_en;
   VAR_35 = VAR_30->llfc_enable;
   VAR_33 = VAR_30->pause_enable;
  } else
   VAR_33 = 1;

  VAR_31 |= (VAR_40 ? VAR_3 :
   VAR_2);
  VAR_36 = 1;
 }

 if (FUNC_0(VAR_39))
  FUNC_3(VAR_39, VAR_40 ? VAR_5 :
         VAR_4, VAR_33);
 FUNC_3(VAR_39, VAR_40 ? VAR_15 :
        VAR_14, VAR_34);
 FUNC_3(VAR_39, VAR_40 ? VAR_9 :
        VAR_8, VAR_35);
 FUNC_3(VAR_39, VAR_40 ? VAR_23 :
        VAR_22, VAR_33);

 FUNC_3(VAR_39, VAR_40 ? VAR_25 :
        VAR_24, VAR_32);

 FUNC_3(VAR_39, VAR_40 ? VAR_17 :
        VAR_16, VAR_31);

 FUNC_3(VAR_39, VAR_40 ? VAR_7 :
        VAR_6, 0x7);


 FUNC_3(VAR_39, VAR_40 ? VAR_27 :
        VAR_26, VAR_36);


 FUNC_3(VAR_39, VAR_40 ? VAR_20 :
        VAR_18, VAR_37);

 if (VAR_30) {
  u8 VAR_42 = 0;
  VAR_38 = VAR_30->pkt_priority_to_cos;

  for (VAR_42 = 0; VAR_42 < VAR_30->num_of_rx_cos_priority_mask; VAR_42++)
   FUNC_4(VAR_39, VAR_42,
  VAR_30->rx_cos_priority_mask[VAR_42], VAR_40);

  FUNC_3(VAR_39, VAR_40 ? VAR_11 :
         VAR_10,
         VAR_30->llfc_high_priority_classes);

  FUNC_3(VAR_39, VAR_40 ? VAR_13 :
         VAR_12,
         VAR_30->llfc_low_priority_classes);
 }
 FUNC_3(VAR_39, VAR_40 ? VAR_21 :
        VAR_19,
        VAR_38);
}
