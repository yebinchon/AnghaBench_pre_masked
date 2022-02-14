
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int * tx_preemphasis; int * rx_preemphasis; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_8,
      struct link_params *VAR_9)
{

 u16 VAR_10, VAR_11 = 0;
 struct bnx2x *VAR_12 = VAR_9->bp;

 for (VAR_10 = VAR_0, VAR_11 = 0; VAR_10 <= VAR_2;
       VAR_10 += (VAR_1-VAR_0), VAR_11++) {
   FUNC_0(VAR_12, VAR_8,
       VAR_10,
       VAR_6,
       VAR_8->rx_preemphasis[VAR_11]);
 }

 for (VAR_10 = VAR_3, VAR_11 = 0; VAR_10 <= VAR_5;
        VAR_10 += (VAR_4 - VAR_3), VAR_11++) {
   FUNC_0(VAR_12, VAR_8,
       VAR_10,
       VAR_7,
       VAR_8->tx_preemphasis[VAR_11]);
 }
}
