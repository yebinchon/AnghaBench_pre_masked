
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct slic_cmdqueue {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ lock; } ;
struct adapter {scalar_t__ state; int slic_handle_ix; TYPE_2__ cmdq_done; TYPE_2__ cmdq_free; TYPE_2__ cmdq_all; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct adapter*,int*) ;
 int FUNC_3 (struct adapter*) ;
 int* FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_4)
{
 int VAR_5;
 u32 *VAR_6;

 FUNC_0(VAR_4->state == VAR_0);
 FUNC_1(&VAR_4->cmdq_all, 0, sizeof(struct slic_cmdqueue));
 FUNC_1(&VAR_4->cmdq_free, 0, sizeof(struct slic_cmdqueue));
 FUNC_1(&VAR_4->cmdq_done, 0, sizeof(struct slic_cmdqueue));
 FUNC_6(&VAR_4->cmdq_all.lock.lock);
 FUNC_6(&VAR_4->cmdq_free.lock.lock);
 FUNC_6(&VAR_4->cmdq_done.lock.lock);
 FUNC_5(VAR_4);
 VAR_4->slic_handle_ix = 1;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_4(VAR_4);

  FUNC_0(((u32) VAR_6 & 0xFFFFF000) == (u32) VAR_6);

  if (!VAR_6) {
   FUNC_3(VAR_4);
   return VAR_2;
  }
  FUNC_2(VAR_4, VAR_6);
 }
 VAR_4->slic_handle_ix = 1;

 return VAR_3;
}
