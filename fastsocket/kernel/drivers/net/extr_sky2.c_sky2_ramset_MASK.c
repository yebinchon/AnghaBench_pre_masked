
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sky2_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
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
 int FUNC_1 (struct sky2_hw*,int ) ;
 int FUNC_2 (struct sky2_hw*,int ,int) ;
 int FUNC_3 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sky2_hw *VAR_14, u16 VAR_15, u32 VAR_16, u32 VAR_17)
{
 u32 VAR_18;


 VAR_16 *= 1024/8;
 VAR_17 *= 1024/8;
 VAR_18 = VAR_16 + VAR_17 - 1;

 FUNC_3(VAR_14, FUNC_0(VAR_15, VAR_2), VAR_7);
 FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_12), VAR_16);
 FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_5), VAR_18);
 FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_13), VAR_16);
 FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_6), VAR_16);

 if (VAR_15 == VAR_0 || VAR_15 == VAR_1) {
  u32 VAR_19 = VAR_17 - VAR_17/4;





  FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_10), VAR_19);
  FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_8), VAR_17/2);

  VAR_19 = VAR_17 - 2048/8;
  FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_11), VAR_19);
  FUNC_2(VAR_14, FUNC_0(VAR_15, VAR_9), VAR_17/4);
 } else {



  FUNC_3(VAR_14, FUNC_0(VAR_15, VAR_2), VAR_4);
 }

 FUNC_3(VAR_14, FUNC_0(VAR_15, VAR_2), VAR_3);
 FUNC_1(VAR_14, FUNC_0(VAR_15, VAR_2));
}
