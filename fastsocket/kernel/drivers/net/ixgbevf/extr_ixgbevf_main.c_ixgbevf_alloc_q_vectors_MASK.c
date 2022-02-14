
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_q_vector {int v_idx; int napi; struct ixgbevf_adapter* adapter; } ;
struct ixgbevf_adapter {int num_msix_vectors; struct ixgbevf_q_vector** q_vector; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbevf_q_vector*) ;
 struct ixgbevf_q_vector* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ixgbevf_adapter *VAR_4)
{
 int VAR_5, VAR_6;
 struct ixgbevf_q_vector *VAR_7;

 VAR_6 = VAR_4->num_msix_vectors - VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_1(sizeof(struct ixgbevf_q_vector), VAR_1);
  if (!VAR_7)
   goto err_out;
  VAR_7->adapter = VAR_4;
  VAR_7->v_idx = VAR_5;
  FUNC_2(VAR_4->netdev, &VAR_7->napi,
          VAR_3, 64);
  VAR_4->q_vector[VAR_5] = VAR_7;
 }

 return 0;

err_out:
 while (VAR_5) {
  VAR_5--;
  VAR_7 = VAR_4->q_vector[VAR_5];
  FUNC_3(&VAR_7->napi);
  FUNC_0(VAR_7);
  VAR_4->q_vector[VAR_5] = ((void*)0);
 }
 return -VAR_0;
}
