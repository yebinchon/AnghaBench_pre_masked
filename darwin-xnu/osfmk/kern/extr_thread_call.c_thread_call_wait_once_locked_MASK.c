
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef TYPE_1__* thread_call_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_4__ {int tc_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static boolean_t
FUNC_5(thread_call_t VAR_10, spl_t VAR_11)
{
 FUNC_0(VAR_10->tc_flags & VAR_2);
 FUNC_0(VAR_10->tc_flags & VAR_3);

 if ((VAR_10->tc_flags & VAR_4) == 0) {
  FUNC_2(VAR_11);
  return VAR_0;
 }


 VAR_10->tc_flags |= VAR_5;

 wait_result_t VAR_12 = FUNC_1(VAR_10, VAR_7);
 if (VAR_12 != VAR_8)
  FUNC_3("Unable to assert wait: %d", VAR_12);

 FUNC_2(VAR_11);

 VAR_12 = FUNC_4(VAR_6);
 if (VAR_12 != VAR_1)
  FUNC_3("Awoken with %d?", VAR_12);


 return VAR_9;
}
