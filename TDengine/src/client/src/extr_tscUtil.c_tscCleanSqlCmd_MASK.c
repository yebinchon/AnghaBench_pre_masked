
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {char* payload; int allocSize; int * pMeterInfo; } ;
typedef TYPE_1__ SSqlCmd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(SSqlCmd* VAR_0) {
  FUNC_2(VAR_0);

  FUNC_0(VAR_0->pMeterInfo == ((void*)0));

  uint32_t VAR_1 = VAR_0->allocSize;
  char* VAR_2 = VAR_0->payload;

  FUNC_1(VAR_0, 0, sizeof(SSqlCmd));


  VAR_0->allocSize = VAR_1;
  VAR_0->payload = VAR_2;
}
