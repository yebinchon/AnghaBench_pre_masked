
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct necp_tlv_header {int dummy; } ;
struct necp_client_result_netagent {int netagent_uuid; } ;
struct necp_client {size_t result_length; scalar_t__* result; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__*,size_t,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct necp_client *VAR_1, uuid_t VAR_2)
{
 size_t VAR_3 = 0;

 u_int8_t *VAR_4 = VAR_1->result;
 while ((VAR_3 + sizeof(struct necp_tlv_header)) <= VAR_1->result_length) {
  u_int8_t VAR_5 = FUNC_3(VAR_4, VAR_3);
  u_int32_t VAR_6 = FUNC_2(VAR_4, VAR_3);

  size_t VAR_7 = (sizeof(struct necp_tlv_header) + VAR_6);
  if (VAR_5 == VAR_0 &&
   VAR_6 == sizeof(struct necp_client_result_netagent) &&
   (VAR_3 + VAR_7) <= VAR_1->result_length) {
   struct necp_client_result_netagent *VAR_8 = ((struct necp_client_result_netagent *)(void *)
               FUNC_4(VAR_4, VAR_3, ((void*)0)));
   if (FUNC_5(VAR_8->netagent_uuid, VAR_2) == 0) {



    FUNC_0(VAR_4 + VAR_3,
      VAR_4 + VAR_3 + VAR_7,
      VAR_1->result_length - (VAR_3 + VAR_7));
    VAR_1->result_length -= VAR_7;
    FUNC_1(VAR_4 + VAR_1->result_length, 0, sizeof(VAR_1->result) - VAR_1->result_length);
    continue;
   }
  }

  VAR_3 += VAR_7;
 }
}
