
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int minor_t ;
struct TYPE_5__ {struct TYPE_5__* dts_anon; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dev_t ;
typedef int cred_t ;
struct TYPE_6__ {int * dta_enabling; int * dta_state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(dev_t VAR_12, int VAR_13, int VAR_14, cred_t *VAR_15)
{
#pragma unused(flag, otyp, cred_p)
 minor_t VAR_16 = FUNC_4(VAR_12);
 dtrace_state_t *VAR_17;


 VAR_17 = FUNC_3(VAR_16);

 FUNC_6(&VAR_5);
 FUNC_6(&VAR_10);

 if (VAR_17->dts_anon) {



  FUNC_0(VAR_6.dta_state == ((void*)0));
  FUNC_2(VAR_17->dts_anon);
 }

 FUNC_2(VAR_17);
 FUNC_0(VAR_11 > 0);





 if (--VAR_11 == 0 && VAR_6.dta_enabling == ((void*)0)) {



 }

 FUNC_7(&VAR_10);
 FUNC_7(&VAR_5);





 FUNC_8(&VAR_8);
 FUNC_6(&VAR_10);

 if (VAR_11 == 0) {




  if (VAR_7 == VAR_0) {
   VAR_7 = VAR_1;
  }




  if (VAR_9 == VAR_2) {
   VAR_9 = VAR_3;
  }
 }

 FUNC_7(&VAR_10);
 FUNC_9(&VAR_8);







 FUNC_1(((void*)0));

 return (0);
}
