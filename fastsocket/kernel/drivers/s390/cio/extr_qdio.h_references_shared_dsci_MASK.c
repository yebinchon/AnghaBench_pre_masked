
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {int * dsci; } ;
struct TYPE_2__ {int ind; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct qdio_irq *VAR_2)
{
 return VAR_2->dsci == &VAR_1[VAR_0].ind;
}
