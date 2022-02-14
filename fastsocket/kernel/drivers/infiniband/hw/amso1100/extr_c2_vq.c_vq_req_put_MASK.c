
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_vq_req {scalar_t__ reply_msg; int refcnt; } ;
struct c2_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct c2_vq_req*) ;
 int FUNC_2 (struct c2_dev*,void*) ;

void FUNC_3(struct c2_dev *VAR_0, struct c2_vq_req *VAR_1)
{
 if (FUNC_0(&VAR_1->refcnt)) {
  if (VAR_1->reply_msg != 0)
   FUNC_2(VAR_0,
           (void *) (unsigned long) VAR_1->reply_msg);
  FUNC_1(VAR_1);
 }
}
