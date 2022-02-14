
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irq_host_ops {int (* map ) (struct irq_host*,unsigned int,unsigned int) ;int * match; } ;
struct TYPE_5__ {unsigned int size; unsigned int* revmap; } ;
struct TYPE_6__ {TYPE_1__ linear; } ;
struct irq_host {unsigned int revmap_type; TYPE_2__ revmap_data; int inval_irq; int link; struct irq_host_ops* ops; int of_node; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {unsigned int hwirq; struct irq_host* host; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int * VAR_4 ;
 TYPE_4__* FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (struct irq_host*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*,unsigned int,struct irq_host*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct irq_host*,unsigned int,unsigned int) ;
 struct irq_host* FUNC_9 (unsigned int,int ) ;

struct irq_host *FUNC_10(struct device_node *VAR_9,
    unsigned int VAR_10,
    unsigned int VAR_11,
    struct irq_host_ops *VAR_12,
    irq_hw_number_t VAR_13)
{
 struct irq_host *VAR_14;
 unsigned int VAR_15 = sizeof(struct irq_host);
 unsigned int VAR_16;
 unsigned int *VAR_17;
 unsigned long VAR_18;


 if (VAR_10 == 128)
  VAR_15 += VAR_11 * sizeof(unsigned int);
 VAR_14 = FUNC_9(VAR_15, VAR_0);
 if (VAR_14 == ((void*)0))
  return ((void*)0);


 VAR_14->revmap_type = VAR_10;
 VAR_14->inval_irq = VAR_13;
 VAR_14->ops = VAR_12;
 VAR_14->of_node = FUNC_3(VAR_9);

 if (VAR_14->ops->match == ((void*)0))
  VAR_14->ops->match = VAR_4;

 FUNC_6(&VAR_5, VAR_18);




 if (VAR_10 == 129) {
  if (VAR_7[0].host != ((void*)0)) {
   FUNC_7(&VAR_5, VAR_18);





   if (VAR_8)
    FUNC_1(VAR_14);
   return ((void*)0);
  }
  VAR_7[0].host = VAR_14;
 }

 FUNC_2(&VAR_14->link, &VAR_6);
 FUNC_7(&VAR_5, VAR_18);


 switch(VAR_10) {
 case 129:

  VAR_14->inval_irq = 0;

  for (VAR_16 = 1; VAR_16 < VAR_3; VAR_16++) {
   VAR_7[VAR_16].hwirq = VAR_16;
   FUNC_5();
   VAR_7[VAR_16].host = VAR_14;
   FUNC_5();


   FUNC_0(VAR_16)->status &= ~VAR_1;





   VAR_12->map(VAR_14, VAR_16, VAR_16);
  }
  break;
 case 128:
  VAR_17 = (unsigned int *)(VAR_14 + 1);
  for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
   VAR_17[VAR_16] = VAR_2;
  VAR_14->revmap_data.linear.size = VAR_11;
  FUNC_5();
  VAR_14->revmap_data.linear.revmap = VAR_17;
  break;
 default:
  break;
 }

 FUNC_4("irq: Allocated host of type %d @0x%p\n", VAR_10, VAR_14);

 return VAR_14;
}
