
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_7 (struct bnx2x*,int) ;
 scalar_t__ FUNC_8 (struct bnx2x*,int ,scalar_t__,scalar_t__,int,struct bnx2x_phy*) ;
 int FUNC_9 (struct bnx2x*,int ,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct bnx2x *VAR_19,
          u32 VAR_20[],
          u32 VAR_21[], u8 VAR_22,
          u32 VAR_23)
{
 struct bnx2x_phy VAR_24[VAR_18];
 struct bnx2x_phy *VAR_25[VAR_18];
 u16 VAR_26;
 s8 VAR_27 = 0;
 s8 VAR_28 = 0;
 u32 VAR_29, VAR_30;
 VAR_29 = FUNC_2(VAR_19, VAR_14);
 VAR_30 = FUNC_2(VAR_19, VAR_15);
 VAR_27 ^= (VAR_29 && VAR_30);
 FUNC_7(VAR_19, VAR_27);

 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {
  u32 VAR_31, VAR_32;

  if (FUNC_0(VAR_19)) {
   VAR_31 = VAR_20[0];
   VAR_32 = VAR_21[0];
   VAR_28 = VAR_27;
  } else {
   VAR_31 = VAR_20[VAR_27];
   VAR_32 = VAR_21[VAR_27];
   VAR_28 = 0;
  }


  if (FUNC_8(VAR_19, VAR_22, VAR_31, VAR_32,
           VAR_28, &VAR_24[VAR_27]) !=
      0) {
   FUNC_1(VAR_8, "populate_phy failed\n");
   return -VAR_0;
  }

  FUNC_4(VAR_19, VAR_13 +
          VAR_28*4,
          (VAR_12 |
    VAR_11 |
    VAR_10 |
    VAR_9));




  FUNC_9(VAR_19, VAR_5,
          VAR_6,
          VAR_27);


  FUNC_6(VAR_19, &VAR_24[VAR_27],
     VAR_1,
     VAR_2,
     1<<15);
 }


 FUNC_10(150);

 if (VAR_24[VAR_16].addr & 0x1) {
  VAR_25[VAR_16] = &(VAR_24[VAR_17]);
  VAR_25[VAR_17] = &(VAR_24[VAR_16]);
 } else {
  VAR_25[VAR_16] = &(VAR_24[VAR_16]);
  VAR_25[VAR_17] = &(VAR_24[VAR_17]);
 }


 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {
  if (FUNC_0(VAR_19))
   VAR_28 = VAR_27;
  else
   VAR_28 = 0;

  FUNC_1(VAR_8, "Loading spirom for phy address 0x%x\n",
      VAR_25[VAR_27]->addr);
  if (FUNC_3(VAR_19, VAR_25[VAR_27],
            VAR_28))
   return -VAR_0;


  FUNC_5(VAR_19, VAR_25[VAR_27],
    VAR_1,
    VAR_4, &VAR_26);


  FUNC_6(VAR_19, VAR_25[VAR_27],
     VAR_1,
     VAR_4,
     (VAR_26 | 1<<10));
 }




 FUNC_10(600);


 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {


  FUNC_5(VAR_19, VAR_25[VAR_27],
    VAR_1,
    VAR_4, &VAR_26);

  FUNC_6(VAR_19, VAR_25[VAR_27],
    VAR_1,
    VAR_4, (VAR_26 & (~(1<<10))));
  FUNC_11(15000, 30000);


  FUNC_5(VAR_19, VAR_25[VAR_27],
    VAR_1,
    VAR_3, &VAR_26);
  FUNC_6(VAR_19, VAR_25[VAR_27],
     VAR_1,
     VAR_3, (VAR_26 | (1<<12)));


  FUNC_9(VAR_19, VAR_5,
          VAR_7, VAR_27);
 }
 return 0;
}
