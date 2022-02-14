
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int if_snd; } ;
struct TYPE_5__ {int fqs_fclist; int fqs_pkt_droplimit; int fqs_update_interval; int fqs_target_qdelay; int fqs_ptype; int * fqs_ifq; } ;
typedef TYPE_1__ fq_if_t ;
typedef int classq_pkt_type_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ifnet*,int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ) ;

fq_if_t *
FUNC_6(struct ifnet *VAR_2, classq_pkt_type_t VAR_3)
{
 fq_if_t *VAR_4;
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_4, VAR_0);
 VAR_4->fqs_ifq = &VAR_2->if_snd;
 VAR_4->fqs_ptype = VAR_3;


 FUNC_3(VAR_2, &VAR_4->fqs_target_qdelay);


 FUNC_4(&VAR_4->fqs_update_interval);


 VAR_4->fqs_pkt_droplimit = FUNC_0(&VAR_2->if_snd);
 FUNC_1(&VAR_4->fqs_fclist);
 return (VAR_4);
}
