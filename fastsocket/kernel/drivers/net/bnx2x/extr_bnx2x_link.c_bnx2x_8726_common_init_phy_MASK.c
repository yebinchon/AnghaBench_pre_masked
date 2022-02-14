
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef size_t s8 ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_6 (struct bnx2x*,int ,int,int,size_t,struct bnx2x_phy*) ;
 int FUNC_7 (struct bnx2x*,int ,int ,size_t) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_10,
          u32 VAR_11[],
          u32 VAR_12[], u8 VAR_13,
          u32 VAR_14)
{
 u32 VAR_15;
 s8 VAR_16;
 struct bnx2x_phy VAR_17;


 VAR_15 = FUNC_2(VAR_10, VAR_7);
 VAR_15 |= ((1<<VAR_4)|
  (1<<(VAR_4 + VAR_6)));
 FUNC_3(VAR_10, VAR_7, VAR_15);

 FUNC_5(VAR_10, 0);
 FUNC_8(5000, 10000);
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  u32 VAR_18, VAR_19;


  if (FUNC_0(VAR_10)) {
   VAR_18 = VAR_11[0];
   VAR_19 = VAR_12[0];
  } else {
   VAR_18 = VAR_11[VAR_16];
   VAR_19 = VAR_12[VAR_16];
  }

  if (FUNC_6(VAR_10, VAR_13, VAR_18, VAR_19,
           VAR_16, &VAR_17) !=
      0) {
   FUNC_1(VAR_8, "populate phy failed\n");
   return -VAR_0;
  }


  FUNC_4(VAR_10, &VAR_17,
     VAR_1, VAR_2, 0x0001);



  FUNC_7(VAR_10, VAR_3,
          VAR_5,
          VAR_16);
 }

 return 0;
}
