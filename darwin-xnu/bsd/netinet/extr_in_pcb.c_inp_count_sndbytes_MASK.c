
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__ sb_cc; int sb_flags; } ;
struct socket {int so_flags; TYPE_1__ so_snd; } ;
struct inpcb {struct socket* inp_socket; struct ifnet* inp_last_outifp; } ;
struct ifnet {scalar_t__ if_type; scalar_t__ if_subfamily; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct socket*,int ) ;
 int FUNC_1 (struct socket*,scalar_t__) ;
 int FUNC_2 (struct socket*,scalar_t__) ;

inline void
FUNC_3(struct inpcb *VAR_4, u_int32_t VAR_5)
{
 struct ifnet *VAR_6 = VAR_4->inp_last_outifp;
 struct socket *VAR_7 = VAR_4->inp_socket;
 if (VAR_6 != ((void*)0) && !(VAR_7->so_flags & VAR_3) &&
     (VAR_6->if_type == VAR_1 ||
     VAR_6->if_subfamily == VAR_0)) {
  int32_t VAR_8;

  VAR_7->so_snd.sb_flags |= VAR_2;





  if (VAR_7->so_snd.sb_cc > 0)
   FUNC_1(VAR_7, VAR_7->so_snd.sb_cc);

  VAR_8 = FUNC_0(VAR_7, VAR_5);
  if (VAR_8 > 0)
   FUNC_2(VAR_7, VAR_8);
 }
}
