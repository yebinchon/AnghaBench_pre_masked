
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_vq_req {int refcnt; scalar_t__ reply_msg; } ;
struct c2_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct c2_vq_req*) ;

void FUNC_2(struct c2_dev *VAR_0, struct c2_vq_req *VAR_1)
{
 VAR_1->reply_msg = 0;
 if (FUNC_0(&VAR_1->refcnt)) {
  FUNC_1(VAR_1);
 }
}
