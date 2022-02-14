
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hv_connection_id {int dummy; } hv_connection_id ;
typedef int u64 ;
typedef int u16 ;
struct hv_input_post_message {int message_type; size_t payload_size; scalar_t__ payload; union hv_connection_id connectionid; } ;
typedef enum hv_message_type { ____Placeholder_hv_message_type } hv_message_type ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,struct hv_input_post_message*,int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (void*,void*,size_t) ;

int FUNC_5(union hv_connection_id VAR_6,
    enum hv_message_type VAR_7,
    void *VAR_8, size_t VAR_9)
{
 struct aligned_input {
  u64 alignment8;
  struct hv_input_post_message msg;
 };

 struct hv_input_post_message *VAR_10;
 u16 VAR_11;
 unsigned long VAR_12;

 if (VAR_9 > VAR_5)
  return -VAR_0;

 VAR_12 = (unsigned long)FUNC_3(sizeof(struct aligned_input), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_10 = (struct hv_input_post_message *)
   (FUNC_0(VAR_12, VAR_4));

 VAR_10->connectionid = VAR_6;
 VAR_10->message_type = VAR_7;
 VAR_10->payload_size = VAR_9;
 FUNC_4((void *)VAR_10->payload, VAR_8, VAR_9);

 VAR_11 = FUNC_1(VAR_3, VAR_10, ((void*)0))
  & 0xFFFF;

 FUNC_2((void *)VAR_12);

 return VAR_11;
}
