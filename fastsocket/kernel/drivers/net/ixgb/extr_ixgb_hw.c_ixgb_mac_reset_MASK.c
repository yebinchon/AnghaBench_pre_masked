
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {scalar_t__ subsystem_vendor_id; scalar_t__ phy_type; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int FUNC_2 (struct ixgb_hw*,int ,int) ;
 int FUNC_3 (struct ixgb_hw*,int ,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (struct ixgb_hw*) ;
 int FUNC_5 (struct ixgb_hw*) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static u32 FUNC_7(struct ixgb_hw *VAR_18)
{
 u32 VAR_19;

 VAR_19 = VAR_2 |
    VAR_9 |
    VAR_7 |
    VAR_5 |
    VAR_4 |
    VAR_8 |
    VAR_6 |
    VAR_3;





 FUNC_2(VAR_18, VAR_0, VAR_19);



 FUNC_6(VAR_15);
 VAR_19 = FUNC_1(VAR_18, VAR_0);





 if (VAR_18->subsystem_vendor_id == VAR_16) {
  VAR_19 =
      VAR_10 |
      VAR_12 |
      VAR_14 |
      VAR_11 |
      VAR_13;
  FUNC_2(VAR_18, VAR_1, VAR_19);
  FUNC_5(VAR_18);
 }

 if (VAR_18->phy_type == VAR_17)
  FUNC_4(VAR_18);

 return VAR_19;
}
