
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_video_erase_char; } ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_1, int VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 u16 *VAR_6 = FUNC_0(VAR_3, VAR_2);
 u16 VAR_7 = FUNC_1(VAR_1->vc_video_erase_char);

 if (VAR_5 <= 0 || VAR_4 <= 0)
  return;

 if (VAR_3==0 && VAR_5==VAR_0) {
  FUNC_2(VAR_6, VAR_7, VAR_4*VAR_5*2);
 } else {
  for (; VAR_4 > 0; VAR_4--, VAR_6+=VAR_0)
   FUNC_2(VAR_6, VAR_7, VAR_5*2);
 }
}
