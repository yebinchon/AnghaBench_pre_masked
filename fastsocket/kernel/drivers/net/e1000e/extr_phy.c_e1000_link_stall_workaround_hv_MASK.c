
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct e1000_hw *VAR_11)
{
 s32 VAR_12 = 0;
 u16 VAR_13;

 if (VAR_11->phy.type != VAR_10)
  return 0;


 FUNC_0(VAR_11, VAR_9, &VAR_13);
 if (VAR_13 & VAR_0)
  return 0;


 VAR_12 = FUNC_0(VAR_11, VAR_1, &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_13 &= (VAR_2 | VAR_3 |
   VAR_5);

 if (VAR_13 != (VAR_2 | VAR_3 |
       VAR_4))
  return 0;

 FUNC_2(200);


 VAR_12 = FUNC_1(VAR_11, VAR_6,
      (VAR_8 |
       VAR_7));
 if (VAR_12)
  return VAR_12;

 return FUNC_1(VAR_11, VAR_6, VAR_8);
}
