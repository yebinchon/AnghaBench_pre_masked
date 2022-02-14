
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgb_hw {int mc_filter_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static u32
FUNC_3(struct ixgb_hw *VAR_0,
     u8 *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_1("ixgb_hash_mc_addr");




 switch (VAR_0->mc_filter_type) {



 case 0:

  VAR_2 =
      ((VAR_1[4] >> 4) | (((u16) VAR_1[5]) << 4));
  break;
 case 1:
  VAR_2 =
      ((VAR_1[4] >> 3) | (((u16) VAR_1[5]) << 5));
  break;
 case 2:
  VAR_2 =
      ((VAR_1[4] >> 2) | (((u16) VAR_1[5]) << 6));
  break;
 case 3:
  VAR_2 = ((VAR_1[4]) | (((u16) VAR_1[5]) << 8));
  break;
 default:

  FUNC_2("MC filter type param set incorrectly\n");
  FUNC_0(0);
  break;
 }

 VAR_2 &= 0xFFF;
 return (VAR_2);
}
