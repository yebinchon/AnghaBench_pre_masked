
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_user_sdma_queue {int sent_counter; } ;



u32 FUNC_0(const struct qib_user_sdma_queue *VAR_0)
{
 return VAR_0 ? VAR_0->sent_counter : 0;
}
