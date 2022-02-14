
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int event ;
struct TYPE_3__ {scalar_t__ pressure; int x; int y; } ;
typedef TYPE_1__ UCB1X00_TS_EVENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_2(int *VAR_2, int *VAR_3)
{
 UCB1X00_TS_EVENT VAR_4;
 static int VAR_5 = 0;
 int VAR_6;

 if (VAR_1 < 0) return -1;

 VAR_6 = FUNC_1(VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_6 <= 0) {
  FUNC_0("touch read failed");
  return -1;
 }

 if (VAR_4.pressure == 0) VAR_5 = 1;

 if (VAR_2) *VAR_2 = (VAR_4.x * VAR_0[0] + VAR_0[2]) >> 16;
 if (VAR_3) *VAR_3 = (VAR_4.y * VAR_0[4] + VAR_0[5]) >> 16;


 return VAR_5 ? VAR_4.pressure : 0;
}
