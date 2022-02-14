
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bnx2x*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_20, u32 VAR_21,
         int VAR_22, bool *VAR_23,
         bool VAR_24)
{
 int VAR_25 = 0;
 u32 VAR_26 = 0;
 for (VAR_25 = 0; VAR_21; VAR_25++) {
  VAR_26 = ((u32)0x1 << VAR_25);
  if (VAR_21 & VAR_26) {
   switch (VAR_26) {
   case 138:
    if (VAR_24) {
     FUNC_1(VAR_22++, "PBF");
     FUNC_2(VAR_20, VAR_8);
    }
    break;
   case 137:
    if (VAR_24) {
     FUNC_1(VAR_22++, "QM");
     FUNC_2(VAR_20, VAR_10);
    }
    break;
   case 136:
    if (VAR_24) {
     FUNC_1(VAR_22++, "TM");
     FUNC_2(VAR_20, VAR_11);
    }
    break;
   case 129:
    if (VAR_24) {
     FUNC_1(VAR_22++, "XSDM");
     FUNC_2(VAR_20,
            VAR_17);
    }
    break;
   case 130:
    if (VAR_24) {
     FUNC_1(VAR_22++, "XCM");
     FUNC_2(VAR_20, VAR_16);
    }
    break;
   case 128:
    if (VAR_24) {
     FUNC_1(VAR_22++, "XSEMI");
     FUNC_2(VAR_20,
            VAR_18);
     FUNC_2(VAR_20,
            VAR_19);
    }
    break;
   case 140:
    if (VAR_24) {
     FUNC_1(VAR_22++,
         "DOORBELLQ");
     FUNC_2(VAR_20,
            VAR_3);
    }
    break;
   case 139:
    if (VAR_24) {
     FUNC_1(VAR_22++, "NIG");
     if (FUNC_0(VAR_20)) {
      FUNC_2(VAR_20,
       VAR_5);
     } else {
      FUNC_2(VAR_20,
       VAR_6);
      FUNC_2(VAR_20,
       VAR_7);
     }
    }
    break;
   case 131:
    if (VAR_24)
     FUNC_1(VAR_22++,
         "VAUX PCI CORE");
    *VAR_23 = 1;
    break;
   case 141:
    if (VAR_24) {
     FUNC_1(VAR_22++, "DEBUG");
     FUNC_2(VAR_20, VAR_2);
    }
    break;
   case 133:
    if (VAR_24) {
     FUNC_1(VAR_22++, "USDM");
     FUNC_2(VAR_20,
            VAR_13);
    }
    break;
   case 135:
    if (VAR_24) {
     FUNC_1(VAR_22++, "UCM");
     FUNC_2(VAR_20, VAR_12);
    }
    break;
   case 132:
    if (VAR_24) {
     FUNC_1(VAR_22++, "USEMI");
     FUNC_2(VAR_20,
            VAR_14);
     FUNC_2(VAR_20,
            VAR_15);
    }
    break;
   case 134:
    if (VAR_24) {
     FUNC_1(VAR_22++, "UPB");
     FUNC_2(VAR_20, VAR_4 +
         VAR_9);
    }
    break;
   case 142:
    if (VAR_24) {
     FUNC_1(VAR_22++, "CSDM");
     FUNC_2(VAR_20,
            VAR_1);
    }
    break;
   case 143:
    if (VAR_24) {
     FUNC_1(VAR_22++, "CCM");
     FUNC_2(VAR_20, VAR_0);
    }
    break;
   }


   VAR_21 &= ~VAR_26;
  }
 }

 return VAR_22;
}
