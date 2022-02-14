
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msi; } ;
struct bnx2_napi {int napi; TYPE_1__ status_blk; struct bnx2* bp; } ;
struct bnx2 {int intr_sem; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_4, void *VAR_5)
{
 struct bnx2_napi *VAR_6 = VAR_5;
 struct bnx2 *VAR_7 = VAR_6->bp;

 FUNC_3(VAR_6->status_blk.msi);
 FUNC_0(VAR_7, VAR_0,
  VAR_2 |
  VAR_1);


 if (FUNC_4(FUNC_1(&VAR_7->intr_sem) != 0))
  return VAR_3;

 FUNC_2(&VAR_6->napi);

 return VAR_3;
}
