
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t size; unsigned int* revmap; } ;
struct TYPE_8__ {int tree; TYPE_2__ linear; } ;
struct irq_host {int revmap_type; size_t inval_irq; TYPE_3__ revmap_data; TYPE_1__* ops; } ;
typedef size_t irq_hw_number_t ;
struct TYPE_10__ {int status; } ;
struct TYPE_9__ {size_t hwirq; struct irq_host* host; } ;
struct TYPE_6__ {int (* unmap ) (struct irq_host*,unsigned int) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (unsigned int,int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct irq_host*,unsigned int) ;
 int FUNC_10 (unsigned int) ;

void FUNC_11(unsigned int VAR_6)
{
 struct irq_host *VAR_7;
 irq_hw_number_t VAR_8;

 if (VAR_6 == VAR_2)
  return;

 VAR_7 = VAR_3[VAR_6].host;
 FUNC_0 (VAR_7 == ((void*)0));
 if (VAR_7 == ((void*)0))
  return;


 if (VAR_7->revmap_type == VAR_0)
  return;


 FUNC_6(VAR_6, ((void*)0), ((void*)0));


 FUNC_10(VAR_6);


 if (VAR_7->ops->unmap)
  VAR_7->ops->unmap(VAR_7, VAR_6);
 FUNC_7();


 VAR_8 = VAR_3[VAR_6].hwirq;
 switch(VAR_7->revmap_type) {
 case 129:
  if (VAR_8 < VAR_7->revmap_data.linear.size)
   VAR_7->revmap_data.linear.revmap[VAR_8] = VAR_2;
  break;
 case 128:




  FUNC_8();
  if (VAR_4 < 1)
   break;
  FUNC_3(&VAR_5);
  FUNC_5(&VAR_7->revmap_data.tree, VAR_8);
  FUNC_4(&VAR_5);
  break;
 }


 FUNC_7();
 VAR_3[VAR_6].hwirq = VAR_7->inval_irq;


 FUNC_1(VAR_6)->status |= VAR_1;


 FUNC_2(VAR_6, 1);
}
