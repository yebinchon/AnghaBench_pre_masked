
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_eflags; scalar_t__ if_output_sched_model; int if_snd; } ;
typedef int mbuf_svc_class_t ;
typedef int errno_t ;
typedef scalar_t__ classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int ,void**,int *,int *,int *,scalar_t__*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int) ;

errno_t
FUNC_5(struct ifnet *VAR_6, mbuf_svc_class_t VAR_7,
    struct mbuf **VAR_8)
{
 errno_t VAR_9;
 classq_pkt_type_t VAR_10;
 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || !FUNC_0(VAR_7))
  return (VAR_1);
 else if (!(VAR_6->if_eflags & VAR_3) ||
     VAR_6->if_output_sched_model >= VAR_4)
  return (VAR_2);
 if (!FUNC_4(VAR_6, 1))
  return (VAR_2);

 VAR_9 = FUNC_2(&VAR_6->if_snd, VAR_7, 1,
     VAR_0, (void **)VAR_8, ((void*)0), ((void*)0),
       ((void*)0), &VAR_10);
 FUNC_1((*VAR_8 == ((void*)0)) || (VAR_10 == VAR_5));
 FUNC_3(VAR_6);
 return (VAR_9);
}
