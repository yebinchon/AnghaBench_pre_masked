
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int init; } ;
struct TYPE_5__ {TYPE_1__ ts_rtc; } ;
struct TYPE_6__ {TYPE_2__ supports; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3;
 unsigned char VAR_4, VAR_5;

 VAR_4 = FUNC_2(126);
 VAR_5 = FUNC_2(127);

 FUNC_3(0x00, 126);
 FUNC_3(0x55, 127);
 if (FUNC_2(127) == 0x55) {
  FUNC_3(0xaa, 127);
  if (FUNC_2(127) == 0xaa
    && FUNC_2(126) == 0x00) {
   FUNC_3(VAR_4, 126);
   FUNC_3(VAR_5, 127);

   if (VAR_1.supports.ts_rtc.init == 0) {
    VAR_3 = FUNC_1(&VAR_2);
    if (!VAR_3)
     VAR_1.supports.ts_rtc.init = 1;
   } else
    VAR_3 = FUNC_0(&VAR_2);

   return VAR_3;
  }
 }

 return -VAR_0;
}
