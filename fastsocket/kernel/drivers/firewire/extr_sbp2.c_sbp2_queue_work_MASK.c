
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp2_logical_unit {TYPE_1__* tgt; int work; } ;
struct TYPE_2__ {int kref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct sbp2_logical_unit *VAR_1, unsigned long VAR_2)
{
 FUNC_0(&VAR_1->tgt->kref);
 if (!FUNC_1(VAR_0, &VAR_1->work, VAR_2))
  FUNC_2(VAR_1->tgt);
}
