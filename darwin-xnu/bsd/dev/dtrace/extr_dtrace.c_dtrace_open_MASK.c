
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zoneid_t ;
typedef scalar_t__ uint32_t ;
typedef int uid_t ;
typedef int dtrace_state_t ;
typedef int dev_t ;
typedef int cred_t ;
struct TYPE_2__ {int * dta_enabling; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_0 (int *,scalar_t__*,int *,int *) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 () ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int *,int *) ;
 int VAR_20 ;
 int FUNC_3 (int *,int *,int **) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_13(dev_t *VAR_21, int VAR_22, int VAR_23, cred_t *VAR_24)
{
#pragma unused(flag, otyp)
 dtrace_state_t *VAR_25;
 uint32_t VAR_26;
 uid_t VAR_27;
 zoneid_t VAR_28;
 int VAR_29;







 FUNC_0(VAR_24, &VAR_26, &VAR_27, &VAR_28);
 if (VAR_26 == VAR_4)
  return (VAR_5);





 FUNC_4();




 FUNC_6(&VAR_20);
 FUNC_2(((void*)0), ((void*)0));
 FUNC_7(&VAR_20);

 FUNC_6(&VAR_11);
 FUNC_6(&VAR_18);
 VAR_19++;
 FUNC_1();
 VAR_29 = FUNC_3(VAR_21, VAR_24, &VAR_25);
 FUNC_7(&VAR_11);

 if (VAR_29 != 0 || VAR_25 == ((void*)0)) {
  if (--VAR_19 == 0 && VAR_12.dta_enabling == ((void*)0)) {



  }
  FUNC_7(&VAR_18);

  return (VAR_29);
 }

 FUNC_7(&VAR_18);

 FUNC_8(&VAR_14);
 if (VAR_13 == VAR_1) {
  VAR_13 = VAR_0;
  FUNC_9(&VAR_14);



  FUNC_12(VAR_9 | VAR_10,
        VAR_16,
        ((void*)0),
        VAR_17,
        ((void*)0));

  FUNC_11(&VAR_14);
 }
 else {
  FUNC_10(&VAR_14);
 }
 FUNC_6(&VAR_18);
 if (VAR_15 == VAR_3) {
  VAR_15 = VAR_2;
 }
 FUNC_7(&VAR_18);

 return (0);
}
