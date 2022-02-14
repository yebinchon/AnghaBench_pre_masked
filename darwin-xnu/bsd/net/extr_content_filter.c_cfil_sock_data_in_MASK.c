
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int so_flags; TYPE_2__* so_cfil; } ;
struct sockaddr {int dummy; } ;
struct mbuf {scalar_t__ m_type; } ;
struct TYPE_4__ {int cfi_flags; } ;
struct TYPE_3__ {int cfs_data_in_oob; int cfs_data_in_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*,TYPE_2__*,int ,struct sockaddr*,struct mbuf*,struct mbuf*,int ) ;
 int FUNC_5 (int ,struct socket*,int *,struct sockaddr*,struct mbuf*,struct mbuf*,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_7, struct sockaddr *VAR_8,
 struct mbuf *VAR_9, struct mbuf *VAR_10, uint32_t VAR_11)
{
 int VAR_12 = 0;

 if (FUNC_1(VAR_7)) {
        return (FUNC_5(VAR_2, VAR_7, ((void*)0), VAR_8, VAR_9, VAR_10, VAR_11));
    }

 if ((VAR_7->so_flags & VAR_5) == 0 || VAR_7->so_cfil == ((void*)0))
  return (0);

 FUNC_6(VAR_7);

 if (VAR_7->so_cfil->cfi_flags & VAR_0) {
  FUNC_0(VAR_3, "so %llx drop set",
   (uint64_t)FUNC_3(VAR_7));
  return (VAR_1);
 }
 if (VAR_10 != ((void*)0)) {
  FUNC_0(VAR_3, "so %llx control",
   (uint64_t)FUNC_3(VAR_7));
  FUNC_2(&VAR_6.cfs_data_in_control);
 }
 if (VAR_9->m_type == VAR_4) {
  FUNC_0(VAR_3, "so %llx MSG_OOB",
   (uint64_t)FUNC_3(VAR_7));
  FUNC_2(&VAR_6.cfs_data_in_oob);
 }
 VAR_12 = FUNC_4(VAR_7, VAR_7->so_cfil, 0, VAR_8, VAR_9, VAR_10, VAR_11);

 return (VAR_12);
}
