
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xnupost_test_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int mach_vm_address_t ;
struct TYPE_3__ {int * xt_name; int xt_end_time; int xt_begin_time; int xt_expected_retval; int xt_retval; int xt_test_num; int xt_config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(xnupost_test_t VAR_1, mach_vm_address_t VAR_2)
{

 int VAR_3 = 0;
 uint32_t VAR_4 = 0;

 VAR_3 = FUNC_0(&VAR_1->xt_config, VAR_2, sizeof(uint16_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint16_t);

 VAR_3 = FUNC_0(&VAR_1->xt_test_num, VAR_2, sizeof(uint16_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint16_t);

 VAR_3 = FUNC_0(&VAR_1->xt_retval, VAR_2, sizeof(uint32_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint32_t);

 VAR_3 = FUNC_0(&VAR_1->xt_expected_retval, VAR_2, sizeof(uint32_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint32_t);

 VAR_3 = FUNC_0(&VAR_1->xt_begin_time, VAR_2, sizeof(uint64_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint64_t);

 VAR_3 = FUNC_0(&VAR_1->xt_end_time, VAR_2, sizeof(uint64_t));
 if (VAR_3)
  return VAR_3;
 VAR_2 += sizeof(uint64_t);

 VAR_4 = FUNC_1(VAR_1->xt_name, VAR_0);
 VAR_3 = FUNC_0(VAR_1->xt_name, VAR_2, VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_2 += VAR_4;

 return 0;
}
