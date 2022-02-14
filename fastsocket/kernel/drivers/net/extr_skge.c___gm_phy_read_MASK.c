
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_hw {int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct skge_hw*,int,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct skge_hw *VAR_6, int VAR_7, u16 VAR_8, u16 *VAR_9)
{
 int VAR_10;

 FUNC_3(VAR_6, VAR_7, VAR_1,
    FUNC_0(VAR_6->phy_addr)
    | FUNC_1(VAR_8) | VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_4(1);
  if (FUNC_2(VAR_6, VAR_7, VAR_1) & VAR_3)
   goto ready;
 }

 return -VAR_0;
 ready:
 *VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_4);
 return 0;
}
