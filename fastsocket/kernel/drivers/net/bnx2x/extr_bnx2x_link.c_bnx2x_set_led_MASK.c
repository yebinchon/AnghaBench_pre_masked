
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_vars {int link_up; } ;
struct link_params {size_t port; int hw_led_mode; int num_phys; TYPE_1__* phy; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int type; int (* set_link_led ) (TYPE_1__*,struct link_params*,size_t) ;} ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct bnx2x*,int ,int) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct bnx2x*,size_t,int) ;
 int VAR_23 ;
 int FUNC_8 (struct link_params*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_9 (TYPE_1__*,struct link_params*,size_t) ;

int FUNC_10(struct link_params *VAR_29,
    struct link_vars *VAR_30, u8 VAR_31, u32 VAR_32)
{
 u8 VAR_33 = VAR_29->port;
 u16 VAR_34 = VAR_29->hw_led_mode;
 int VAR_35 = 0;
 u8 VAR_36;
 u32 VAR_37;
 u32 VAR_38 = VAR_33 ? VAR_8 : VAR_7;
 struct bnx2x *VAR_39 = VAR_29->bp;
 FUNC_4(VAR_12, "bnx2x_set_led: port %x, mode %d\n", VAR_33, VAR_31);
 FUNC_4(VAR_12, "speed 0x%x, hw_led_mode 0x%x\n",
   VAR_32, VAR_34);

 for (VAR_36 = VAR_6; VAR_36 < VAR_11; VAR_36++) {
  if (VAR_29->phy[VAR_36].set_link_led) {
   VAR_29->phy[VAR_36].set_link_led(
    &VAR_29->phy[VAR_36], VAR_29, VAR_31);
  }
 }

 switch (VAR_31) {
 case 131:
 case 130:
  FUNC_7(VAR_39, VAR_13 + VAR_33*4, 0);
  FUNC_7(VAR_39, VAR_19 + VAR_33*4,
         VAR_23);

  VAR_37 = FUNC_5(VAR_39, VAR_5);
  if (VAR_29->phy[VAR_6].type ==
   VAR_20)
   VAR_37 &= ~(VAR_1 |
    VAR_2 |
    VAR_3);
  else
   VAR_37 |= VAR_4;

  FUNC_6(VAR_39, VAR_5, VAR_37);
  break;

 case 128:



  if (!VAR_30->link_up)
   break;
 case 129:
  if (((VAR_29->phy[VAR_6].type ==
     VAR_22) ||
    (VAR_29->phy[VAR_6].type ==
     VAR_21)) &&
      FUNC_2(VAR_39) && VAR_29->num_phys == 2) {

   if (VAR_31 == 129 ||
    VAR_32 == VAR_27){
    FUNC_7(VAR_39, VAR_19 + VAR_33*4, 0);
    FUNC_7(VAR_39, VAR_13 + VAR_33*4, 1);

    VAR_37 = FUNC_5(VAR_39, VAR_5);
    FUNC_6(VAR_39, VAR_5,
     (VAR_37 | VAR_4));





    if (VAR_31 == 129)
     return VAR_35;
   }
  } else if (FUNC_8(VAR_29)) {



   if ((!FUNC_3(VAR_39)) ||
       (FUNC_3(VAR_39) &&
        VAR_31 == 129))
    FUNC_7(VAR_39, VAR_13 + VAR_33*4, 1);

   if (FUNC_1(VAR_39) ||
       FUNC_2(VAR_39) ||
       (VAR_31 == 129))
    FUNC_7(VAR_39, VAR_19 + VAR_33*4, 0);
   else
    FUNC_7(VAR_39, VAR_19 + VAR_33*4,
           VAR_34);
  } else if ((VAR_29->phy[VAR_6].type ==
       VAR_20) &&
      (VAR_31 == 129)) {
   FUNC_7(VAR_39, VAR_19 + VAR_33*4, 0);
   VAR_37 = FUNC_5(VAR_39, VAR_5);
   FUNC_6(VAR_39, VAR_5, VAR_37 |
    VAR_4 | VAR_1);



   break;
  } else
   FUNC_7(VAR_39, VAR_19 + VAR_33*4,
          VAR_34);

  FUNC_7(VAR_39, VAR_17 + VAR_33*4, 0);

  if (FUNC_3(VAR_39))
   FUNC_7(VAR_39, VAR_15 + VAR_33*4,
          VAR_10);
  else
   FUNC_7(VAR_39, VAR_15 + VAR_33*4,
          VAR_9);
  FUNC_7(VAR_39, VAR_14 +
         VAR_33*4, 1);
  VAR_37 = FUNC_5(VAR_39, VAR_5);
  FUNC_6(VAR_39, VAR_5,
   (VAR_37 & (~VAR_4)));

  if (FUNC_0(VAR_39) &&
      ((VAR_32 == VAR_28) ||
       (VAR_32 == VAR_26) ||
       (VAR_32 == VAR_25) ||
       (VAR_32 == VAR_24))) {

   FUNC_7(VAR_39, VAR_17
          + VAR_33*4, 1);
   FUNC_7(VAR_39, VAR_18 +
          VAR_33*4, 0);
   FUNC_7(VAR_39, VAR_16 +
          VAR_33*4, 1);
  }
  break;

 default:
  VAR_35 = -VAR_0;
  FUNC_4(VAR_12, "bnx2x_set_led: Invalid led mode %d\n",
    VAR_31);
  break;
 }
 return VAR_35;

}
