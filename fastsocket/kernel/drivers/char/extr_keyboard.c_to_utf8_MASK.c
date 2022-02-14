
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct vc_data {int dummy; } ;


 int FUNC_0 (struct vc_data*,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, uint VAR_1)
{
 if (VAR_1 < 0x80)

  FUNC_0(VAR_0, VAR_1);
 else if (VAR_1 < 0x800) {

  FUNC_0(VAR_0, 0xc0 | (VAR_1 >> 6));
  FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
     } else if (VAR_1 < 0x10000) {
         if (VAR_1 >= 0xD800 && VAR_1 < 0xE000)
   return;
  if (VAR_1 == 0xFFFF)
   return;

  FUNC_0(VAR_0, 0xe0 | (VAR_1 >> 12));
  FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3f));
  FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
     } else if (VAR_1 < 0x110000) {

  FUNC_0(VAR_0, 0xf0 | (VAR_1 >> 18));
  FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 12) & 0x3f));
  FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3f));
  FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
 }
}
