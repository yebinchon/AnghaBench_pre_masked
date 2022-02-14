
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int flags; TYPE_1__* ops; int prio; scalar_t__ spu; } ;
struct spu {int dummy; } ;
struct TYPE_2__ {unsigned long (* runcntl_read ) (struct spu_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spu*,struct spu_context*) ;
 int VAR_4 ;
 struct spu* FUNC_1 (struct spu_context*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct spu_context*) ;
 struct spu* FUNC_5 (struct spu_context*) ;
 int FUNC_6 (struct spu_context*) ;
 int FUNC_7 (struct spu_context*,int ) ;
 unsigned long FUNC_8 (struct spu_context*) ;

int FUNC_9(struct spu_context *VAR_5, unsigned long VAR_6)
{
 struct spu *VAR_7;







 if (VAR_5->spu)
  return 0;

spu_activate_top:
 if (FUNC_3(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5);




 if (!VAR_7 && FUNC_2(VAR_5->prio))
  VAR_7 = FUNC_1(VAR_5);
 if (VAR_7) {
  unsigned long VAR_8;

  VAR_8 = VAR_5->ops->runcntl_read(VAR_5);
  FUNC_0(VAR_7, VAR_5);
  if (VAR_8 & VAR_2)
   FUNC_7(VAR_5, VAR_3);

  return 0;
 }

 if (VAR_5->flags & VAR_1) {
  FUNC_6(VAR_5);
  goto spu_activate_top;
 }

 FUNC_4(VAR_5);

 return 0;
}
