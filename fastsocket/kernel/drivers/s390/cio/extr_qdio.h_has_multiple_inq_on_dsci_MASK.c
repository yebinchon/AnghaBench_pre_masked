
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_irq {int nr_input_qs; } ;



__attribute__((used)) static inline int FUNC_0(struct qdio_irq *VAR_0)
{
 return VAR_0->nr_input_qs > 1;
}
