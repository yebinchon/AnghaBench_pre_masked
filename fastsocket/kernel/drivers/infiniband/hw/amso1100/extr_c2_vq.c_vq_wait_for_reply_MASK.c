
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_vq_req {int reply_ready; int wait_object; } ;
struct c2_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct c2_dev *VAR_2, struct c2_vq_req *VAR_3)
{
 if (!FUNC_1(VAR_3->wait_object,
    FUNC_0(&VAR_3->reply_ready),
    60*VAR_1))
  return -VAR_0;

 return 0;
}
