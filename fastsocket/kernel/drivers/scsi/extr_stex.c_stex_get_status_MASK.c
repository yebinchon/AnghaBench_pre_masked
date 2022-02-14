
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_msg {int dummy; } ;
struct st_hba {int status_tail; int sts_count; struct status_msg* status_buffer; } ;



__attribute__((used)) static struct status_msg *FUNC_0(struct st_hba *VAR_0)
{
 struct status_msg *VAR_1 = VAR_0->status_buffer + VAR_0->status_tail;

 ++VAR_0->status_tail;
 VAR_0->status_tail %= VAR_0->sts_count+1;

 return VAR_1;
}
