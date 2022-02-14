
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 unsigned long VAR_3;


 FUNC_1(VAR_3);
 VAR_0.event_handler(&VAR_0);
 FUNC_0(VAR_3);
}
