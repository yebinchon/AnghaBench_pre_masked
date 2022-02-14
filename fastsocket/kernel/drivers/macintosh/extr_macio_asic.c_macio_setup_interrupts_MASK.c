
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned int start; int name; int flags; } ;
struct TYPE_2__ {int dev; struct device_node* node; } ;
struct macio_dev {int n_interrupts; TYPE_1__ ofdev; struct resource* interrupt; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct device_node*,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,struct resource*,int) ;
 int FUNC_3 (struct resource*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct macio_dev *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->ofdev.node;
 unsigned int VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 for (;;) {
  struct resource *VAR_8;

  if (VAR_7 >= VAR_1)
   break;
  VAR_8 = &VAR_3->interrupt[VAR_7];
  VAR_5 = FUNC_1(VAR_4, VAR_6++);
  if (VAR_5 == VAR_2)
   break;
  VAR_8->start = VAR_5;
  VAR_8->flags = VAR_0;
  VAR_8->name = FUNC_0(&VAR_3->ofdev.dev);
  if (FUNC_2(VAR_4, VAR_8, VAR_6 - 1)) {
   FUNC_3(VAR_8, 0, sizeof(struct resource));
   continue;
  } else
   VAR_7++;
 }
 VAR_3->n_interrupts = VAR_7;
}
