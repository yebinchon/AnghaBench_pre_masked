
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_2__ {scalar_t__ sa_len; } ;
union necp_sockaddr_union {TYPE_1__ sa; } ;
typedef int uid_t ;
typedef void* u_int32_t ;
typedef int u_int16_t ;
struct necp_uuid_id_mapping {int id; } ;
struct necp_string_id_mapping {int id; } ;
struct necp_socket_info {scalar_t__ cred_result; char* domain; int remote_addr; int local_addr; int account_id; int real_application_id; int application_id; void* traffic_class; void* bound_interface_index; int protocol; int uid; int pid; } ;
typedef int * proc_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,union necp_sockaddr_union*,scalar_t__) ;
 int FUNC_1 (struct necp_socket_info*,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int *,struct necp_socket_info*) ;
 int VAR_8 ;
 struct necp_string_id_mapping* FUNC_3 (int *,char*) ;
 struct necp_uuid_id_mapping* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(uuid_t VAR_9, uuid_t VAR_10, char *VAR_11, char *VAR_12, pid_t VAR_13, uid_t VAR_14, u_int16_t VAR_15, u_int32_t VAR_16, u_int32_t VAR_17, union necp_sockaddr_union *VAR_18, union necp_sockaddr_union *VAR_19, proc_t VAR_20, struct necp_socket_info *VAR_21)
{
 FUNC_1(VAR_21, 0, sizeof(struct necp_socket_info));

 VAR_21->pid = VAR_13;
 VAR_21->uid = VAR_14;
 VAR_21->protocol = VAR_15;
 VAR_21->bound_interface_index = VAR_16;
 VAR_21->traffic_class = VAR_17;

 if (VAR_8 & VAR_4 && VAR_20 != ((void*)0)) {
  VAR_21->cred_result = FUNC_5(FUNC_6(VAR_20), VAR_6, 0);
  if (VAR_21->cred_result != 0) {

   FUNC_2(VAR_20, VAR_21);
  }
 }

 if (VAR_8 & VAR_2 && !FUNC_8(VAR_9)) {
  struct necp_uuid_id_mapping *VAR_22 = FUNC_4(VAR_9);
  if (VAR_22) {
   VAR_21->application_id = VAR_22->id;
  }
 }

 if (VAR_8 & VAR_5 && !FUNC_8(VAR_10)) {
  if (FUNC_7(VAR_9, VAR_10) == 0) {
   VAR_21->real_application_id = VAR_21->application_id;
  } else {
   struct necp_uuid_id_mapping *VAR_23 = FUNC_4(VAR_10);
   if (VAR_23) {
    VAR_21->real_application_id = VAR_23->id;
   }
  }
 }

 if (VAR_8 & VAR_1 && VAR_11 != ((void*)0)) {
  struct necp_string_id_mapping *VAR_24 = FUNC_3(&VAR_7, VAR_11);
  if (VAR_24) {
   VAR_21->account_id = VAR_24->id;
  }
 }

 if (VAR_8 & VAR_3) {
  VAR_21->domain = VAR_12;
 }

 if (VAR_8 & VAR_0) {
  if (VAR_18 && VAR_18->sa.sa_len > 0) {
   FUNC_0(&VAR_21->local_addr, VAR_18, VAR_18->sa.sa_len);
  }
  if (VAR_19 && VAR_19->sa.sa_len > 0) {
   FUNC_0(&VAR_21->remote_addr, VAR_19, VAR_19->sa.sa_len);
  }
 }
}
