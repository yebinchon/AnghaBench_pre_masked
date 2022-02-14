
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int dummy; } ;
struct eventpoll {struct user_struct* user; int ovflist; int rbr; int rdllist; int poll_wait; int wq; int mtx; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct user_struct*) ;
 struct user_struct* FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct eventpoll* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct eventpoll **VAR_4)
{
 int VAR_5;
 struct user_struct *VAR_6;
 struct eventpoll *VAR_7;

 VAR_6 = FUNC_2();
 VAR_5 = -VAR_0;
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (FUNC_7(!VAR_7))
  goto free_uid;

 FUNC_6(&VAR_7->lock);
 FUNC_5(&VAR_7->mtx);
 FUNC_3(&VAR_7->wq);
 FUNC_3(&VAR_7->poll_wait);
 FUNC_0(&VAR_7->rdllist);
 VAR_7->rbr = VAR_3;
 VAR_7->ovflist = VAR_1;
 VAR_7->user = VAR_6;

 *VAR_4 = VAR_7;

 return 0;

free_uid:
 FUNC_1(VAR_6);
 return VAR_5;
}
