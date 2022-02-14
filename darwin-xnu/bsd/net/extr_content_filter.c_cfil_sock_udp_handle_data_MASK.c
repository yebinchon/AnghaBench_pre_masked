
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {scalar_t__ m_type; } ;
struct cfil_info {int cfi_flags; } ;
struct cfil_hash_entry {struct cfil_info* cfentry_cfil; int cfentry_lastused; } ;
typedef int errno_t ;
struct TYPE_2__ {int cfs_data_in_oob; int cfs_data_in_control; int cfs_sock_userspace_only; int cfs_sock_attach_in_vain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct socket*,struct cfil_info*,int,struct sockaddr*,struct mbuf*,struct mbuf*,int) ;
 int FUNC_4 (int ,struct socket*,struct cfil_hash_entry*,int ,char*) ;
 struct cfil_hash_entry* FUNC_5 (struct socket*,int,int,struct sockaddr*,struct sockaddr*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct socket*) ;

errno_t
FUNC_9(bool VAR_8, struct socket *VAR_9,
                          struct sockaddr *VAR_10, struct sockaddr *VAR_11,
                          struct mbuf *VAR_12, struct mbuf *VAR_13, uint32_t VAR_14)
{
#pragma unused(outgoing, so, local, remote, data, control, flags)
 errno_t VAR_15 = 0;
    uint32_t VAR_16;
 struct cfil_hash_entry *VAR_17 = ((void*)0);
 struct cfil_info *VAR_18 = ((void*)0);

    FUNC_8(VAR_9);

    if (VAR_6 == 0) {
        FUNC_0(VAR_2, "CFIL: UDP no active filter");
        FUNC_1(&VAR_7.cfs_sock_attach_in_vain);
        return (VAR_15);
    }

    VAR_16 = FUNC_6(VAR_9);
    if (VAR_16 == 0) {
        FUNC_0(VAR_2, "CFIL: UDP failed to get control unit");
        return (VAR_15);
    }

    if ((VAR_16 & VAR_5) != 0) {
        FUNC_0(VAR_2, "CFIL: UDP user space only");
        FUNC_1(&VAR_7.cfs_sock_userspace_only);
        return (VAR_15);
    }

    VAR_17 = FUNC_5(VAR_9, VAR_16, VAR_8, VAR_10, VAR_11);
    if (VAR_17 == ((void*)0) || VAR_17->cfentry_cfil == ((void*)0)) {
  FUNC_0(VAR_3, "CFIL: Falied to create UDP flow");
        return (VAR_1);
    }

 VAR_17->cfentry_lastused = FUNC_7();
 VAR_18 = VAR_17->cfentry_cfil;

 if (VAR_18->cfi_flags & VAR_0) {



  return (VAR_1);
 }
 if (VAR_13 != ((void*)0)) {
  FUNC_1(&VAR_7.cfs_data_in_control);
 }
 if (VAR_12->m_type == VAR_4) {
  FUNC_0(VAR_3, "so %llx MSG_OOB",
     (uint64_t)FUNC_2(VAR_9));
  FUNC_1(&VAR_7.cfs_data_in_oob);
 }

 VAR_15 = FUNC_3(VAR_9, VAR_18, VAR_8, VAR_11, VAR_12, VAR_13, VAR_14);

 return (VAR_15);
}
