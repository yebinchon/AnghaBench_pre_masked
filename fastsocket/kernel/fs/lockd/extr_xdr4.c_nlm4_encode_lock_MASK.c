
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; } ;
struct nlm_lock {int svid; int oh; int fh; int caller; struct file_lock fl; } ;
typedef scalar_t__ __s64 ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static __be32 *
FUNC_6(__be32 *VAR_2, struct nlm_lock *VAR_3)
{
 struct file_lock *VAR_4 = &VAR_3->fl;
 __s64 VAR_5, VAR_6;

 if (!(VAR_2 = FUNC_5(VAR_2, VAR_3->caller))
  || !(VAR_2 = FUNC_2(VAR_2, &VAR_3->fh))
  || !(VAR_2 = FUNC_3(VAR_2, &VAR_3->oh)))
  return ((void*)0);

 if (VAR_4->fl_start > VAR_0
  || (VAR_4->fl_end > VAR_0 && VAR_4->fl_end != VAR_1))
  return ((void*)0);

 *VAR_2++ = FUNC_0(VAR_3->svid);

 VAR_5 = FUNC_1(VAR_4->fl_start);
 if (VAR_4->fl_end == VAR_1)
  VAR_6 = 0;
 else
  VAR_6 = FUNC_1(VAR_4->fl_end - VAR_4->fl_start + 1);

 VAR_2 = FUNC_4(VAR_2, VAR_5);
 VAR_2 = FUNC_4(VAR_2, VAR_6);

 return VAR_2;
}
