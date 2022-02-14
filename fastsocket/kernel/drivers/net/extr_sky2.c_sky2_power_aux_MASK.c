
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {scalar_t__ chip_id; int chip_rev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sky2_hw*,int ) ;
 int FUNC_2 (struct sky2_hw*,int ,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sky2_hw *VAR_17)
{
 if (VAR_17->chip_id == VAR_3 && VAR_17->chip_rev > 1)
  FUNC_3(VAR_17, VAR_2, 0);
 else

  FUNC_3(VAR_17, VAR_2,
       VAR_14 | VAR_11 |
       VAR_9 | VAR_15 |
       VAR_12 | VAR_10);


 if ( (FUNC_1(VAR_17, VAR_0) & VAR_16) &&
      FUNC_0(VAR_17->pdev, VAR_4))
  FUNC_3(VAR_17, VAR_1,
       (VAR_5 | VAR_7 |
        VAR_6 | VAR_8));


 FUNC_2(VAR_17, VAR_0, VAR_13);
}
