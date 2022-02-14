
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct socket {int so_flags; int so_cred; int last_uuid; int e_uuid; int so_traffic_class; int last_pid; int e_pid; } ;
struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_port; void* sin6_family; } ;
struct sockaddr_in {int sin_len; int sin_addr; int sin_port; void* sin_family; } ;
struct sockaddr {int sa_len; } ;
struct necp_uuid_id_mapping {int id; } ;
struct necp_string_id_mapping {int id; } ;
struct necp_socket_info {scalar_t__ cred_result; int remote_addr; int local_addr; scalar_t__ bound_interface_index; int domain; int account_id; int real_application_id; int application_id; scalar_t__ protocol; int traffic_class; int uid; int pid; } ;
struct TYPE_3__ {int inp_domain; int * inp_account; } ;
struct inpcb {int inp_flags2; int inp_flags; int inp_vflag; struct sockaddr in6p_faddr; int inp_fport; struct sockaddr in6p_laddr; int inp_lport; struct sockaddr inp_faddr; struct sockaddr inp_laddr; TYPE_2__* inp_boundifp; TYPE_1__ inp_necp_attributes; scalar_t__ inp_ip_p; struct socket* inp_socket; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {scalar_t__ if_index; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sockaddr*,int) ;
 int FUNC_3 (struct necp_socket_info*,int ,int) ;
 int VAR_18 ;
 int FUNC_4 (int *,struct necp_socket_info*) ;
 int VAR_19 ;
 struct necp_string_id_mapping* FUNC_5 (int *,int *) ;
 struct necp_uuid_id_mapping* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct inpcb *VAR_20, struct sockaddr *VAR_21, struct sockaddr *VAR_22, u_int32_t VAR_23, struct necp_socket_info *VAR_24)
{
 struct socket *VAR_25 = ((void*)0);

 FUNC_3(VAR_24, 0, sizeof(struct necp_socket_info));

 VAR_25 = VAR_20->inp_socket;

 if (VAR_19 & VAR_11) {
  VAR_24->pid = ((VAR_25->so_flags & VAR_17) ? VAR_25->e_pid : VAR_25->last_pid);
 }

 if (VAR_19 & VAR_15) {
  VAR_24->uid = FUNC_1(VAR_25->so_cred);
 }

 if (VAR_19 & VAR_14) {
  VAR_24->traffic_class = VAR_25->so_traffic_class;
 }

 if (VAR_19 & VAR_12) {
  if (VAR_20->inp_ip_p) {
   VAR_24->protocol = VAR_20->inp_ip_p;
  } else {
   VAR_24->protocol = FUNC_0(VAR_25);
  }
 }

 if (VAR_20->inp_flags2 & VAR_2 && VAR_19 & VAR_8) {
  struct necp_uuid_id_mapping *VAR_26 = FUNC_6(((VAR_25->so_flags & VAR_17) ? VAR_25->e_uuid : VAR_25->last_uuid));
  if (VAR_26) {
   VAR_24->application_id = VAR_26->id;
  }

  if (!(VAR_25->so_flags & VAR_17)) {
   VAR_24->real_application_id = VAR_24->application_id;
  } else if (VAR_19 & VAR_13) {
   struct necp_uuid_id_mapping *VAR_27 = FUNC_6(VAR_25->last_uuid);
   if (VAR_27) {
    VAR_24->real_application_id = VAR_27->id;
   }
  }

  if (VAR_19 & VAR_10) {
   VAR_24->cred_result = FUNC_7(VAR_25->so_cred, VAR_16, 0);
   if (VAR_24->cred_result != 0) {

    FUNC_4(((void*)0), VAR_24);
   }
  }
 }

 if (VAR_19 & VAR_7 && VAR_20->inp_necp_attributes.inp_account != ((void*)0)) {
  struct necp_string_id_mapping *VAR_28 = FUNC_5(&VAR_18, VAR_20->inp_necp_attributes.inp_account);
  if (VAR_28) {
   VAR_24->account_id = VAR_28->id;
  }
 }

 if (VAR_19 & VAR_9) {
  VAR_24->domain = VAR_20->inp_necp_attributes.inp_domain;
 }

 if (VAR_23) {
  VAR_24->bound_interface_index = VAR_23;
 } else {
  if ((VAR_20->inp_flags & VAR_3) && VAR_20->inp_boundifp) {
   VAR_24->bound_interface_index = VAR_20->inp_boundifp->if_index;
  }
 }

 if (VAR_19 & VAR_6) {
  if (VAR_20->inp_vflag & VAR_4) {
   if (VAR_21) {
    if (VAR_21->sa_len <= sizeof(struct sockaddr_in)) {
     FUNC_2(&VAR_24->local_addr, VAR_21, VAR_21->sa_len);
    }
   } else {
    ((struct sockaddr_in *)&VAR_24->local_addr)->sin_family = VAR_0;
    ((struct sockaddr_in *)&VAR_24->local_addr)->sin_len = sizeof(struct sockaddr_in);
    ((struct sockaddr_in *)&VAR_24->local_addr)->sin_port = VAR_20->inp_lport;
    FUNC_2(&((struct sockaddr_in *)&VAR_24->local_addr)->sin_addr, &VAR_20->inp_laddr, sizeof(struct in_addr));
   }

   if (VAR_22) {
    if (VAR_22->sa_len <= sizeof(struct sockaddr_in)) {
     FUNC_2(&VAR_24->remote_addr, VAR_22, VAR_22->sa_len);
    }
   } else {
    ((struct sockaddr_in *)&VAR_24->remote_addr)->sin_family = VAR_0;
    ((struct sockaddr_in *)&VAR_24->remote_addr)->sin_len = sizeof(struct sockaddr_in);
    ((struct sockaddr_in *)&VAR_24->remote_addr)->sin_port = VAR_20->inp_fport;
    FUNC_2(&((struct sockaddr_in *)&VAR_24->remote_addr)->sin_addr, &VAR_20->inp_faddr, sizeof(struct in_addr));
   }
  } else if (VAR_20->inp_vflag & VAR_5) {
   if (VAR_21) {
    if (VAR_21->sa_len <= sizeof(struct sockaddr_in6)) {
     FUNC_2(&VAR_24->local_addr, VAR_21, VAR_21->sa_len);
    }
   } else {
    ((struct sockaddr_in6 *)&VAR_24->local_addr)->sin6_family = VAR_1;
    ((struct sockaddr_in6 *)&VAR_24->local_addr)->sin6_len = sizeof(struct sockaddr_in6);
    ((struct sockaddr_in6 *)&VAR_24->local_addr)->sin6_port = VAR_20->inp_lport;
    FUNC_2(&((struct sockaddr_in6 *)&VAR_24->local_addr)->sin6_addr, &VAR_20->in6p_laddr, sizeof(struct in6_addr));
   }

   if (VAR_22) {
    if (VAR_22->sa_len <= sizeof(struct sockaddr_in6)) {
     FUNC_2(&VAR_24->remote_addr, VAR_22, VAR_22->sa_len);
    }
   } else {
    ((struct sockaddr_in6 *)&VAR_24->remote_addr)->sin6_family = VAR_1;
    ((struct sockaddr_in6 *)&VAR_24->remote_addr)->sin6_len = sizeof(struct sockaddr_in6);
    ((struct sockaddr_in6 *)&VAR_24->remote_addr)->sin6_port = VAR_20->inp_fport;
    FUNC_2(&((struct sockaddr_in6 *)&VAR_24->remote_addr)->sin6_addr, &VAR_20->in6p_faddr, sizeof(struct in6_addr));
   }
  }
 }
}
