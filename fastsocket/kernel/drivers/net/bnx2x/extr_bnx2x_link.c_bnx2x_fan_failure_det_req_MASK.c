
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2x_phy {scalar_t__ flags; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__,int ,int ,scalar_t__,struct bnx2x_phy*) ;

u8 FUNC_2(struct bnx2x *VAR_4,
        u32 VAR_5,
        u32 VAR_6,
        u8 VAR_7)
{
 u8 VAR_8, VAR_9 = 0;
 struct bnx2x_phy VAR_10;
 for (VAR_8 = VAR_0; VAR_8 < VAR_2;
       VAR_8++) {
  if (FUNC_1(VAR_4, VAR_8, VAR_5, VAR_6,
           VAR_7, &VAR_10)
      != 0) {
   FUNC_0(VAR_3, "populate phy failed\n");
   return 0;
  }
  VAR_9 |= (VAR_10.flags &
     VAR_1);
 }
 return VAR_9;
}
