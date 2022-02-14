
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xnupost_test_t ;
typedef size_t uint32_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {scalar_t__ xt_test_num; int xt_config; char* xt_name; int xt_expected_retval; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

kern_return_t
FUNC_3(xnupost_test_t VAR_7, uint32_t VAR_8)
{
 if (VAR_1 != FUNC_1())
  return VAR_0;

 xnupost_test_t VAR_9;
 for (uint32_t VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9 = &VAR_7[VAR_10];
  if (VAR_9->xt_test_num == 0) {
   VAR_9->xt_test_num = ++VAR_6;
  }

  if (VAR_5 & VAR_2) {
   VAR_9->xt_config |= VAR_3;
   if (FUNC_2(VAR_9->xt_test_num)) {
    VAR_9->xt_config &= ~(VAR_3);
    VAR_9->xt_config |= VAR_4;
    FUNC_0("\n[TEST] #%u is marked as ignored", VAR_9->xt_test_num);
   }
  }
  FUNC_0("\n[TEST] TOC#%u name: %s expected: %d config: %x\n", VAR_9->xt_test_num, VAR_9->xt_name, VAR_9->xt_expected_retval,
         VAR_9->xt_config);
 }

 return VAR_1;
}
