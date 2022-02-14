
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2 {int irq_nvecs; TYPE_1__* bnx2_napi; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->irq_nvecs; VAR_1++)
  FUNC_0(&VAR_0->bnx2_napi[VAR_1].napi);
}
