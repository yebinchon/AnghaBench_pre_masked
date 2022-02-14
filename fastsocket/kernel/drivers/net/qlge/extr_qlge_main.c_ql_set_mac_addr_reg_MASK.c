
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int func; int ndev; int vlgrp; } ;


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
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_11, u8 *VAR_12, u32 VAR_13,
          u16 VAR_14)
{
 u32 VAR_15 = 0;
 int VAR_16 = 0;

 switch (VAR_13) {
 case 129:
  {
   u32 VAR_17 = (VAR_12[0] << 8) | VAR_12[1];
   u32 VAR_18 = (VAR_12[2] << 24) | (VAR_12[3] << 16) |
     (VAR_12[4] << 8) | (VAR_12[5]);

   VAR_16 =
    FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, (VAR_15++) |
    (VAR_14 << VAR_8) |
    VAR_13 | VAR_6);
   FUNC_2(VAR_11, VAR_5, VAR_18);
   VAR_16 =
    FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, (VAR_15++) |
    (VAR_14 << VAR_8) |
    VAR_13 | VAR_6);

   FUNC_2(VAR_11, VAR_5, VAR_17);
   VAR_16 =
    FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   break;
  }
 case 131:
  {
   u32 VAR_19;
   u32 VAR_20 = (VAR_12[0] << 8) | VAR_12[1];
   u32 VAR_21 =
       (VAR_12[2] << 24) | (VAR_12[3] << 16) | (VAR_12[4] << 8) |
       (VAR_12[5]);
   VAR_16 =
       FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, (VAR_15++) |
       (VAR_14 << VAR_8) |
       VAR_13);
   FUNC_2(VAR_11, VAR_5, VAR_21);
   VAR_16 =
       FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, (VAR_15++) |
       (VAR_14 << VAR_8) |
       VAR_13);
   FUNC_2(VAR_11, VAR_5, VAR_20);
   VAR_16 =
       FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, (VAR_15) |
       (VAR_14 << VAR_8) |
       VAR_13);




   VAR_19 = (VAR_2 |
          (VAR_11->
           func << VAR_1) |
     (0 << VAR_0));
   if (VAR_11->vlgrp)
    VAR_19 |= VAR_3;

   FUNC_2(VAR_11, VAR_5, VAR_19);
   break;
  }
 case 128:
  {
   u32 VAR_22 = *((u32 *) &VAR_12[0]);





   VAR_16 =
       FUNC_1(VAR_11,
    VAR_7, VAR_9, 0);
   if (VAR_16)
    goto exit;
   FUNC_2(VAR_11, VAR_7, VAR_15 |
       (VAR_14 << VAR_8) |
       VAR_13 |
       VAR_22);
   break;
  }
 case 130:
 default:
  FUNC_0(VAR_11, VAR_10, VAR_11->ndev,
      "Address type %d not yet supported.\n", VAR_13);
  VAR_16 = -VAR_4;
 }
exit:
 return VAR_16;
}
