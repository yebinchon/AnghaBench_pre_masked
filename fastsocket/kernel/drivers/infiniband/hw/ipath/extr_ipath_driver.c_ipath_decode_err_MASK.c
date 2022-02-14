
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int dummy; } ;
typedef int ipath_err_t ;


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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct ipath_devdata*,int,char*,size_t) ;
 int VAR_36 ;
 int FUNC_1 (char*,char*,size_t) ;

int FUNC_2(struct ipath_devdata *VAR_37, char *VAR_38, size_t VAR_39,
 ipath_err_t VAR_40)
{
 int VAR_41 = 1;
 *VAR_38 = '\0';
 if (VAR_40 & VAR_4) {
  if (!(VAR_40 & ~VAR_4))
   VAR_41 = 0;
  if (VAR_36 & VAR_35) {
   if (VAR_40 & VAR_7)
    FUNC_1(VAR_38, "EBP ", VAR_39);
   if (VAR_40 & VAR_23)
    FUNC_1(VAR_38, "VCRC ", VAR_39);
   if (VAR_40 & VAR_14) {
    FUNC_1(VAR_38, "CRC ", VAR_39);

    VAR_40 &= VAR_14;
   }
   if (VAR_40 & VAR_20)
    FUNC_1(VAR_38, "rshortpktlen ", VAR_39);
   if (VAR_40 & VAR_25)
    FUNC_1(VAR_38, "sdroppeddatapkt ", VAR_39);
   if (VAR_40 & VAR_31)
    FUNC_1(VAR_38, "spktlen ", VAR_39);
  }
  if ((VAR_40 & VAR_14) &&
   !(VAR_40&(VAR_23|VAR_7)))
   FUNC_1(VAR_38, "CRC ", VAR_39);
  if (!VAR_41)
   goto done;
 }
 if (VAR_40 & VAR_11)
  FUNC_1(VAR_38, "rhdrlen ", VAR_39);
 if (VAR_40 & VAR_5)
  FUNC_1(VAR_38, "rbadtid ", VAR_39);
 if (VAR_40 & VAR_6)
  FUNC_1(VAR_38, "rbadversion ", VAR_39);
 if (VAR_40 & VAR_10)
  FUNC_1(VAR_38, "rhdr ", VAR_39);
 if (VAR_40 & VAR_27)
  FUNC_1(VAR_38, "sendspecialtrigger ", VAR_39);
 if (VAR_40 & VAR_15)
  FUNC_1(VAR_38, "rlongpktlen ", VAR_39);
 if (VAR_40 & VAR_16)
  FUNC_1(VAR_38, "rmaxpktlen ", VAR_39);
 if (VAR_40 & VAR_17)
  FUNC_1(VAR_38, "rminpktlen ", VAR_39);
 if (VAR_40 & VAR_29)
  FUNC_1(VAR_38, "sminpktlen ", VAR_39);
 if (VAR_40 & VAR_9)
  FUNC_1(VAR_38, "rformaterr ", VAR_39);
 if (VAR_40 & VAR_22)
  FUNC_1(VAR_38, "runsupvl ", VAR_39);
 if (VAR_40 & VAR_21)
  FUNC_1(VAR_38, "runexpchar ", VAR_39);
 if (VAR_40 & VAR_12)
  FUNC_1(VAR_38, "ribflow ", VAR_39);
 if (VAR_40 & VAR_32)
  FUNC_1(VAR_38, "sunderrun ", VAR_39);
 if (VAR_40 & VAR_30)
  FUNC_1(VAR_38, "spioarmlaunch ", VAR_39);
 if (VAR_40 & VAR_33)
  FUNC_1(VAR_38, "sunexperrpktnum ", VAR_39);
 if (VAR_40 & VAR_26)
  FUNC_1(VAR_38, "sdroppedsmppkt ", VAR_39);
 if (VAR_40 & VAR_28)
  FUNC_1(VAR_38, "smaxpktlen ", VAR_39);
 if (VAR_40 & VAR_34)
  FUNC_1(VAR_38, "sunsupVL ", VAR_39);
 if (VAR_40 & VAR_2)
  FUNC_1(VAR_38, "invalidaddr ", VAR_39);
 if (VAR_40 & VAR_18)
  FUNC_1(VAR_38, "rcvegrfull ", VAR_39);
 if (VAR_40 & VAR_19)
  FUNC_1(VAR_38, "rcvhdrfull ", VAR_39);
 if (VAR_40 & VAR_1)
  FUNC_1(VAR_38, "ibcstatuschg ", VAR_39);
 if (VAR_40 & VAR_13)
  FUNC_1(VAR_38, "riblostlink ", VAR_39);
 if (VAR_40 & VAR_0)
  FUNC_1(VAR_38, "hardware ", VAR_39);
 if (VAR_40 & VAR_8)
  FUNC_1(VAR_38, "reset ", VAR_39);
 if (VAR_40 & VAR_24)
  FUNC_0(VAR_37, VAR_40, VAR_38, VAR_39);
 if (VAR_40 & VAR_3)
  FUNC_1(VAR_38, "invalideepromcmd ", VAR_39);
done:
 return VAR_41;
}
