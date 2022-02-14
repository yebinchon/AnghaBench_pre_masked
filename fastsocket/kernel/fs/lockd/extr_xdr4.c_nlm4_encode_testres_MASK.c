
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {scalar_t__ fl_type; scalar_t__ fl_start; scalar_t__ fl_end; } ;
struct TYPE_2__ {scalar_t__ svid; int oh; struct file_lock fl; } ;
struct nlm_res {TYPE_1__ lock; int status; int cookie; } ;
typedef int s64 ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int *,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __be32 *
FUNC_6(__be32 *VAR_5, struct nlm_res *VAR_6)
{
 s64 VAR_7, VAR_8;

 FUNC_0("xdr: before encode_testres (p %p resp %p)\n", VAR_5, VAR_6);
 if (!(VAR_5 = FUNC_3(VAR_5, &VAR_6->cookie)))
  return ((void*)0);
 *VAR_5++ = VAR_6->status;

 if (VAR_6->status == VAR_2) {
  struct file_lock *VAR_9 = &VAR_6->lock.fl;

  *VAR_5++ = (VAR_9->fl_type == VAR_0)? VAR_4 : VAR_3;
  *VAR_5++ = FUNC_1(VAR_6->lock.svid);


  if (!(VAR_5 = FUNC_5(VAR_5, &VAR_6->lock.oh)))
   return ((void*)0);

  VAR_7 = FUNC_2(VAR_9->fl_start);
  if (VAR_9->fl_end == VAR_1)
   VAR_8 = 0;
  else
   VAR_8 = FUNC_2(VAR_9->fl_end - VAR_9->fl_start + 1);

  VAR_5 = FUNC_4(VAR_5, VAR_7);
  VAR_5 = FUNC_4(VAR_5, VAR_8);
  FUNC_0("xdr: encode_testres (status %u pid %d type %d start %Ld end %Ld)\n",
   &VAR_6->status, (int)VAR_6->lock.svid, VAR_9->fl_type,
   (long long)VAR_9->fl_start, (long long)VAR_9->fl_end);
 }

 FUNC_0("xdr: after encode_testres (p %p resp %p)\n", VAR_5, VAR_6);
 return VAR_5;
}
