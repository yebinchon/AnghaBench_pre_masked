
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm93_data {int* boost_hyst; int * boost; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct lm93_data *VAR_0, int VAR_1,
  int VAR_2)
{
 u8 VAR_3;

 switch (VAR_1) {
 case 0:
  VAR_3 = VAR_0->boost_hyst[0] & 0x0f;
  break;
 case 1:
  VAR_3 = VAR_0->boost_hyst[0] >> 4 & 0x0f;
  break;
 case 2:
  VAR_3 = VAR_0->boost_hyst[1] & 0x0f;
  break;
 case 3:
 default:
  VAR_3 = VAR_0->boost_hyst[1] >> 4 & 0x0f;
  break;
 }

 return FUNC_0(VAR_0->boost[VAR_1]) -
   FUNC_1(VAR_3, VAR_2);
}
