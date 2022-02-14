
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_request {int list; struct file_info* file_info; } ;
struct file_info {int wait_complete; int req_complete; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pending_request *VAR_0)
{
 struct file_info *VAR_1 = VAR_0->file_info;

 FUNC_0(&VAR_0->list, &VAR_1->req_complete);
  FUNC_1(&VAR_1->wait_complete);
}
