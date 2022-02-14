
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct status_desc {int * status_desc_data; } ;
struct qlcnic_host_sds_ring {size_t consumer; int crb_sts_consumer; int num_desc; struct status_desc* desc_head; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,size_t,struct qlcnic_host_sds_ring*) ;
 int FUNC_7 (struct qlcnic_adapter*,int,int) ;
 int FUNC_8 (size_t,int ) ;

void FUNC_9(struct qlcnic_host_sds_ring *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = VAR_2->adapter;
 struct status_desc *VAR_4;
 u64 VAR_5;
 int VAR_6, VAR_7, VAR_8;

 u32 VAR_9 = VAR_2->consumer;

 VAR_4 = &VAR_2->desc_head[VAR_9];
 VAR_5 = FUNC_2(VAR_4->status_desc_data[0]);

 if (!(VAR_5 & VAR_0))
  return;

 VAR_8 = FUNC_3(VAR_5);
 VAR_7 = FUNC_4(VAR_5);
 switch (VAR_7) {
 case 128:
  FUNC_6(VAR_8, VAR_9, VAR_2);
  break;
 default:
  VAR_6 = FUNC_5(VAR_5);
  FUNC_7(VAR_3, VAR_6, VAR_5);
  break;
 }

 for (; VAR_8 > 0; VAR_8--) {
  VAR_4 = &VAR_2->desc_head[VAR_9];
  VAR_4->status_desc_data[0] = FUNC_0(VAR_1);
  VAR_9 = FUNC_1(VAR_9, VAR_2->num_desc);
 }

 VAR_2->consumer = VAR_9;
 FUNC_8(VAR_9, VAR_2->crb_sts_consumer);
}
