
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_handler_data {int arg2; int arg1; int (* pre_handler ) (unsigned int,int ,int ) ;} ;
struct irq_desc {int dummy; } ;
struct TYPE_2__ {unsigned int dev_ino; } ;


 struct irq_handler_data* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1,
          struct irq_desc *VAR_2)
{
 struct irq_handler_data *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = VAR_0[VAR_1].dev_ino;

 VAR_3->pre_handler(VAR_4, VAR_3->arg1, VAR_3->arg2);

 FUNC_1(VAR_1, VAR_2);
}
