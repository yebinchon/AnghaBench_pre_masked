
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void c2wr_hdr ;
struct TYPE_2__ {void* host; } ;
struct c2_mq {scalar_t__ magic; scalar_t__ type; int priv; int msg_size; TYPE_1__ msg_pool; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct c2_mq*) ;

void *FUNC_3(struct c2_mq *VAR_3)
{
 FUNC_0(VAR_3->magic != VAR_1);
 FUNC_0(VAR_3->type != VAR_0);

 if (FUNC_2(VAR_3)) {
  return ((void*)0);
 } else {
  return VAR_3->msg_pool.host + VAR_3->priv * VAR_3->msg_size;

 }
}
