
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct e1000_hw {scalar_t__ media_type; int serdes_has_link; scalar_t__ autoneg; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct e1000_adapter *VAR_3, u64 *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 *VAR_4 = 0;
 if (VAR_5->media_type == VAR_2) {
  int VAR_6 = 0;
  VAR_5->serdes_has_link = 0;



  do {
   FUNC_0(VAR_5);
   if (VAR_5->serdes_has_link)
    return *VAR_4;
   FUNC_2(20);
  } while (VAR_6++ < 3750);

  *VAR_4 = 1;
 } else {
  FUNC_0(VAR_5);
  if (VAR_5->autoneg)
   FUNC_2(4000);

  if (!(FUNC_1(VAR_1) & VAR_0)) {
   *VAR_4 = 1;
  }
 }
 return *VAR_4;
}
