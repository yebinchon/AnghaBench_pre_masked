
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skge_hw {scalar_t__ phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
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
 int FUNC_1 (struct skge_hw*,int ,int ) ;
 int FUNC_2 (struct skge_hw*,int,int ,int const*) ;
 int FUNC_3 (struct skge_hw*,int,int ) ;
 int FUNC_4 (struct skge_hw*,int,int ,int) ;
 int FUNC_5 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct skge_hw *VAR_13, int VAR_14)
{
 const u8 VAR_15[8] = { 0 };
 u32 VAR_16;

 FUNC_1(VAR_13, FUNC_0(VAR_14, VAR_0), 0);


 FUNC_5(VAR_13, VAR_14, VAR_3, VAR_4);
 FUNC_4(VAR_13, VAR_14, VAR_6, VAR_7);
 FUNC_5(VAR_13, VAR_14, VAR_10, 0);
 FUNC_4(VAR_13, VAR_14, VAR_12, 0);
 FUNC_4(VAR_13, VAR_14, VAR_11, 0);


 if (VAR_13->phy_type == VAR_2)
  FUNC_4(VAR_13, VAR_14, VAR_1, 0xffff);

 FUNC_2(VAR_13, VAR_14, VAR_5, VAR_15);


 VAR_16 = FUNC_3(VAR_13, VAR_14, VAR_10);
 FUNC_5(VAR_13, VAR_14, VAR_10, VAR_16 | VAR_9);
 FUNC_5(VAR_13, VAR_14, VAR_10, VAR_16 | VAR_8);
}
