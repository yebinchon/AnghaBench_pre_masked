
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_flags; } ;
struct socket {TYPE_1__ so_snd; scalar_t__ so_pcb; } ;
struct inpcb {struct ifnet* inp_last_outifp; } ;
struct ifnet {scalar_t__ if_sndbyte_unsent; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int VAR_0 ;

inline void
FUNC_1(struct socket *VAR_1, int32_t VAR_2)
{
 struct inpcb *VAR_3 = (struct inpcb *)VAR_1->so_pcb;
 struct ifnet *VAR_4 = VAR_3->inp_last_outifp;

 if (VAR_1 == ((void*)0) || !(VAR_1->so_snd.sb_flags & VAR_0))
  return;

 if (VAR_4 != ((void*)0)) {
  if (VAR_4->if_sndbyte_unsent >= VAR_2)
   FUNC_0(-VAR_2, &VAR_4->if_sndbyte_unsent);
  else
   VAR_4->if_sndbyte_unsent = 0;
 }
}
