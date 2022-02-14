
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct atl1_hw {int media_type; } ;
struct atl1_adapter {struct atl1_hw hw; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 int FUNC_2 (struct atl1_hw*,int ,int) ;
 struct atl1_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8)
{
 struct atl1_adapter *VAR_9 = FUNC_3(VAR_8);
 struct atl1_hw *VAR_10 = &VAR_9->hw;

 if (FUNC_4(VAR_8)) {
  u16 VAR_11;
  FUNC_0(VAR_9);

  if (VAR_10->media_type == VAR_1 ||
   VAR_10->media_type == VAR_0) {
   VAR_11 = VAR_5 | VAR_3;
  } else {
   switch (VAR_10->media_type) {
   case 130:
    VAR_11 = VAR_4 |
     VAR_7 | VAR_5;
    break;
   case 129:
    VAR_11 = VAR_7 | VAR_5;
    break;
   case 128:
    VAR_11 = VAR_4 |
     VAR_6 | VAR_5;
    break;
   default:

    VAR_11 = VAR_6 | VAR_5;
   }
  }
  FUNC_2(VAR_10, VAR_2, VAR_11);
  FUNC_1(VAR_9);
 }
 return 0;
}
