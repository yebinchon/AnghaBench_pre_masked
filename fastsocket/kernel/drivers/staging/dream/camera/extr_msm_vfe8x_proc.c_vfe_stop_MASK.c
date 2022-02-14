
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* boolean ;
struct TYPE_2__ {scalar_t__ vfebase; void* vfeStatsPingPongReloadFlag; void* vfeStopAckPending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__) ;

void FUNC_8(void)
{
 boolean VAR_12;
 uint32_t VAR_13;


 VAR_11->vfeStopAckPending = VAR_4;

 VAR_11->vfeStatsPingPongReloadFlag = VAR_3;
 FUNC_1();


 FUNC_5(VAR_6);




 FUNC_0();
 FUNC_3(VAR_0);
 FUNC_2(VAR_10);

 VAR_12 = VAR_4;

 while (VAR_12) {
  VAR_13 = FUNC_6();
  if ((VAR_13 & VAR_2) != 0)
   VAR_12 = VAR_3;
 }

 FUNC_3(VAR_1);


 FUNC_7(VAR_5, VAR_11->vfebase + VAR_8);




 FUNC_5(VAR_7);

 FUNC_4(VAR_9);
}
