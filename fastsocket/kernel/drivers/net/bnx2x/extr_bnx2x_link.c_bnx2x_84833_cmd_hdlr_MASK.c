
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x_phy *VAR_12,
    struct link_params *VAR_13, u16 VAR_14,
    u16 VAR_15[], int VAR_16)
{
 int VAR_17;
 u16 VAR_18;
 struct bnx2x *VAR_19 = VAR_13->bp;

 FUNC_2(VAR_19, VAR_12, VAR_4,
   VAR_3,
   VAR_11);
 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  FUNC_1(VAR_19, VAR_12, VAR_4,
    VAR_3, &VAR_18);
  if (VAR_18 == VAR_10)
   break;
  FUNC_3(1000, 2000);
 }
 if (VAR_17 >= VAR_6) {
  FUNC_0(VAR_5, "FW cmd: FW not ready.\n");
  return -VAR_0;
 }


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  FUNC_2(VAR_19, VAR_12, VAR_4,
    VAR_2 + VAR_17,
    VAR_15[VAR_17]);
 }
 FUNC_2(VAR_19, VAR_12, VAR_4,
   VAR_1, VAR_14);
 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  FUNC_1(VAR_19, VAR_12, VAR_4,
    VAR_3, &VAR_18);
  if ((VAR_18 == VAR_9) ||
   (VAR_18 == VAR_8))
   break;
  FUNC_3(1000, 2000);
 }
 if ((VAR_17 >= VAR_6) ||
  (VAR_18 == VAR_8)) {
  FUNC_0(VAR_5, "FW cmd failed.\n");
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  FUNC_1(VAR_19, VAR_12, VAR_4,
    VAR_2 + VAR_17,
    &VAR_15[VAR_17]);
 }
 FUNC_2(VAR_19, VAR_12, VAR_4,
   VAR_3,
   VAR_7);
 return 0;
}
