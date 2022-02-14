
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct bnx2x_phy {int addr; } ;
struct bnx2x {int dummy; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_6 (struct bnx2x*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_7 (struct bnx2x*,int ,scalar_t__,scalar_t__,int,struct bnx2x_phy*) ;
 int FUNC_8 (struct bnx2x*,int,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct bnx2x *VAR_18,
          u32 VAR_19[],
          u32 VAR_20[], u8 VAR_21,
          u32 VAR_22)
{
 s8 VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 struct bnx2x_phy VAR_27[VAR_17];
 struct bnx2x_phy *VAR_28[VAR_17];
 s8 VAR_29;
 VAR_25 = FUNC_2(VAR_18, VAR_13);
 VAR_26 = FUNC_2(VAR_18, VAR_14);

 VAR_24 = VAR_4;
 VAR_23 = 1;




 FUNC_6(VAR_18, VAR_19[0],
         (u8 *)&VAR_24, (u8 *)&VAR_23);


 VAR_23 ^= (VAR_25 && VAR_26);


 FUNC_8(VAR_18, VAR_24, VAR_6,
         VAR_23);
 FUNC_10(1000, 2000);
 FUNC_8(VAR_18, VAR_24, VAR_5,
         VAR_23);

 FUNC_10(5000, 10000);


 for (VAR_23 = VAR_17 - 1; VAR_23 >= VAR_15; VAR_23--) {
  u32 VAR_30, VAR_31;


  if (FUNC_0(VAR_18)) {
   VAR_30 = VAR_19[0];
   VAR_31 = VAR_20[0];
   VAR_29 = VAR_23;
  } else {
   VAR_30 = VAR_19[VAR_23];
   VAR_31 = VAR_20[VAR_23];
   VAR_29 = 0;
  }


  if (FUNC_7(VAR_18, VAR_21, VAR_30, VAR_31,
           VAR_29, &VAR_27[VAR_23]) !=
           0) {
   FUNC_1(VAR_7, "populate phy failed\n");
   return -VAR_0;
  }

  FUNC_4(VAR_18, VAR_12 +
          VAR_29*4,
          (VAR_11 |
    VAR_10 |
    VAR_9 |
    VAR_8));



  FUNC_5(VAR_18, &VAR_27[VAR_23],
     VAR_1, VAR_2, 1<<15);
 }


 FUNC_9(150);
 if (VAR_27[VAR_15].addr & 0x1) {
  VAR_28[VAR_15] = &(VAR_27[VAR_16]);
  VAR_28[VAR_16] = &(VAR_27[VAR_15]);
 } else {
  VAR_28[VAR_15] = &(VAR_27[VAR_15]);
  VAR_28[VAR_16] = &(VAR_27[VAR_16]);
 }

 for (VAR_23 = VAR_17 - 1; VAR_23 >= VAR_15; VAR_23--) {
  if (FUNC_0(VAR_18))
   VAR_29 = VAR_23;
  else
   VAR_29 = 0;
  FUNC_1(VAR_7, "Loading spirom for phy address 0x%x\n",
      VAR_28[VAR_23]->addr);
  if (FUNC_3(VAR_18, VAR_28[VAR_23],
            VAR_29))
   return -VAR_0;

  FUNC_5(VAR_18, VAR_28[VAR_23],
     VAR_1,
     VAR_3, 1);

 }
 return 0;
}
