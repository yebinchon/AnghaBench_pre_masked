
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int irq_cnt; TYPE_1__* napi; int dev; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int ,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->dev, &VAR_2->napi[0].napi, VAR_0, 64);
 for (VAR_3 = 1; VAR_3 < VAR_2->irq_cnt; VAR_3++)
  FUNC_0(VAR_2->dev, &VAR_2->napi[VAR_3].napi, VAR_1, 64);
}
