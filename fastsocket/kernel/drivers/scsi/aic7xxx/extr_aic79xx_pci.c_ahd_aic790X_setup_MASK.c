
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ahd_softc {int bugs; int flags; int features; scalar_t__ channel; int dev_softc; } ;
typedef int ahd_dev_softc_t ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int VAR_32 ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (struct ahd_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__,int) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct ahd_softc *VAR_42)
{
 ahd_dev_softc_t VAR_43;
 u_int VAR_44;

 VAR_43 = VAR_42->dev_softc;
 VAR_44 = FUNC_5(VAR_43, VAR_40, 1);
 if (VAR_44 < VAR_37) {
  FUNC_7("%s: Unable to attach to unsupported chip revision %d\n",
         FUNC_4(VAR_42), VAR_44);
  FUNC_6(VAR_43, VAR_39, 0, 2);
  return (VAR_36);
 }
 VAR_42->channel = FUNC_3(VAR_43) + 'A';
 if (VAR_44 < VAR_38) {



  VAR_42->bugs |= VAR_31|VAR_0
     | VAR_25|VAR_11
     | VAR_18|VAR_30
     | VAR_13|VAR_3
     | VAR_5|VAR_22
     | VAR_21|VAR_23
     | VAR_24|VAR_26
     | VAR_14|VAR_28
     | VAR_32|VAR_4
     | VAR_19|VAR_20
     | VAR_7;




  FUNC_1(VAR_42, VAR_27);

  if ((VAR_42->flags & VAR_9) == 0)
   FUNC_2(VAR_42, VAR_33);
 } else {

  extern uint32_t VAR_45;
  u_int VAR_46;

  VAR_42->features |= VAR_29|VAR_17
         | VAR_16|VAR_8
         | VAR_4;
  VAR_42->bugs |= VAR_12|VAR_6;


  if (VAR_45)
   VAR_42->features |= VAR_1;




  if ((VAR_42->features & VAR_15) != 0)
   VAR_42->bugs |= VAR_10|VAR_0;




  FUNC_1(VAR_42, VAR_27);
  FUNC_2(VAR_42, VAR_34);
  FUNC_0(VAR_42, VAR_2);







  VAR_46 = FUNC_5(VAR_43, VAR_35, 1);
  FUNC_6(VAR_43, VAR_35,
         VAR_46|VAR_41, 1);
  VAR_46 = FUNC_5(VAR_43, VAR_35, 1);
 }

 return (0);
}
