
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf_count; } ;
struct TYPE_4__ {int buf_count; } ;
struct TYPE_6__ {TYPE_2__ init_pool; TYPE_1__ in_buf_pool; } ;
struct qeth_card {scalar_t__ state; TYPE_3__ qdio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;

int FUNC_4(struct qeth_card *VAR_4, int VAR_5)
{
 FUNC_0(VAR_3, 2, "realcbp");

 if ((VAR_4->state != VAR_0) &&
     (VAR_4->state != VAR_1))
  return -VAR_2;


 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 VAR_4->qdio.in_buf_pool.buf_count = VAR_5;
 VAR_4->qdio.init_pool.buf_count = VAR_5;
 return FUNC_1(VAR_4);
}
