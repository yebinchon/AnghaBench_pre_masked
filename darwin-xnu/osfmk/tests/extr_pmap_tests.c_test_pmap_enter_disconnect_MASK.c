
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef int thread_t ;
typedef int ppnum_t ;
struct TYPE_3__ {int stop; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ pmap_test_thread_args ;
typedef int * pmap_t ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ,int,int ,int ,int ) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

kern_return_t
FUNC_14(unsigned int VAR_14)
{
 kern_return_t VAR_15 = VAR_2;
 thread_t VAR_16;
 pmap_t VAR_17 = FUNC_4();
 if (VAR_17 == ((void*)0))
  return VAR_1;
 vm_page_t VAR_18 = FUNC_11();
 if (VAR_18 == VAR_8) {
  FUNC_5(VAR_17);
  return VAR_1;
 }
 ppnum_t VAR_19 = FUNC_0(VAR_18);
 pmap_test_thread_args VAR_20 = {*VAR_17, VAR_0, VAR_19};
 kern_return_t VAR_21 = FUNC_3(VAR_13, &VAR_20, &VAR_16);
 if (VAR_21) {
  FUNC_5(VAR_17);
  FUNC_12();
  FUNC_10(VAR_18);
  FUNC_13();
  return VAR_21;
 }
 FUNC_9(VAR_16);

 while (VAR_14-- != 0) {
  VAR_15 = FUNC_6(VAR_17, VAR_4, VAR_19,
                  VAR_10 | VAR_11, VAR_9, VAR_12, VAR_0);
  FUNC_1(VAR_15 == VAR_2);
 }

 FUNC_2((event_t)&VAR_20, VAR_6);
 VAR_20.stop = VAR_7;
 FUNC_8(VAR_5);

 FUNC_7(VAR_17, VAR_4, VAR_4 + VAR_3);
 FUNC_12();
 FUNC_10(VAR_18);
 FUNC_13();
 FUNC_5(VAR_17);
 return VAR_2;
}
