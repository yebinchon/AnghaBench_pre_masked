
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_color; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_2, int VAR_3, int VAR_4, int VAR_5,
     int VAR_6)
{
 int VAR_7 = ((VAR_4 + VAR_6) << 3) - 1;
 int VAR_8 = ((VAR_3 << 4) + VAR_1) & 0x3ff;
 int VAR_9 = (((VAR_3 + VAR_5) << 4) + VAR_1 - 1) & 0x3ff;

 if (VAR_0)
  return;

 if (VAR_8 < VAR_9) {
  FUNC_0(VAR_4 << 3, VAR_8, VAR_7, VAR_9,
         (VAR_2->vc_color & 0xf0) >> 4);
 } else {
  FUNC_0(VAR_4 << 3, VAR_8, VAR_7, 1023,
         (VAR_2->vc_color & 0xf0) >> 4);
  FUNC_0(VAR_4 << 3, 0, VAR_7, VAR_9,
         (VAR_2->vc_color & 0xf0) >> 4);
 }
}
