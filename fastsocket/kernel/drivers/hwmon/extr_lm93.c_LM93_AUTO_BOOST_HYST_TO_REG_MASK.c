
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm93_data {int* boost_hyst; int * boost; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static u8 FUNC_2(struct lm93_data *VAR_0, long VAR_1,
  int VAR_2, int VAR_3)
{
 u8 VAR_4 = FUNC_1(
   (FUNC_0(VAR_0->boost[VAR_2]) - VAR_1), VAR_3);

 switch (VAR_2) {
 case 0:
  VAR_4 = (VAR_0->boost_hyst[0] & 0xf0) | (VAR_4 & 0x0f);
  break;
 case 1:
  VAR_4 = (VAR_4 << 4 & 0xf0) | (VAR_0->boost_hyst[0] & 0x0f);
  break;
 case 2:
  VAR_4 = (VAR_0->boost_hyst[1] & 0xf0) | (VAR_4 & 0x0f);
  break;
 case 3:
 default:
  VAR_4 = (VAR_4 << 4 & 0xf0) | (VAR_0->boost_hyst[1] & 0x0f);
  break;
 }

 return VAR_4;
}
