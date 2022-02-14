
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {void* fl_end; void* fl_start; int fl_type; int fl_flags; scalar_t__ fl_pid; int fl_owner; } ;
struct nlm_lock {scalar_t__ svid; int oh; int fh; int len; int caller; struct file_lock fl; } ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __s64 ;
typedef int __be32 ;
struct TYPE_2__ {int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct file_lock*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *,scalar_t__*) ;
 int * FUNC_6 (int *,int *,int *,int ) ;

__attribute__((used)) static __be32 *
FUNC_7(__be32 *VAR_5, struct nlm_lock *VAR_6)
{
 struct file_lock *VAR_7 = &VAR_6->fl;
 __u64 VAR_8, VAR_9;
 __s64 VAR_10;

 if (!(VAR_5 = FUNC_6(VAR_5, &VAR_6->caller,
         &VAR_6->len, VAR_2))
  || !(VAR_5 = FUNC_1(VAR_5, &VAR_6->fh))
  || !(VAR_5 = FUNC_2(VAR_5, &VAR_6->oh)))
  return ((void*)0);
 VAR_6->svid = FUNC_3(*VAR_5++);

 FUNC_0(VAR_7);
 VAR_7->fl_owner = VAR_4->files;
 VAR_7->fl_pid = (pid_t)VAR_6->svid;
 VAR_7->fl_flags = VAR_0;
 VAR_7->fl_type = VAR_1;
 VAR_5 = FUNC_5(VAR_5, &VAR_9);
 VAR_5 = FUNC_5(VAR_5, &VAR_8);
 VAR_10 = VAR_9 + VAR_8 - 1;

 VAR_7->fl_start = FUNC_4(VAR_9);

 if (VAR_8 == 0 || VAR_10 < 0)
  VAR_7->fl_end = VAR_3;
 else
  VAR_7->fl_end = FUNC_4(VAR_10);
 return VAR_5;
}
