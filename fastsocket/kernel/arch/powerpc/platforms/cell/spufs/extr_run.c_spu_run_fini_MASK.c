
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spu_context {int sched_flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* npc_read ) (struct spu_context*) ;int (* status_read ) (struct spu_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;
 int FUNC_4 (int *,struct spu_context*,int ,int ) ;
 int FUNC_5 (struct spu_context*,int ) ;
 int FUNC_6 (struct spu_context*) ;
 int FUNC_7 (struct spu_context*) ;

__attribute__((used)) static int FUNC_8(struct spu_context *VAR_5, u32 *VAR_6,
          u32 *VAR_7)
{
 int VAR_8 = 0;

 FUNC_2(VAR_5);

 *VAR_7 = VAR_5->ops->status_read(VAR_5);
 *VAR_6 = VAR_5->ops->npc_read(VAR_5);

 FUNC_5(VAR_5, VAR_2);
 FUNC_0(VAR_1, &VAR_5->sched_flags);
 FUNC_4(((void*)0), VAR_5, VAR_3, *VAR_7);
 FUNC_3(VAR_5);

 if (FUNC_1(VAR_4))
  VAR_8 = -VAR_0;

 return VAR_8;
}
