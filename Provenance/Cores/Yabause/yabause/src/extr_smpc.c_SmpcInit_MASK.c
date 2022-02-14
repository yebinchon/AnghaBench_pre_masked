
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int clocksync; scalar_t__ basetime; void* regionid; void* regionsetting; } ;
typedef TYPE_1__ SmpcInternal ;
typedef int Smpc ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 void** VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(u8 VAR_3, int VAR_4, u32 VAR_5) {
   if ((VAR_2 = (u8 *) FUNC_0(1, sizeof(Smpc))) == ((void*)0))
      return -1;

   VAR_1 = (Smpc *) VAR_2;

   if ((VAR_0 = (SmpcInternal *) FUNC_0(1, sizeof(SmpcInternal))) == ((void*)0))
      return -1;

   VAR_0->regionsetting = VAR_3;
   VAR_0->regionid = VAR_3;
   VAR_0->clocksync = VAR_4;
   VAR_0->basetime = VAR_5 ? VAR_5 : FUNC_1(((void*)0));

   return 0;
}
