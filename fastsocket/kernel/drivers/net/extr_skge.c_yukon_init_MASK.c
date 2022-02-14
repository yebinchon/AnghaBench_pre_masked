
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {scalar_t__ autoneg; int advertising; size_t flow_control; scalar_t__ duplex; int speed; } ;
struct skge_hw {scalar_t__ copper; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 int VAR_31 ;
 int FUNC_1 (int ) ;
 int VAR_32 ;
 int FUNC_2 (int) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;


 int* VAR_36 ;
 int FUNC_3 (struct skge_hw*,int,int ) ;
 int FUNC_4 (struct skge_hw*,int,int ,int) ;
 struct skge_port* FUNC_5 (int ) ;
 int* VAR_37 ;

__attribute__((used)) static void FUNC_6(struct skge_hw *VAR_38, int VAR_39)
{
 struct skge_port *VAR_40 = FUNC_5(VAR_38->dev[VAR_39]);
 u16 VAR_41, VAR_42, VAR_43;

 if (VAR_40->autoneg == VAR_7) {
  u16 VAR_44 = FUNC_3(VAR_38, VAR_39, VAR_20);

  VAR_44 &= ~(VAR_32 | VAR_33 |
     VAR_31);
  VAR_44 |= FUNC_0(VAR_9);

  VAR_44 |= FUNC_1(0) | FUNC_2(1);

  FUNC_4(VAR_38, VAR_39, VAR_20, VAR_44);
 }

 VAR_41 = FUNC_3(VAR_38, VAR_39, VAR_19);
 if (VAR_40->autoneg == VAR_6)
  VAR_41 &= ~VAR_11;

 VAR_41 |= VAR_13;
 FUNC_4(VAR_38, VAR_39, VAR_19, VAR_41);

 VAR_41 = 0;
 VAR_42 = 0;
 VAR_43 = VAR_10;

 if (VAR_40->autoneg == VAR_7) {
  if (VAR_38->copper) {
   if (VAR_40->advertising & VAR_0)
    VAR_42 |= VAR_22;
   if (VAR_40->advertising & VAR_1)
    VAR_42 |= VAR_23;
   if (VAR_40->advertising & VAR_2)
    VAR_43 |= VAR_27;
   if (VAR_40->advertising & VAR_3)
    VAR_43 |= VAR_28;
   if (VAR_40->advertising & VAR_4)
    VAR_43 |= VAR_29;
   if (VAR_40->advertising & VAR_5)
    VAR_43 |= VAR_30;


   VAR_43 |= VAR_37[VAR_40->flow_control];
  } else {
   if (VAR_40->advertising & VAR_0)
    VAR_43 |= VAR_25;
   if (VAR_40->advertising & VAR_1)
    VAR_43 |= VAR_26;

   VAR_43 |= VAR_36[VAR_40->flow_control];
  }


  VAR_41 |= VAR_11 | VAR_14;
 } else {

  VAR_42 = VAR_24;

  if (VAR_40->duplex == VAR_8)
   VAR_41 |= VAR_12;

  switch (VAR_40->speed) {
  case 128:
   VAR_41 |= VAR_16;
   break;
  case 129:
   VAR_41 |= VAR_15;
   break;
  }

  VAR_41 |= VAR_13;
 }

 FUNC_4(VAR_38, VAR_39, VAR_17, VAR_42);

 FUNC_4(VAR_38, VAR_39, VAR_18, VAR_43);
 FUNC_4(VAR_38, VAR_39, VAR_19, VAR_41);


 if (VAR_40->autoneg == VAR_7)
  FUNC_4(VAR_38, VAR_39, VAR_21, VAR_34);
 else
  FUNC_4(VAR_38, VAR_39, VAR_21, VAR_35);
}
