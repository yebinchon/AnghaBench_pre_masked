
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char prb; } ;
struct TYPE_5__ {int track; TYPE_1__* type; } ;
struct TYPE_4__ {int settle_time; int step_delay; int side_time; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_9(int VAR_5, int VAR_6)
{
 unsigned char VAR_7;
 int VAR_8;




 VAR_5 &= 3;
 FUNC_4(VAR_5);
 if (VAR_4[VAR_5].track == VAR_6) {
  FUNC_7();
  return 1;
 }
 if (!FUNC_2(VAR_5)) {
  FUNC_7();
  return 0;
 }
 if (VAR_4[VAR_5].track < 0 && !FUNC_0(VAR_5)) {
  FUNC_7();
  return 0;
 }

 FUNC_3 (VAR_5);
 VAR_8 = VAR_4[VAR_5].track/2 - VAR_6/2;
 VAR_7 = VAR_3.prb;
 VAR_7 |= VAR_1 | VAR_0;
 if (VAR_6 % 2 != 0)
  VAR_7 &= ~VAR_1;
 if (VAR_8 < 0) {
  VAR_8 = - VAR_8;
  VAR_7 &= ~VAR_0;
 }
 VAR_3.prb = VAR_7;
 if (VAR_6 % 2 != VAR_4[VAR_5].track % 2)
  FUNC_5 (VAR_4[VAR_5].type->side_time);
 VAR_4[VAR_5].track = VAR_6;
 if (VAR_8 == 0) {
  FUNC_7();
  FUNC_1(VAR_5);
  return 1;
 }
 do {
  VAR_7 &= ~VAR_2;
  VAR_3.prb = VAR_7;
  VAR_7 |= VAR_2;
  FUNC_8 (1);
  VAR_3.prb = VAR_7;
  FUNC_5 (VAR_4[VAR_5].type->step_delay);
 } while (--VAR_8 != 0);
 FUNC_5 (VAR_4[VAR_5].type->settle_time);

 FUNC_7();
 FUNC_1(VAR_5);
 return 1;
}
