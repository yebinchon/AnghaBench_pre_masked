
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
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
 int FUNC_1 (int *,int,int ,void**,void**,int*,int*,scalar_t__*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int) ;

errno_t
FUNC_4(struct ifnet *VAR_6, u_int32_t VAR_7,
    struct mbuf **VAR_8, struct mbuf **VAR_9, u_int32_t *VAR_10, u_int32_t *VAR_11)
{
 errno_t VAR_12;
 classq_pkt_type_t VAR_13;
 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_7 < 1)
  return (VAR_1);
 else if (!(VAR_6->if_eflags & VAR_3) ||
     VAR_6->if_output_sched_model >= VAR_4)
  return (VAR_2);
 if (!FUNC_3(VAR_6, 1))
  return (VAR_2);

 VAR_12 = FUNC_1(&VAR_6->if_snd, VAR_7,
     VAR_0, (void **)VAR_8, (void **)VAR_9, VAR_10,
     VAR_11, &VAR_13);
 FUNC_0((*VAR_8 == ((void*)0)) || (VAR_13 == VAR_5));
 FUNC_2(VAR_6);
 return (VAR_12);
}
