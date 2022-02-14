
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Controller; } ;
struct TYPE_6__ {int Command; TYPE_1__ adr; } ;
typedef TYPE_2__ capi_msg ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(capi_msg *VAR_0) {

 int VAR_1;
 int VAR_2;

 VAR_1 = (VAR_0->adr.Controller & 0x7f) -1;
 VAR_2 = FUNC_0(VAR_1, (VAR_0->adr.Controller>>8)& 0x7f);
 switch(VAR_0->Command) {
  case 128:

   return(FUNC_1(VAR_0));
  default:
   return(-1);
 }
}
