
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slice_data {int* level_to_irq; } ;
struct hub_data {int irq_alloc_mask; } ;
struct TYPE_2__ {struct slice_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 struct hub_data* FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static inline int FUNC_5(int VAR_2, int VAR_3)
{
 struct hub_data *VAR_4 = FUNC_3(FUNC_1(VAR_2));
 struct slice_data *VAR_5 = VAR_1[VAR_2].data;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->irq_alloc_mask, VAR_0);
 if (VAR_6 >= VAR_0)
  FUNC_4("Cpu %d flooded with devices\n", VAR_2);

 FUNC_0(VAR_6, VAR_4->irq_alloc_mask);
 VAR_5->level_to_irq[VAR_6] = VAR_3;

 return VAR_6;
}
