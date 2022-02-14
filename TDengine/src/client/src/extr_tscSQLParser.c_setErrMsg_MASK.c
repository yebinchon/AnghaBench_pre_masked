
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocSize; scalar_t__* payload; } ;
typedef TYPE_1__ SSqlCmd ;


 int FUNC_0 (scalar_t__*,char const*,int) ;

void FUNC_1(SSqlCmd* VAR_0, const char* VAR_1) {
  FUNC_0(VAR_0->payload, VAR_1, VAR_0->allocSize);
  VAR_0->payload[VAR_0->allocSize - 1] = 0;
}
