
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_wait {int b_list; int b_status; int b_wait; struct file_lock* b_lock; struct nlm_host* b_host; } ;
struct nlm_host {int dummy; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nlm_wait* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

struct nlm_wait *FUNC_3(struct nlm_host *VAR_3, struct file_lock *VAR_4)
{
 struct nlm_wait *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 != ((void*)0)) {
  VAR_5->b_host = VAR_3;
  VAR_5->b_lock = VAR_4;
  FUNC_0(&VAR_5->b_wait);
  VAR_5->b_status = VAR_2;
  FUNC_2(&VAR_5->b_list, &VAR_1);
 }
 return VAR_5;
}
