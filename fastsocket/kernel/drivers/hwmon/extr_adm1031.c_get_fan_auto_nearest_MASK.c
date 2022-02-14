
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct adm1031_data {scalar_t__*** chan_select_table; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct adm1031_data *VAR_1,
       int VAR_2, u8 VAR_3, u8 VAR_4, u8 * VAR_5)
{
 int VAR_6;
 int VAR_7 = -1, VAR_8 = -1;
 u8 VAR_9 =
     (*VAR_1->chan_select_table)[FUNC_0(VAR_4)][VAR_2 ? 0 : 1];

 if (VAR_3 == 0) {
  *VAR_5 = 0;
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if ((VAR_3 == (*VAR_1->chan_select_table)[VAR_6][VAR_2]) &&
      ((*VAR_1->chan_select_table)[VAR_6][VAR_2 ? 0 : 1] ==
       VAR_9)) {

   VAR_8 = VAR_6;
   break;
  } else if (VAR_3 == (*VAR_1->chan_select_table)[VAR_6][VAR_2] &&
      VAR_7 == -1) {



   VAR_7 = VAR_6;
  }
 }

 if (VAR_8 >= 0) {
  *VAR_5 = VAR_8;
 } else if (VAR_7 >= 0) {
  *VAR_5 = VAR_7;
 } else {
  return -VAR_0;
 }
 return 0;
}
