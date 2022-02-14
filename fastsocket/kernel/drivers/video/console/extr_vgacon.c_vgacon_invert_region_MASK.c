
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;
typedef int a ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_1, u16 * VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0;

 while (VAR_3--) {
  u16 VAR_5 = FUNC_0(VAR_2);
  if (VAR_4)
   VAR_5 = ((VAR_5) & 0x88ff) | (((VAR_5) & 0x7000) >> 4) |
       (((VAR_5) & 0x0700) << 4);
  else
   VAR_5 ^= ((VAR_5 & 0x0700) == 0x0100) ? 0x7000 : 0x7700;
  FUNC_1(VAR_5, VAR_2++);
 }
}
