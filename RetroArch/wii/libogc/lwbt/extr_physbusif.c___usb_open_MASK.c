
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
typedef int pbcallback ;
struct TYPE_2__ {int openstate; int closecb; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static s32 FUNC_2(pbcallback VAR_2)
{
 if(VAR_0.openstate!=0x0004) return -1;

 VAR_0.closecb = VAR_2;
 VAR_0.openstate = 2;

 FUNC_1();
 FUNC_0();

 VAR_1 = 0;
 return 0;
}
