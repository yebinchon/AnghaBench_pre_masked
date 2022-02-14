
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_eflags; scalar_t__ if_output_sched_model; int if_snd; } ;
typedef int errno_t ;
typedef scalar_t__ classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,void**,int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int) ;

errno_t
FUNC_4(struct ifnet *VAR_6, struct mbuf **VAR_7)
{
 errno_t VAR_8;
 classq_pkt_type_t VAR_9;
 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return (VAR_1);
 else if (!(VAR_6->if_eflags & VAR_3) ||
     VAR_6->if_output_sched_model >= VAR_4)
  return (VAR_2);
 if (!FUNC_3(VAR_6, 1))
  return (VAR_2);

 VAR_8 = FUNC_1(&VAR_6->if_snd, 1, VAR_0,
     (void **)VAR_7, ((void*)0), ((void*)0), ((void*)0), &VAR_9);
 FUNC_0((*VAR_7 == ((void*)0)) || (VAR_9 == VAR_5));
 FUNC_2(VAR_6);

 return (VAR_8);
}
