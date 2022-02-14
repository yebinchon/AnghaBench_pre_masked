
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_request {int dummy; } ;
struct file_info {int reqlists_lock; } ;


 struct pending_request* FUNC_0 (struct file_info*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct pending_request *FUNC_3(struct file_info *VAR_0)
{
 unsigned long VAR_1;
 struct pending_request *VAR_2;

 FUNC_1(&VAR_0->reqlists_lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->reqlists_lock, VAR_1);
 return VAR_2;
}
