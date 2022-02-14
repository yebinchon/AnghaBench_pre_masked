
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* uuid_t ;
typedef scalar_t__ u_int8_t ;
typedef size_t u_int32_t ;
struct necp_tlv_header {int dummy; } ;
struct necp_fd_data {int proc_pid; } ;
struct necp_client_nexus_parameters {int dummy; } ;
struct necp_client_action_args {size_t buffer_size; scalar_t__ client_id; int client_id_len; scalar_t__ buffer; } ;
struct necp_client {int agent_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct necp_client*) ;
 int FUNC_4 (struct necp_fd_data*) ;
 int FUNC_5 (struct necp_fd_data*) ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__* FUNC_6 (size_t,int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int) ;
 size_t FUNC_8 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_9 (scalar_t__*,size_t) ;
 scalar_t__* FUNC_10 (scalar_t__*,size_t,int *) ;
 int FUNC_11 (struct necp_client*,scalar_t__*) ;
 int FUNC_12 (struct necp_client*,struct necp_client_nexus_parameters*) ;
 struct necp_client* FUNC_13 (struct necp_fd_data*,scalar_t__*) ;
 int FUNC_14 (struct necp_client*,scalar_t__*) ;
 int FUNC_15 (scalar_t__*,scalar_t__*,int ,int ,scalar_t__,struct necp_client_nexus_parameters*,int *,int *) ;
 int FUNC_16 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_17(struct necp_fd_data *VAR_16, struct necp_client_action_args *VAR_17, int *VAR_18)
{
 int VAR_19 = 0;
 struct necp_client *VAR_20 = ((void*)0);
 uuid_t VAR_21;
 bool VAR_22 = VAR_3;
 u_int8_t *VAR_23 = ((void*)0);
 size_t VAR_24 = VAR_17->buffer_size;

 if (VAR_17->client_id == 0 || VAR_17->client_id_len != sizeof(uuid_t) ||
  VAR_17->buffer_size == 0 || VAR_17->buffer == 0) {
  FUNC_2(VAR_4, "necp_client_agent_action invalid parameters");
  VAR_19 = VAR_0;
  goto done;
 }

 VAR_19 = FUNC_7(VAR_17->client_id, VAR_21, sizeof(uuid_t));
 if (VAR_19) {
  FUNC_1(VAR_4, "necp_client_agent_action copyin client_id error (%d)", VAR_19);
  goto done;
 }

 if (VAR_17->buffer_size > VAR_11) {
  FUNC_1(VAR_4, "necp_client_agent_action invalid buffer size (>%u)", VAR_11);
  VAR_19 = VAR_0;
  goto done;
 }

 if ((VAR_23 = FUNC_6(VAR_17->buffer_size, VAR_5, VAR_6 | VAR_7)) == ((void*)0)) {
  FUNC_2(VAR_4, "necp_client_agent_action malloc failed");
  VAR_19 = VAR_2;
  goto done;
 }

 VAR_19 = FUNC_7(VAR_17->buffer, VAR_23, VAR_17->buffer_size);
 if (VAR_19) {
  FUNC_1(VAR_4, "necp_client_agent_action parameters copyin error (%d)", VAR_19);
  goto done;
 }

 FUNC_4(VAR_16);
 VAR_20 = FUNC_13(VAR_16, VAR_21);
 if (VAR_20 != ((void*)0)) {
  size_t VAR_25 = 0;
  while ((VAR_25 + sizeof(struct necp_tlv_header)) <= VAR_24) {
   u_int8_t VAR_26 = FUNC_9(VAR_23, VAR_25);
   u_int32_t VAR_27 = FUNC_8(VAR_23, VAR_25);

   if (VAR_27 > (VAR_24 - (VAR_25 + sizeof(struct necp_tlv_header)))) {

    FUNC_1(VAR_4, "Invalid TLV length (%u)", VAR_27);
    break;
   }

   if (VAR_27 > 0) {
    u_int8_t *VAR_28 = FUNC_10(VAR_23, VAR_25, ((void*)0));
    if (VAR_27 >= sizeof(uuid_t) &&
     VAR_28 != ((void*)0) &&
     (VAR_26 == VAR_9 ||
      VAR_26 == VAR_8 ||
      VAR_26 == VAR_10)) {

      uuid_t VAR_29;
      FUNC_16(VAR_29, VAR_28);
      u_int8_t VAR_30 = 0;
      if (VAR_26 == VAR_9) {
       VAR_30 = VAR_13;
      } else if (VAR_26 == VAR_8) {
       VAR_30 = VAR_12;
      } else if (VAR_26 == VAR_10) {
       VAR_30 = VAR_14;
      }


      if (VAR_26 == VAR_10) {
       if (!FUNC_14(VAR_20, VAR_29)) {
        VAR_19 = VAR_1;
        break;
       }
      }

      struct necp_client_nexus_parameters VAR_31 = {};
      FUNC_12(VAR_20, &VAR_31);

      VAR_19 = FUNC_15(VAR_29,
                 VAR_21,
                 VAR_16->proc_pid,
                 VAR_20->agent_handle,
                 VAR_30,
                 &VAR_31,
                 ((void*)0), ((void*)0));
      if (VAR_19 == 0) {
       VAR_22 = VAR_15;
      } else {
       break;
      }


      if (VAR_26 == VAR_8) {
       FUNC_11(VAR_20, VAR_29);
      }
     }
   }

   VAR_25 += sizeof(struct necp_tlv_header) + VAR_27;
  }

  FUNC_3(VAR_20);
 }
 FUNC_5(VAR_16);

 if (!VAR_22 &&
  VAR_19 == 0) {
  VAR_19 = VAR_1;
 }
done:
 *VAR_18 = VAR_19;
 if (VAR_23 != ((void*)0)) {
  FUNC_0(VAR_23, VAR_5);
  VAR_23 = ((void*)0);
 }

 return (VAR_19);
}
