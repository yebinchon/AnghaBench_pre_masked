
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_res {scalar_t__ status; } ;
struct nlm_rqst {int a_count; struct nlm_res a_res; struct nlm_host* a_host; } ;
struct nlm_host {int h_rwsem; } ;
struct file_lock {unsigned char fl_flags; int fl_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct nlm_rqst*) ;
 int FUNC_5 (int ,struct nlm_rqst*,int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct nlm_rqst *VAR_7, struct file_lock *VAR_8)
{
 struct nlm_host *VAR_9 = VAR_7->a_host;
 struct nlm_res *VAR_10 = &VAR_7->a_res;
 int VAR_11;
 unsigned char VAR_12 = VAR_8->fl_flags;






 VAR_8->fl_flags |= VAR_2;
 FUNC_2(&VAR_9->h_rwsem);
 VAR_11 = FUNC_1(VAR_8);
 FUNC_7(&VAR_9->h_rwsem);
 VAR_8->fl_flags = VAR_12;
 if (VAR_11 == -VAR_0) {
  VAR_11 = 0;
  goto out;
 }

 FUNC_0(&VAR_7->a_count);
 VAR_11 = FUNC_5(FUNC_3(VAR_8->fl_file), VAR_7,
   VAR_3, &VAR_6);
 if (VAR_11 < 0)
  goto out;

 if (VAR_10->status == VAR_4)
  goto out;

 if (VAR_10->status != VAR_5)
  FUNC_6("lockd: unexpected unlock status: %d\n", VAR_10->status);

 VAR_11 = -VAR_1;
out:
 FUNC_4(VAR_7);
 return VAR_11;
}
