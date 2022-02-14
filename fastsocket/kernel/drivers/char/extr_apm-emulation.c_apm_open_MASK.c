
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; struct apm_user* private_data; } ;
struct apm_user {int writer; int reader; int list; int suser; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct apm_user* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_7, struct file * VAR_8)
{
 struct apm_user *VAR_9;

 FUNC_4();
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_4);
 if (VAR_9) {







  VAR_9->suser = FUNC_0(VAR_0);
  VAR_9->writer = (VAR_8->f_mode & VAR_3) == VAR_3;
  VAR_9->reader = (VAR_8->f_mode & VAR_2) == VAR_2;

  FUNC_1(&VAR_6);
  FUNC_3(&VAR_9->list, &VAR_5);
  FUNC_6(&VAR_6);

  VAR_8->private_data = VAR_9;
 }
 FUNC_5();

 return VAR_9 ? 0 : -VAR_1;
}
