
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sn_irq_info {scalar_t__ irq_cookie; scalar_t__ irq_irq; } ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;
typedef scalar_t__ nasid_t ;


 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(nasid_t VAR_2, int VAR_3,
    struct sn_irq_info *VAR_4)
{
 struct ia64_sal_retval VAR_5;
 VAR_5.status = 0;
 VAR_5.v0 = 0;

 FUNC_0(VAR_5, (u64) VAR_1,
   (u64) VAR_0, (u64) VAR_2,
   (u64) VAR_3, (u64) VAR_4->irq_irq,
   (u64) VAR_4->irq_cookie, 0, 0);
}
