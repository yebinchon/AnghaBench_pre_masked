
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct stv090x_state *VAR_5, s32 VAR_6)
{
 s32 VAR_7 = 0, VAR_8 = 0;
 u32 VAR_9;
 u8 VAR_10;

 while ((VAR_7 < VAR_6) && (!VAR_8)) {
  VAR_9 = FUNC_1(VAR_5, VAR_0);
  VAR_10 = FUNC_0(VAR_9, VAR_3);

  switch (VAR_10) {
  case 0:
  case 1:
  default:
   FUNC_2(VAR_2, 1, "Demodulator searching ..");
   VAR_8 = 0;
   break;
  case 2:
  case 3:
   VAR_9 = FUNC_1(VAR_5, VAR_1);
   VAR_8 = FUNC_0(VAR_9, VAR_4);
   break;
  }

  if (!VAR_8)
   FUNC_3(10);
  else
   FUNC_2(VAR_2, 1, "Demodulator acquired LOCK");

  VAR_7 += 10;
 }
 return VAR_8;
}
