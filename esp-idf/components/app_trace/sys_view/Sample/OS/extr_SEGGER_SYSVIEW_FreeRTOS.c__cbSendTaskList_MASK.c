
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
typedef int TaskHandle_t ;
struct TYPE_2__ {scalar_t__ uStackHighWaterMark; scalar_t__ pxStack; scalar_t__ uxCurrentPriority; int pcTaskName; scalar_t__ xHandle; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int ,unsigned int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void) {
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    if (VAR_1[VAR_2].xHandle) {



      FUNC_0((U32)VAR_1[VAR_2].xHandle, VAR_1[VAR_2].pcTaskName, (unsigned)VAR_1[VAR_2].uxCurrentPriority, (U32)VAR_1[VAR_2].pxStack, (unsigned)VAR_1[VAR_2].uStackHighWaterMark);
    }
  }
}
