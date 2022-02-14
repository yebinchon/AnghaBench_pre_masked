
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sn_irq_info {int dummy; } ;
struct ia64_sal_retval {scalar_t__ status; scalar_t__ v0; } ;
typedef scalar_t__ nasid_t ;


 int FUNC_0 (struct ia64_sal_retval,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sn_irq_info*) ;

u64 FUNC_2(nasid_t VAR_2, int VAR_3,
        struct sn_irq_info *VAR_4,
        nasid_t VAR_5, int VAR_6)
{
 struct ia64_sal_retval VAR_7;
 VAR_7.status = 0;
 VAR_7.v0 = 0;

 FUNC_0(VAR_7, (u64) VAR_1,
   (u64) VAR_0, (u64) VAR_2,
   (u64) VAR_3, FUNC_1(VAR_4),
   (u64) VAR_5, (u64) VAR_6, 0);

 return VAR_7.status;
}
