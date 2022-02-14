
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_queue {int dummy; } ;
struct ehea_qp {int fw_handle; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,scalar_t__,int) ;
 int FUNC_2 (struct hw_queue*) ;
 void* FUNC_3 (struct hw_queue*) ;
 int FUNC_4 (struct hw_queue*,int,int ,int) ;
 int FUNC_5 (struct hw_queue*) ;
 scalar_t__ FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct ehea_qp *VAR_3, struct hw_queue *VAR_4,
      int VAR_5, int VAR_6, int VAR_7,
      struct ehea_adapter *VAR_8, int VAR_9)
{
 u64 VAR_10, VAR_11;
 int VAR_12, VAR_13;
 void *VAR_14;

 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_0, VAR_6);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_14 = FUNC_3(VAR_4);
  if (!VAR_14) {
   FUNC_0("hw_qpageit_get_inc failed");
   goto out_kill_hwq;
  }
  VAR_11 = FUNC_6(VAR_14);
  VAR_10 = FUNC_1(VAR_8->handle,
          0, VAR_9,
          VAR_3->fw_handle, VAR_11, 1);
  if (VAR_10 < VAR_2) {
   FUNC_0("register_rpage_qp failed");
   goto out_kill_hwq;
  }
 }
 FUNC_2(VAR_4);
 return 0;

out_kill_hwq:
 FUNC_5(VAR_4);
 return -VAR_1;
}
