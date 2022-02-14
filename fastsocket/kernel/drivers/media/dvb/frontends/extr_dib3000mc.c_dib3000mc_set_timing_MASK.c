
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ timf ;
struct dib3000mc_state {int timf; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dib3000mc_state *VAR_1, s16 VAR_2, u32 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 if (VAR_1->timf == 0) {
  VAR_5 = 1384402;
  if (VAR_4)
   FUNC_3(200);
 } else
  VAR_5 = VAR_1->timf;

 VAR_5 *= (VAR_3 / 1000);

 if (VAR_4) {
  s16 VAR_6 = FUNC_0(VAR_1, 416);

  if (VAR_6 & 0x2000)
   VAR_6 -= 0x4000;

  if (VAR_2 == VAR_0)
   VAR_6 *= 4;

  VAR_5 += VAR_6;
  VAR_1->timf = VAR_5 / (VAR_3 / 1000);
 }

 FUNC_2("timf: %d\n", VAR_5);

 FUNC_1(VAR_1, 23, (u16) (VAR_5 >> 16));
 FUNC_1(VAR_1, 24, (u16) (VAR_5 ) & 0xffff);

 return 0;
}
