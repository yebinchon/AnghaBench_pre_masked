
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {scalar_t__ chip_id; int chip_rev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct sky2_hw*,int ) ;
 int FUNC_1 (struct sky2_hw*,int ,int ) ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sky2_hw *VAR_26)
{

 FUNC_5(VAR_26, VAR_1,
      VAR_11 | VAR_13 | VAR_12 | VAR_14);


 FUNC_4(VAR_26, VAR_3, VAR_18);

 if (VAR_26->chip_id == VAR_5 && VAR_26->chip_rev > 1)

  FUNC_5(VAR_26, VAR_4,
       VAR_24 | VAR_21 |
       VAR_19 | VAR_25 |
       VAR_22 | VAR_20);
 else
  FUNC_5(VAR_26, VAR_4, 0);

 if (VAR_26->flags & VAR_17) {
  u32 VAR_27;

  FUNC_1(VAR_26, VAR_8, 0);

  VAR_27 = FUNC_0(VAR_26, VAR_9);

  VAR_27 &= VAR_15;
  FUNC_1(VAR_26, VAR_9, VAR_27);

  VAR_27 = FUNC_0(VAR_26, VAR_10);

  VAR_27 &= VAR_16;
  FUNC_1(VAR_26, VAR_10, VAR_27);

  FUNC_1(VAR_26, VAR_7, 0);


  VAR_27 = FUNC_2(VAR_26, VAR_2);
  VAR_27 |= VAR_6;
  FUNC_4(VAR_26, VAR_2, VAR_27);

  FUNC_2(VAR_26, VAR_2);
 }


 FUNC_3(VAR_26, VAR_0, VAR_23);
}
