
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int* advertising; size_t* link_config; int* supported; } ;
struct TYPE_6__ {int num_phys; size_t* req_flow_ctrl; void** req_duplex; void** req_line_speed; int * speed_cap_mask; TYPE_1__* phy; } ;
struct bnx2x {TYPE_2__ port; TYPE_3__ link_params; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,void*,void*,size_t,int) ;
 int FUNC_1 (char*,size_t,...) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_32)
{
 u32 VAR_33, VAR_34, VAR_35 = 0;
 VAR_32->port.advertising[0] = 0;
 VAR_32->port.advertising[1] = 0;
 switch (VAR_32->link_params.num_phys) {
 case 1:
 case 2:
  VAR_35 = 1;
  break;
 case 3:
  VAR_35 = 2;
  break;
 }
 for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++) {
  VAR_32->link_params.req_duplex[VAR_34] = VAR_11;
  VAR_33 = VAR_32->port.link_config[VAR_34];
  switch (VAR_33 & VAR_15) {
  case 128:
   if (VAR_32->port.supported[VAR_34] & VAR_31) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_23;
    VAR_32->port.advertising[VAR_34] |=
     VAR_32->port.supported[VAR_34];
    if (VAR_32->link_params.phy[VAR_13].type ==
        VAR_16)
     VAR_32->port.advertising[VAR_34] |=
     (VAR_27 |
      VAR_26);
   } else {

    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_20;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_0 |
      VAR_7);
    continue;
   }
   break;

  case 133:
   if (VAR_32->port.supported[VAR_34] & VAR_28) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_17;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_4 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_33,
        VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 132:
   if (VAR_32->port.supported[VAR_34] & VAR_29) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_17;
    VAR_32->link_params.req_duplex[VAR_34] =
     VAR_12;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_5 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_33,
       VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 136:
   if (VAR_32->port.supported[VAR_34] &
       VAR_26) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_18;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_2 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_33,
       VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 135:
   if (VAR_32->port.supported[VAR_34] &
       VAR_27) {
    VAR_32->link_params.req_line_speed[VAR_34] =
        VAR_18;
    VAR_32->link_params.req_duplex[VAR_34] =
        VAR_12;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_3 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_33,
        VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 131:
   if (VAR_32->port.supported[VAR_34] &
       VAR_25) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_19;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_1 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_33,
        VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 129:
   if (VAR_32->port.supported[VAR_34] &
       VAR_30) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_22;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_6 |
      VAR_8);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_33,
        VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;

  case 134:
   if (VAR_32->port.supported[VAR_34] &
       VAR_24) {
    VAR_32->link_params.req_line_speed[VAR_34] =
     VAR_20;
    VAR_32->port.advertising[VAR_34] |=
     (VAR_0 |
      VAR_7);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_33,
        VAR_32->link_params.speed_cap_mask[VAR_34]);
    return;
   }
   break;
  case 130:
   VAR_32->link_params.req_line_speed[VAR_34] = VAR_21;

   break;
  default:
   FUNC_1("NVRAM config error. BAD link speed link_config 0x%x\n",
      VAR_33);
    VAR_32->link_params.req_line_speed[VAR_34] =
       VAR_23;
    VAR_32->port.advertising[VAR_34] =
      VAR_32->port.supported[VAR_34];
   break;
  }

  VAR_32->link_params.req_flow_ctrl[VAR_34] = (VAR_33 &
      VAR_14);
  if (VAR_32->link_params.req_flow_ctrl[VAR_34] ==
      VAR_9) {
   if (!(VAR_32->port.supported[VAR_34] & VAR_31))
    VAR_32->link_params.req_flow_ctrl[VAR_34] =
       VAR_10;
   else
    FUNC_2(VAR_32);
  }

  FUNC_0("req_line_speed %d  req_duplex %d req_flow_ctrl 0x%x advertising 0x%x\n",
          VAR_32->link_params.req_line_speed[VAR_34],
          VAR_32->link_params.req_duplex[VAR_34],
          VAR_32->link_params.req_flow_ctrl[VAR_34],
          VAR_32->port.advertising[VAR_34]);
 }
}
