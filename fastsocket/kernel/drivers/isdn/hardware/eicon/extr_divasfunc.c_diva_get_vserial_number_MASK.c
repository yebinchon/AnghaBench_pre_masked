
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int serialNo; } ;
typedef TYPE_1__* PISDN_ADAPTER ;


 int FUNC_0 (char*,char*,int,...) ;

void FUNC_1(PISDN_ADAPTER VAR_0, char *VAR_1)
{
 int VAR_2 = 0;

 if ((VAR_2 = ((VAR_0->serialNo & 0xff000000) >> 24))) {
  FUNC_0(VAR_1, "%d-%d",
   VAR_0->serialNo & 0x00ffffff, VAR_2 + 1);
 } else {
  FUNC_0(VAR_1, "%d", VAR_0->serialNo);
 }
}
