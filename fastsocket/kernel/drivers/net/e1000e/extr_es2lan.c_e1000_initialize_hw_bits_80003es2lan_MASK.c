
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
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_6)
{
 u32 VAR_7;


 VAR_7 = FUNC_2(FUNC_1(0));
 VAR_7 |= (1 << 22);
 FUNC_3(FUNC_1(0), VAR_7);


 VAR_7 = FUNC_2(FUNC_1(1));
 VAR_7 |= (1 << 22);
 FUNC_3(FUNC_1(1), VAR_7);


 VAR_7 = FUNC_2(FUNC_0(0));
 VAR_7 &= ~(0xF << 27);
 if (VAR_6->phy.media_type != VAR_5)
  VAR_7 &= ~(1 << 20);
 FUNC_3(FUNC_0(0), VAR_7);


 VAR_7 = FUNC_2(FUNC_0(1));
 if (FUNC_2(VAR_4) & VAR_2)
  VAR_7 &= ~(1 << 28);
 else
  VAR_7 |= (1 << 28);
 FUNC_3(FUNC_0(1), VAR_7);




 VAR_7 = FUNC_2(VAR_3);
 VAR_7 |= (VAR_0 | VAR_1);
 FUNC_3(VAR_3, VAR_7);
}
