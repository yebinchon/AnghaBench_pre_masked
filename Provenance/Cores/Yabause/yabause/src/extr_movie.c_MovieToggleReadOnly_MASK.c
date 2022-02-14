
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Status; int ReadOnly; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(void) {

 if(VAR_0.Status == VAR_1) {

  if(VAR_0.ReadOnly == 1)
  {
   VAR_0.ReadOnly=0;
   FUNC_0("Movie is now read+write.");
  }
  else
  {
   VAR_0.ReadOnly=1;
   FUNC_0("Movie is now read only.");
  }
 }
}
