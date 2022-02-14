
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int irq_sync; int irq_cnt; TYPE_1__* napi; } ;
struct TYPE_2__ {int irq_vec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->irq_sync);

 VAR_0->irq_sync = 1;
 FUNC_1();

 for (VAR_1 = 0; VAR_1 < VAR_0->irq_cnt; VAR_1++)
  FUNC_2(VAR_0->napi[VAR_1].irq_vec);
}
