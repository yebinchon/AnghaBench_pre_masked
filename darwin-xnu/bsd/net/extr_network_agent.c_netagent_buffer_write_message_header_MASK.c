
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int8_t ;
typedef void* u_int32_t ;
struct netagent_message_header {void* message_payload_length; void* message_error; void* message_id; void* message_flags; void* message_type; } ;



__attribute__((used)) static u_int8_t *
FUNC_0(u_int8_t *VAR_0, u_int8_t VAR_1, u_int8_t VAR_2,
          u_int32_t VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{
 ((struct netagent_message_header *)(void *)VAR_0)->message_type = VAR_1;
 ((struct netagent_message_header *)(void *)VAR_0)->message_flags = VAR_2;
 ((struct netagent_message_header *)(void *)VAR_0)->message_id = VAR_3;
 ((struct netagent_message_header *)(void *)VAR_0)->message_error = VAR_4;
 ((struct netagent_message_header *)(void *)VAR_0)->message_payload_length = VAR_5;
 return (VAR_0 + sizeof(struct netagent_message_header));
}
