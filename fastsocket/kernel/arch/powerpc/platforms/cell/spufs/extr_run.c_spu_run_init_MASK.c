
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spu_context {int flags; scalar_t__ state; int sched_flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* status_read ) (struct spu_context*) ;unsigned long (* runcntl_read ) (struct spu_context*) ;int (* runcntl_write ) (struct spu_context*,unsigned long) ;int (* npc_write ) (struct spu_context*,int ) ;int (* privcntl_write ) (struct spu_context*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct spu_context*,int ) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*,int ) ;
 int FUNC_4 (struct spu_context*) ;
 unsigned long FUNC_5 (struct spu_context*) ;
 int FUNC_6 (struct spu_context*,unsigned long) ;
 int FUNC_7 (struct spu_context*,int ) ;
 int FUNC_8 (struct spu_context*,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct spu_context *VAR_12, u32 *VAR_13)
{
 unsigned long VAR_14 = VAR_5;
 int VAR_15;

 FUNC_3(VAR_12, VAR_9);





 if (VAR_12->flags & VAR_1) {
  if (VAR_12->state == VAR_7) {
   VAR_15 = FUNC_1(VAR_12, 0);
   if (VAR_15)
    return VAR_15;
  }
 }




 if (VAR_12->flags & VAR_0) {
  if (!(VAR_12->ops->status_read(VAR_12) & VAR_8)) {
   VAR_15 = FUNC_2(VAR_12);
   if (VAR_15)
    return VAR_15;
  }





  VAR_14 = VAR_12->ops->runcntl_read(VAR_12) &
   (VAR_5 | VAR_4);
  if (VAR_14 == 0)
   VAR_14 = VAR_5;
 } else {
  unsigned long VAR_16;

  if (FUNC_9(VAR_11))
   VAR_16 = VAR_3;
  else
   VAR_16 = VAR_2;

  VAR_12->ops->privcntl_write(VAR_12, VAR_16);
  VAR_12->ops->npc_write(VAR_12, *VAR_13);
 }

 VAR_12->ops->runcntl_write(VAR_12, VAR_14);

 if (VAR_12->flags & VAR_1) {
  FUNC_3(VAR_12, VAR_10);
 } else {

  if (VAR_12->state == VAR_7) {
   VAR_15 = FUNC_1(VAR_12, 0);
   if (VAR_15)
    return VAR_15;
  } else {
   FUNC_3(VAR_12, VAR_10);
  }
 }

 FUNC_0(VAR_6, &VAR_12->sched_flags);
 return 0;
}
