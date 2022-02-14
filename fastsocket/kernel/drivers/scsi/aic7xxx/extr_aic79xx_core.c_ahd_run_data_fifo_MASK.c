
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct scb {int dummy; } ;
struct ahd_softc {int flags; int features; } ;
struct ahd_dma_seg {int len; int addr; } ;
struct ahd_dma64_seg {int addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (struct ahd_softc*,scalar_t__) ;
 int FUNC_1 (struct ahd_softc*,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*,scalar_t__) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 int FUNC_6 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_7 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_8 (struct ahd_softc*,int ,int) ;
 int FUNC_9 (struct ahd_softc*,scalar_t__,int ) ;
 void* FUNC_10 (struct ahd_softc*,struct scb*,int) ;

__attribute__((used)) static void
FUNC_11(struct ahd_softc *VAR_50, struct scb *VAR_51)
{
 u_int VAR_52;

 VAR_52 = FUNC_0(VAR_50, VAR_40);
 if ((VAR_52 & VAR_6) != 0) {
  uint32_t VAR_53;
  uint32_t VAR_54;




  VAR_54 = FUNC_3(VAR_50, VAR_36) & ~VAR_44;
  FUNC_6(VAR_50, VAR_36, VAR_54);




  VAR_53 = FUNC_3(VAR_50, VAR_31);
  if ((VAR_53 & VAR_1) != 0) {
   VAR_54 |= VAR_24;
   FUNC_6(VAR_50, VAR_47, 0);
  } else
   FUNC_6(VAR_50, VAR_47, VAR_26);
  FUNC_8(VAR_50, VAR_19, FUNC_5(VAR_50, VAR_32));
  FUNC_7(VAR_50, VAR_20, VAR_53 & VAR_4);
  FUNC_6(VAR_50, VAR_42, VAR_54);
  FUNC_6(VAR_50, VAR_11, VAR_28|VAR_37|VAR_21);




  FUNC_6(VAR_50, VAR_34+3, VAR_53 >> 24);
  FUNC_7(VAR_50, VAR_35, VAR_54 & VAR_46);




  FUNC_6(VAR_50, VAR_33,
    FUNC_1(VAR_50, VAR_33) + 1);




  FUNC_9(VAR_50, VAR_27, 0);





  FUNC_6(VAR_50, VAR_10, VAR_7);
 } else if ((VAR_52 & VAR_30) != 0) {
  uint32_t VAR_55;
  uint32_t VAR_56;

  if ((FUNC_0(VAR_50, VAR_27+1)&VAR_23) != 0) {





   goto clrchn;
  }





  if ((FUNC_0(VAR_50, VAR_47) & VAR_16) != 0)
   FUNC_6(VAR_50, VAR_5, 0);
  FUNC_6(VAR_50, VAR_47, 0);





  FUNC_6(VAR_50, VAR_11, FUNC_0(VAR_50, VAR_11) | VAR_18);




  VAR_55 = FUNC_3(VAR_50, VAR_35);
  VAR_56 = FUNC_2(VAR_50, VAR_49);
  VAR_56 |= FUNC_1(VAR_50, VAR_34+3) << 24;
  FUNC_7(VAR_50, VAR_34, VAR_56);
  if ((FUNC_0(VAR_50, VAR_43) & VAR_24) == 0) {







   if ((FUNC_0(VAR_50, VAR_43) & 0x80) != 0
    && (VAR_55 & 0x80) == 0)
    VAR_55 -= 0x100;
   VAR_55 &= ~0xFF;
   VAR_55 |= FUNC_0(VAR_50, VAR_43)
          & VAR_41;
   FUNC_7(VAR_50, VAR_35, VAR_55);
   FUNC_6(VAR_50, VAR_34 + 3, 0);
  } else if ((VAR_56 & VAR_4) == 0) {
   FUNC_6(VAR_50, VAR_35,
     VAR_55 | VAR_45);
  }



  FUNC_8(VAR_50, VAR_32, FUNC_4(VAR_50, VAR_48));
  FUNC_7(VAR_50, VAR_31, VAR_56);
  FUNC_7(VAR_50, VAR_36, VAR_55);
  FUNC_6(VAR_50, VAR_10, VAR_9);
  FUNC_6(VAR_50, VAR_39,
    FUNC_0(VAR_50, VAR_39) | VAR_15);




  if ((FUNC_0(VAR_50, VAR_11) & VAR_14) != 0)
   goto clrchn;
 } else if ((FUNC_0(VAR_50, VAR_47) & VAR_26) != 0) {
  uint32_t VAR_57;
  uint64_t VAR_58;
  uint32_t VAR_59;
  u_int VAR_60;






  if ((FUNC_0(VAR_50, VAR_47) & VAR_16) != 0) {
   FUNC_6(VAR_50, VAR_5, 0);
   FUNC_6(VAR_50, VAR_47, VAR_26);
  }







  if ((FUNC_0(VAR_50, VAR_13) & VAR_29) != 0
   && (FUNC_0(VAR_50, VAR_11) & VAR_22) != 0) {





   VAR_57 = FUNC_3(VAR_50, VAR_35);
   VAR_57 &= VAR_46;
   if ((VAR_50->flags & VAR_0) != 0) {
    struct ahd_dma64_seg *VAR_61;

    VAR_61 = FUNC_10(VAR_50, VAR_51, VAR_57);
    VAR_58 = VAR_61->addr;
    VAR_59 = VAR_61->len;
    VAR_57 += sizeof(*VAR_61);
   } else {
    struct ahd_dma_seg *VAR_62;

    VAR_62 = FUNC_10(VAR_50, VAR_51, VAR_57);
    VAR_58 = VAR_62->len & VAR_3;
    VAR_58 <<= 8;
    VAR_58 |= VAR_62->addr;
    VAR_59 = VAR_62->len;
    VAR_57 += sizeof(*VAR_62);
   }




   FUNC_6(VAR_50, VAR_34+3, VAR_59 >> 24);
   FUNC_7(VAR_50, VAR_35, VAR_57);




   if (VAR_59 & VAR_1) {
    VAR_57 |= VAR_24;
    FUNC_6(VAR_50, VAR_47, 0);
   }
   FUNC_8(VAR_50, VAR_19, VAR_58);
   FUNC_7(VAR_50, VAR_20, VAR_59 & VAR_4);
   FUNC_6(VAR_50, VAR_42, VAR_57 & 0xFF);




   VAR_60 = FUNC_0(VAR_50, VAR_11)|VAR_28|VAR_21;
   if ((VAR_50->features & VAR_2) != 0) {





    VAR_60 |= VAR_38;
   }
   FUNC_6(VAR_50, VAR_11, VAR_60);
  }
 } else if ((FUNC_0(VAR_50, VAR_43) & VAR_25) != 0) {





  FUNC_6(VAR_50, VAR_36,
    FUNC_1(VAR_50, VAR_36) | VAR_45);
  goto clrchn;
 } else if ((FUNC_0(VAR_50, VAR_13) & VAR_17) != 0) {
clrchn:





  FUNC_6(VAR_50, VAR_27 + 1, VAR_23);
  FUNC_6(VAR_50, VAR_33,
    FUNC_1(VAR_50, VAR_33) - 1);
  FUNC_6(VAR_50, VAR_12, VAR_8);
 }
}
