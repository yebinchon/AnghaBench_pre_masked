
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int wbox_fasync; int wbox_wq; } ;
struct spu {struct spu_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct spu *VAR_2)
{
 struct spu_context *VAR_3 = VAR_2->ctx;

 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->wbox_wq);
 FUNC_0(&VAR_3->wbox_fasync, VAR_1, VAR_0);
}
