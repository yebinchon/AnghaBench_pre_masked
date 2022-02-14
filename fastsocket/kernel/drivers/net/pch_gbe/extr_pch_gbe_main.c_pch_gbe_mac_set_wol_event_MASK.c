
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct TYPE_2__ {int WOL_ST; int WOL_CTRL; int INT_EN; int TCPIP_ACC; int WOL_ADDR_MASK; int ADDR_MASK; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pch_gbe_hw *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_3("wu_evt : 0x%08x  ADDR_MASK reg : 0x%08x\n",
   VAR_4, FUNC_0(&VAR_3->reg->ADDR_MASK));

 if (VAR_4) {

  VAR_5 = FUNC_0(&VAR_3->reg->ADDR_MASK);
  FUNC_1(VAR_5, &VAR_3->reg->WOL_ADDR_MASK);

  FUNC_2(&VAR_3->reg->WOL_ADDR_MASK, VAR_1);
  FUNC_1(0, &VAR_3->reg->WOL_ST);
  FUNC_1((VAR_4 | VAR_2), &VAR_3->reg->WOL_CTRL);
  FUNC_1(0x02, &VAR_3->reg->TCPIP_ACC);
  FUNC_1(VAR_0, &VAR_3->reg->INT_EN);
 } else {
  FUNC_1(0, &VAR_3->reg->WOL_CTRL);
  FUNC_1(0, &VAR_3->reg->WOL_ST);
 }
 return;
}
