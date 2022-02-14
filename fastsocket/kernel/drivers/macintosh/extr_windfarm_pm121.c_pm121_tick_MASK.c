
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_5__ {int history_len; } ;
struct TYPE_6__ {TYPE_1__ param; scalar_t__* powers; } ;
struct TYPE_7__ {TYPE_2__ pid; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_11 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned int VAR_12 = VAR_7;
 unsigned int VAR_13;
 s32 VAR_14;
 int VAR_15;

 if (!VAR_10) {
  FUNC_4("pm121: creating control loops !\n");
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
   FUNC_2(VAR_15);

  FUNC_1();
  VAR_10 = 1;
 }


 if (VAR_9 && --VAR_9)
  return;


 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_6->pid.param.history_len; VAR_15++)
  VAR_14 += VAR_6->pid.powers[VAR_15];

 VAR_4 = VAR_14 / VAR_6->pid.param.history_len;


 VAR_7 = 0;
 for (VAR_15 = 0 ; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_11[VAR_15])
   FUNC_3(VAR_15);
 }

 if (VAR_6)
  FUNC_0(VAR_6);

 VAR_8 = 0;
 VAR_13 = VAR_7 & ~VAR_12;




 if (VAR_7 && !VAR_12) {
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   if (VAR_5[VAR_15])
    FUNC_6(VAR_5[VAR_15]);
  }
 }




 if (!VAR_7 && VAR_12) {
  if (VAR_5[VAR_0])
   FUNC_7(VAR_5[VAR_0]);
  VAR_8 = 1;
 }




 if (VAR_13 & VAR_1) {
  FUNC_8();
  VAR_9 = 2;
 }







 if (VAR_13 == 0 && VAR_12 & VAR_1)
  FUNC_5();
}
