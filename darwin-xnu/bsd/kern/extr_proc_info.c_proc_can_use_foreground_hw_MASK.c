
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint32_t ;
typedef scalar_t__ task_t ;
typedef int reason ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
typedef int coalition_t ;
struct TYPE_6__ {scalar_t__ task; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;




 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (int*,int ,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,int*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

int FUNC_13(int VAR_20, user_addr_t VAR_21, uint32_t VAR_22, int32_t *VAR_23)
{
 proc_t VAR_24 = VAR_16;
 int VAR_25 = 0;
 uint32_t VAR_26 = VAR_7;
 uint32_t VAR_27 = 0;
 task_t VAR_28 = VAR_17;




 *VAR_23 = 0;

 if (VAR_20 <= 0) {
  VAR_25 = 136;
  VAR_26 = VAR_7;
  goto out;
 }

 VAR_24 = FUNC_6(VAR_20);
 if (VAR_24 == VAR_16) {
  VAR_25 = 134;
  VAR_26 = VAR_7;
  goto out;
 }
 if (VAR_24 != FUNC_3()) {
  VAR_25 = 136;
  goto out;
 }
 VAR_27 = 1;
 VAR_25 = FUNC_9(&VAR_27);
 switch (VAR_25) {
 case 0:
  break;
 case 134:
  VAR_26 = VAR_10;
  VAR_25 = 0;
  goto out;
 case 135:
  VAR_26 = VAR_11;
  VAR_25 = 0;
  goto out;
 case 136:
  VAR_26 = VAR_5;
  VAR_25 = 0;
  goto out;
 default:

  VAR_26 = VAR_14;
  goto out;
 }

 if (VAR_27) {
  VAR_26 = VAR_13;
  VAR_25 = 0;
 } else {





  VAR_26 = VAR_6;
  *VAR_23 = 1;
 }

out:
 if (VAR_28 != VAR_17)
  FUNC_11(VAR_28);
 if (VAR_24 != VAR_16)
  FUNC_10(VAR_24);
 if (VAR_22 >= sizeof(VAR_26) && VAR_21 != (user_addr_t)0)
  (void)FUNC_2(&VAR_26, VAR_21, sizeof(VAR_26));
 return VAR_25;
}
