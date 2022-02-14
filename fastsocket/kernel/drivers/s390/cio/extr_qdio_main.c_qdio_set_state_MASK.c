
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_irq {int state; } ;
typedef enum qdio_irq_states { ____Placeholder_qdio_irq_states } qdio_irq_states ;


 int FUNC_0 (int ,struct qdio_irq*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct qdio_irq *VAR_1,
      enum qdio_irq_states VAR_2)
{
 FUNC_0(VAR_0, VAR_1, "newstate: %1d", VAR_2);

 VAR_1->state = VAR_2;
 FUNC_1();
}
