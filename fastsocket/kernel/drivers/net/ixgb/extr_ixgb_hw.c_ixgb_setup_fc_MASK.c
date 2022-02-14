
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; int pause_time; int low_water; int high_water; scalar_t__ send_xon; } ;
struct ixgb_hw {TYPE_1__ fc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ixgb_hw*,int ) ;
 int FUNC_4 (struct ixgb_hw*,int ,int) ;
 int VAR_7 ;





__attribute__((used)) static bool
FUNC_5(struct ixgb_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = 0;
 bool VAR_11 = 1;

 FUNC_1("ixgb_setup_fc");


 VAR_9 = FUNC_3(VAR_8, VAR_0);


 VAR_9 &= ~(VAR_4 | VAR_5);
 switch (VAR_8->fc.type) {
 case 130:

  VAR_9 |= (VAR_3);
  break;
 case 129:



  VAR_9 |= (VAR_4);
  break;
 case 128:



  VAR_9 |= (VAR_5);
  VAR_10 = VAR_8->fc.pause_time;
  break;
 case 131:



  VAR_9 |= (VAR_4 | VAR_5);
  VAR_10 = VAR_8->fc.pause_time;
  break;
 default:

  FUNC_2("Flow control param set incorrectly\n");
  FUNC_0(0);
  break;
 }


 FUNC_4(VAR_8, VAR_0, VAR_9);

 if (VAR_10 != 0)
  FUNC_4(VAR_8, VAR_7, VAR_10);







 if (!(VAR_8->fc.type & 128)) {
  FUNC_4(VAR_8, VAR_2, 0);
  FUNC_4(VAR_8, VAR_1, 0);
 } else {



  if (VAR_8->fc.send_xon) {
   FUNC_4(VAR_8, VAR_2,
    (VAR_8->fc.low_water | VAR_6));
  } else {
   FUNC_4(VAR_8, VAR_2, VAR_8->fc.low_water);
  }
  FUNC_4(VAR_8, VAR_1, VAR_8->fc.high_water);
 }
 return (VAR_11);
}
