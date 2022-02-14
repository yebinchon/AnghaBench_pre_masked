
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ulong ;
struct TYPE_3__ {scalar_t__ expires; int function; void* data; } ;
struct aoedev {void* aoemajor; int aoeminor; int flags; int ref; int ntargets; struct aoedev* next; int rttdev; int rttavg; void* sysminor; int rexmitq; int * factive; void* targets; void* tgt; int * bufpool; TYPE_1__ timer; int skbpool; int lock; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 struct aoedev* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct aoedev*) ;
 scalar_t__ FUNC_6 (void**,void*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,void*) ;

struct aoedev *
FUNC_13(ulong VAR_12, int VAR_13, int VAR_14)
{
 struct aoedev *VAR_15;
 int VAR_16;
 ulong VAR_17;
 ulong VAR_18 = 0;

 FUNC_10(&VAR_9, VAR_17);

 for (VAR_15=VAR_8; VAR_15; VAR_15=VAR_15->next)
  if (VAR_15->aoemajor == VAR_12 && VAR_15->aoeminor == VAR_13) {
   FUNC_8(&VAR_15->lock);
   if (VAR_15->flags & VAR_0) {
    FUNC_11(&VAR_15->lock);
    VAR_15 = ((void*)0);
    goto out;
   }
   VAR_15->ref++;
   FUNC_11(&VAR_15->lock);
   break;
  }
 if (VAR_15 || !VAR_14 || FUNC_6(&VAR_18, VAR_12, VAR_13) < 0)
  goto out;
 VAR_15 = FUNC_4(1, sizeof *VAR_15, VAR_1);
 if (!VAR_15)
  goto out;
 VAR_15->targets = FUNC_4(VAR_4, sizeof(*VAR_15->targets), VAR_1);
 if (!VAR_15->targets) {
  FUNC_5(VAR_15);
  VAR_15 = ((void*)0);
  goto out;
 }
 VAR_15->ntargets = VAR_4;
 FUNC_1(&VAR_15->work, VAR_7);
 FUNC_9(&VAR_15->lock);
 FUNC_7(&VAR_15->skbpool);
 FUNC_3(&VAR_15->timer);
 VAR_15->timer.data = (ulong) VAR_15;
 VAR_15->timer.function = VAR_10;
 VAR_15->timer.expires = VAR_11 + VAR_2;
 FUNC_2(&VAR_15->timer);
 VAR_15->bufpool = ((void*)0);
 VAR_15->tgt = VAR_15->targets;
 VAR_15->ref = 1;
 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  FUNC_0(&VAR_15->factive[VAR_16]);
 FUNC_0(&VAR_15->rexmitq);
 VAR_15->sysminor = VAR_18;
 VAR_15->aoemajor = VAR_12;
 VAR_15->aoeminor = VAR_13;
 VAR_15->rttavg = VAR_5;
 VAR_15->rttdev = VAR_6;
 VAR_15->next = VAR_8;
 VAR_8 = VAR_15;
 out:
 FUNC_12(&VAR_9, VAR_17);
 return VAR_15;
}
