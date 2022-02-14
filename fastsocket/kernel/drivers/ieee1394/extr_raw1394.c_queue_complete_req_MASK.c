
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_request {struct file_info* file_info; } ;
struct file_info {int reqlists_lock; } ;


 int FUNC_0 (struct pending_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct pending_request *VAR_0)
{
 unsigned long VAR_1;
 struct file_info *VAR_2 = VAR_0->file_info;

 FUNC_1(&VAR_2->reqlists_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_2->reqlists_lock, VAR_1);
}
