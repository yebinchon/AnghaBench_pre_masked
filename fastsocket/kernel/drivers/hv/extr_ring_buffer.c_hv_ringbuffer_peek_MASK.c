
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {int ring_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hv_ring_buffer_info*,void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hv_ring_buffer_info*) ;
 int FUNC_2 (struct hv_ring_buffer_info*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct hv_ring_buffer_info *VAR_1,
     void *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_3(&VAR_1->ring_lock, VAR_7);

 FUNC_2(VAR_1,
    &VAR_5,
    &VAR_4);


 if (VAR_5 < VAR_3) {

  FUNC_4(&VAR_1->ring_lock, VAR_7);

  return -VAR_0;
 }


 VAR_6 = FUNC_1(VAR_1);

 VAR_6 = FUNC_0(VAR_1,
      VAR_2,
      VAR_3,
      VAR_6);

 FUNC_4(&VAR_1->ring_lock, VAR_7);

 return 0;
}
