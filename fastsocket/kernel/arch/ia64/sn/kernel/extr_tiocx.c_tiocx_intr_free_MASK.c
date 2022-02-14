
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_irq_info {int irq_cookie; int irq_irq; } ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ia64_sal_retval*,int ,int ,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(nasid_t VAR_2, int VAR_3,
       struct sn_irq_info *VAR_4)
{
 struct ia64_sal_retval VAR_5;
 VAR_5.status = 0;
 VAR_5.v0 = 0;

 FUNC_0(&VAR_5, VAR_1,
    VAR_0, VAR_2,
    VAR_3, VAR_4->irq_irq,
    VAR_4->irq_cookie, 0, 0);
}
