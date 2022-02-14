
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int irq_cnt; TYPE_1__* napi; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->irq_cnt - 1; VAR_1 >= 0; VAR_1--)
  FUNC_0(&VAR_0->napi[VAR_1].napi);
}
