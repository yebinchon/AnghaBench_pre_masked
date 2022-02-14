
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fl_type; int fl_end; int fl_start; } ;
struct TYPE_5__ {TYPE_1__ fl; } ;
struct TYPE_6__ {int status; TYPE_2__ lock; } ;
struct nlm_rqst {TYPE_3__ a_res; } ;
struct file_lock {int fl_pid; int fl_type; int fl_end; int fl_start; int fl_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct nlm_rqst*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct nlm_rqst*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nlm_rqst *VAR_2, struct file_lock *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(FUNC_0(VAR_3->fl_file), VAR_2, VAR_1);
 if (VAR_4 < 0)
  goto out;

 switch (VAR_2->a_res.status) {
  case 129:
   VAR_3->fl_type = VAR_0;
   break;
  case 128:



   VAR_3->fl_start = VAR_2->a_res.lock.fl.fl_start;
   VAR_3->fl_end = VAR_2->a_res.lock.fl.fl_end;
   VAR_3->fl_type = VAR_2->a_res.lock.fl.fl_type;
   VAR_3->fl_pid = 0;
   break;
  default:
   VAR_4 = FUNC_2(VAR_2->a_res.status);
 }
out:
 FUNC_1(VAR_2);
 return VAR_4;
}
