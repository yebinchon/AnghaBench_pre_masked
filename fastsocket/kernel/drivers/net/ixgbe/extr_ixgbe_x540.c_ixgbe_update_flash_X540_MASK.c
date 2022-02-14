
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {scalar_t__ revision_id; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6 = VAR_3;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == VAR_3) {
  FUNC_2(VAR_4, "Flash update time out\n");
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_0) | VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == 0)
  FUNC_2(VAR_4, "Flash update complete\n");
 else
  FUNC_2(VAR_4, "Flash update time out\n");

 if (VAR_4->revision_id == 0) {
  VAR_5 = FUNC_0(VAR_4, VAR_0);

  if (VAR_5 & VAR_2) {
   VAR_5 |= VAR_1;
   FUNC_1(VAR_4, VAR_0, VAR_5);
  }

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 == 0)
   FUNC_2(VAR_4, "Flash update complete\n");
  else
   FUNC_2(VAR_4, "Flash update time out\n");
 }
out:
 return VAR_6;
}
