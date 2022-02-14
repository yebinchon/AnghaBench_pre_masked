
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {int pport; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_32, char *VAR_33, size_t VAR_34,
          u64 VAR_35)
{
 int VAR_36 = 1;

 *VAR_33 = '\0';
 if (VAR_35 & VAR_4) {
  if (!(VAR_35 & ~VAR_4))
   VAR_36 = 0;
  if ((VAR_35 & FUNC_0(VAR_16)) &&
      !(VAR_35 & (FUNC_0(VAR_22) | FUNC_0(VAR_8))))
   FUNC_2(VAR_33, "CRC ", VAR_34);
  if (!VAR_36)
   goto done;
 }
 if (VAR_35 & FUNC_0(VAR_13))
  FUNC_2(VAR_33, "rhdrlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_6))
  FUNC_2(VAR_33, "rbadtid ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_7))
  FUNC_2(VAR_33, "rbadversion ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_11))
  FUNC_2(VAR_33, "rhdr ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_28))
  FUNC_2(VAR_33, "sendspecialtrigger ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_17))
  FUNC_2(VAR_33, "rlongpktlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_18))
  FUNC_2(VAR_33, "rmaxpktlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_19))
  FUNC_2(VAR_33, "rminpktlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_26))
  FUNC_2(VAR_33, "sminpktlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_10))
  FUNC_2(VAR_33, "rformaterr ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_21))
  FUNC_2(VAR_33, "runsupvl ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_20))
  FUNC_2(VAR_33, "runexpchar ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_14))
  FUNC_2(VAR_33, "ribflow ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_29))
  FUNC_2(VAR_33, "sunderrun ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_27))
  FUNC_2(VAR_33, "spioarmlaunch ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_30))
  FUNC_2(VAR_33, "sunexperrpktnum ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_24))
  FUNC_2(VAR_33, "sdroppedsmppkt ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_25))
  FUNC_2(VAR_33, "smaxpktlen ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_31))
  FUNC_2(VAR_33, "sunsupVL ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_2))
  FUNC_2(VAR_33, "invalidaddr ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_9))
  FUNC_2(VAR_33, "rcvegrfull ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_12))
  FUNC_2(VAR_33, "rcvhdrfull ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_1))
  FUNC_2(VAR_33, "ibcstatuschg ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_15))
  FUNC_2(VAR_33, "riblostlink ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_0))
  FUNC_2(VAR_33, "hardware ", VAR_34);
 if (VAR_35 & FUNC_0(VAR_23))
  FUNC_2(VAR_33, "reset ", VAR_34);
 if (VAR_35 & VAR_5)
  FUNC_1(VAR_32->pport, VAR_35, VAR_33, VAR_34);
 if (VAR_35 & FUNC_0(VAR_3))
  FUNC_2(VAR_33, "invalideepromcmd ", VAR_34);
done:
 return VAR_36;
}
