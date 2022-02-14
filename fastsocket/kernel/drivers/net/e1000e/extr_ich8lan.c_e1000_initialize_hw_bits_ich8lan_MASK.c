
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


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
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_17)
{
 u32 VAR_18;


 VAR_18 = FUNC_2(VAR_1);
 VAR_18 |= (1 << 22);

 if (VAR_17->mac.type >= VAR_16)
  VAR_18 |= VAR_2;
 FUNC_3(VAR_1, VAR_18);


 VAR_18 = FUNC_2(FUNC_1(0));
 VAR_18 |= (1 << 22);
 FUNC_3(FUNC_1(0), VAR_18);


 VAR_18 = FUNC_2(FUNC_1(1));
 VAR_18 |= (1 << 22);
 FUNC_3(FUNC_1(1), VAR_18);


 VAR_18 = FUNC_2(FUNC_0(0));
 if (VAR_17->mac.type == VAR_14)
  VAR_18 |= (1 << 28) | (1 << 29);
 VAR_18 |= (1 << 23) | (1 << 24) | (1 << 26) | (1 << 27);
 FUNC_3(FUNC_0(0), VAR_18);


 VAR_18 = FUNC_2(FUNC_0(1));
 if (FUNC_2(VAR_13) & VAR_9)
  VAR_18 &= ~(1 << 28);
 else
  VAR_18 |= (1 << 28);
 VAR_18 |= (1 << 24) | (1 << 26) | (1 << 30);
 FUNC_3(FUNC_0(1), VAR_18);


 if (VAR_17->mac.type == VAR_14) {
  VAR_18 = FUNC_2(VAR_12);
  VAR_18 &= ~(1 << 31);
  FUNC_3(VAR_12, VAR_18);
 }




 VAR_18 = FUNC_2(VAR_11);
 VAR_18 |= (VAR_8 | VAR_7);




 if (VAR_17->mac.type == VAR_14)
  VAR_18 |= (VAR_5 | VAR_6);
 FUNC_3(VAR_11, VAR_18);


 if (VAR_17->mac.type == VAR_15) {
  VAR_18 = FUNC_2(VAR_10);
  VAR_18 |= VAR_4;
  FUNC_3(VAR_10, VAR_18);

  VAR_18 = FUNC_2(VAR_0);
  VAR_18 |= VAR_3;
  FUNC_3(VAR_0, VAR_18);
 }
}
