
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int,int*) ;

u16 FUNC_1(struct ixgbe_hw *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = VAR_5->back;
 u16 VAR_7 = 1;
 u16 VAR_8;
 u16 VAR_9;

 switch (VAR_5->mac.type) {
 case 130:
  VAR_9 = VAR_2;
  VAR_8 = VAR_0;
  break;
 case 129:
 case 128:
  VAR_9 = VAR_3;
  VAR_8 = VAR_1;
  break;
 default:
  return VAR_7;
 }

 FUNC_0(VAR_6->pdev, VAR_9, &VAR_7);
 VAR_7 &= VAR_4;


 VAR_7++;

 if (VAR_7 > VAR_8)
  VAR_7 = VAR_8;

 return VAR_7;
}
