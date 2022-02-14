
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct cx24113_state {int frequency; scalar_t__ rev; int vcodiv; scalar_t__ Fwindow_enabled; TYPE_1__* config; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_2__ {int xtal_khz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int) ;
 int FUNC_2 (struct cx24113_state*,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,long long,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct cx24113_state *VAR_3, u16 *VAR_4, s32 *VAR_5)
{
 s32 VAR_6;
 s64 VAR_7;
 u64 VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 s32 VAR_13 = VAR_3->frequency * 1000;

 if (VAR_3->config->xtal_khz < 20000)
  VAR_12 = 1;
 else
  VAR_12 = 2;

 if (VAR_3->rev == VAR_0) {
  if (VAR_3->frequency >= 1100000)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_2;
 } else {
  if (VAR_3->frequency >= 1165000)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_2;
 }
 VAR_3->vcodiv = VAR_11;

 FUNC_4("calculating N/F for %dHz with vcodiv %d\n", VAR_13, VAR_11);
 VAR_9 = 0;
 do {
  VAR_9 = FUNC_1(VAR_3, VAR_9 + 1);


  VAR_6 = (VAR_13 / 100 * VAR_11) * VAR_9;
  VAR_6 /= (VAR_3->config->xtal_khz) * VAR_12 * 2;
  VAR_6 += 5;
  VAR_6 /= 10;
  VAR_6 -= 32;
 } while (VAR_6 < 6 && VAR_9 < 3);

 if (VAR_6 < 6) {
  FUNC_5("strange frequency: N < 6\n");
  return;
 }
 VAR_7 = VAR_13;
 VAR_7 *= (u64) (VAR_9 * VAR_11 * 262144);
 FUNC_4("1 N: %d, F: %lld, R: %d\n", VAR_6, (long long)VAR_7, VAR_9);

 VAR_8 = VAR_7;
 FUNC_3(VAR_8, VAR_3->config->xtal_khz * 1000 * VAR_12 * 2);
 VAR_7 = VAR_8;
 FUNC_4("2 N: %d, F: %lld, R: %d\n", VAR_6, (long long)VAR_7, VAR_9);
 VAR_7 -= (VAR_6 + 32) * 262144;

 FUNC_4("3 N: %d, F: %lld, R: %d\n", VAR_6, (long long)VAR_7, VAR_9);

 if (VAR_3->Fwindow_enabled) {
  if (VAR_7 > (262144 / 2 - 1638))
   VAR_7 = 262144 / 2 - 1638;
  if (VAR_7 < (-262144 / 2 + 1638))
   VAR_7 = -262144 / 2 + 1638;
  if ((VAR_7 < 3277 && VAR_7 > 0) || (VAR_7 > -3277 && VAR_7 < 0)) {
   VAR_7 = 0;
   VAR_10 = FUNC_0(VAR_3, 0x10);
   FUNC_2(VAR_3, 0x10, VAR_10 | (1 << 6));
  }
 }
 FUNC_4("4 N: %d, F: %lld, R: %d\n", VAR_6, (long long)VAR_7, VAR_9);

 *VAR_4 = (u16) VAR_6;
 *VAR_5 = (s32) VAR_7;
}
