
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

void FUNC_6(struct e1000_hw *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->phy.media_type != VAR_4 &&
     FUNC_1(VAR_5))
  return;

 if (!FUNC_0(VAR_5)) {

  VAR_6 = FUNC_3(VAR_2);
  VAR_6 &= ~VAR_3;
  FUNC_4(VAR_2, VAR_6);


  VAR_6 = FUNC_3(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_4(VAR_0, VAR_6);


  FUNC_5();
  FUNC_2(1);
 }
}
