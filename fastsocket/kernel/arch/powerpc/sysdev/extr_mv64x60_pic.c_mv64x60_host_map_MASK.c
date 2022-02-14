
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_host *VAR_6, unsigned int VAR_7,
     irq_hw_number_t VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_7)->status |= VAR_0;

 VAR_9 = (VAR_8 & VAR_2) >> VAR_3;
 FUNC_0(VAR_9 > VAR_1);
 FUNC_2(VAR_7, VAR_5[VAR_9], VAR_4);

 return 0;
}
