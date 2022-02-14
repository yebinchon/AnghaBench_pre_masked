
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_set {int flags_fs; int qsize; int flow_mask; int plr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_flow_set*,struct dn_flow_set*) ;

__attribute__((used)) static void
FUNC_1(struct dn_flow_set *VAR_2, struct dn_flow_set *VAR_3)
{
    VAR_2->flags_fs = VAR_3->flags_fs;
    VAR_2->qsize = VAR_3->qsize;
    VAR_2->plr = VAR_3->plr;
    VAR_2->flow_mask = VAR_3->flow_mask;
    if (VAR_2->flags_fs & VAR_1) {
 if (VAR_2->qsize > 1024*1024)
     VAR_2->qsize = 1024*1024 ;
    } else {
 if (VAR_2->qsize == 0)
     VAR_2->qsize = 50 ;
 if (VAR_2->qsize > 100)
     VAR_2->qsize = 50 ;
    }

    if ( VAR_2->flags_fs & VAR_0 )
 FUNC_0(VAR_3, VAR_2) ;
}
