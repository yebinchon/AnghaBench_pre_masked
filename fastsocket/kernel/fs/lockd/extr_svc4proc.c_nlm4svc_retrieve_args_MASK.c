
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int * fl_lmops; scalar_t__ fl_owner; int fl_file; } ;
struct nlm_lock {TYPE_1__ fl; int fh; int len; int caller; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int f_file; } ;
struct nlm_args {scalar_t__ monitor; struct nlm_lock lock; } ;
typedef scalar_t__ fl_owner_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct nlm_file**,int *) ;
 int FUNC_1 (struct nlm_host*) ;
 int VAR_1 ;
 struct nlm_host* FUNC_2 (struct svc_rqst*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct nlm_host*) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_3, struct nlm_args *VAR_4,
   struct nlm_host **VAR_5, struct nlm_file **VAR_6)
{
 struct nlm_host *VAR_7 = ((void*)0);
 struct nlm_file *VAR_8 = ((void*)0);
 struct nlm_lock *VAR_9 = &VAR_4->lock;
 __be32 VAR_10 = 0;


 if (!VAR_2)
  return VAR_0;


 if (!(VAR_7 = FUNC_2(VAR_3, VAR_9->caller, VAR_9->len))
  || (VAR_4->monitor && FUNC_3(VAR_7) < 0))
  goto no_locks;
 *VAR_5 = VAR_7;


 if (VAR_6 != ((void*)0)) {
  if ((VAR_10 = FUNC_0(VAR_3, &VAR_8, &VAR_9->fh)) != 0)
   goto no_locks;
  *VAR_6 = VAR_8;


  VAR_9->fl.fl_file = VAR_8->f_file;
  VAR_9->fl.fl_owner = (fl_owner_t) VAR_7;
  VAR_9->fl.fl_lmops = &VAR_1;
 }

 return 0;

no_locks:
 FUNC_1(VAR_7);
  if (VAR_10)
  return VAR_10;
 return VAR_0;
}
