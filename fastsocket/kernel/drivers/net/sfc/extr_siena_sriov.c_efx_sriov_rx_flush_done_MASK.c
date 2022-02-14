
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_vf {int flush_waitq; int rxq_count; int rxq_mask; int rxq_retry_count; int rxq_retry_mask; } ;
struct efx_nic {int dummy; } ;
typedef int efx_qword_t ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct efx_vf*) ;
 scalar_t__ FUNC_4 (struct efx_nic*,unsigned int,struct efx_vf**,unsigned int*) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct efx_nic *VAR_2, efx_qword_t *VAR_3)
{
 struct efx_vf *VAR_4;
 unsigned VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_0(*VAR_3, VAR_0);
 VAR_5 = FUNC_0(*VAR_3,
        VAR_1);
 if (FUNC_4(VAR_2, VAR_6, &VAR_4, &VAR_7))
  return;
 if (!FUNC_6(VAR_7, VAR_4->rxq_mask))
  return;

 if (VAR_5) {
  FUNC_5(VAR_7, VAR_4->rxq_retry_mask);
  FUNC_2(&VAR_4->rxq_retry_count);
 } else {
  FUNC_1(VAR_7, VAR_4->rxq_mask);
  --VAR_4->rxq_count;
 }
 if (FUNC_3(VAR_4))
  FUNC_7(&VAR_4->flush_waitq);
}
