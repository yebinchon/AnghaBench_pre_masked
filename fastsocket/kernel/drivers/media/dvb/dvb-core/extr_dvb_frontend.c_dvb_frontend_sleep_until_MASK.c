
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timeval {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timeval*,int ) ;
 int FUNC_3 (struct timeval,struct timeval) ;
 int FUNC_4 (int) ;

void FUNC_5(struct timeval *VAR_0, u32 VAR_1)
{
 struct timeval VAR_2;
 s32 VAR_3, VAR_4;

 FUNC_2(VAR_0, VAR_1);

 FUNC_0(&VAR_2);
 VAR_3 = FUNC_3(VAR_2, *VAR_0);
 if (VAR_3 > 2500) {
  FUNC_1((VAR_3 - 1500) / 1000);
  FUNC_0(&VAR_2);
  VAR_4 = FUNC_3(VAR_2, *VAR_0);
  VAR_3 = (VAR_4 > VAR_3) ? 0 : VAR_4;
 }
 if (VAR_3 > 0)
  FUNC_4(VAR_3);
}
