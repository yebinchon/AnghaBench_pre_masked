
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int8_t ;
typedef int u_int32_t ;
struct necp_packet_header {int message_id; void* flags; void* packet_type; } ;



__attribute__((used)) static u_int8_t *
FUNC_0(u_int8_t *VAR_0, u_int8_t VAR_1, u_int8_t VAR_2, u_int32_t VAR_3)
{
 ((struct necp_packet_header *)(void *)VAR_0)->packet_type = VAR_1;
 ((struct necp_packet_header *)(void *)VAR_0)->flags = VAR_2;
 ((struct necp_packet_header *)(void *)VAR_0)->message_id = VAR_3;
 return (VAR_0 + sizeof(struct necp_packet_header));
}
