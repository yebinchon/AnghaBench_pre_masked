
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fq_flags; } ;
typedef TYPE_2__ fq_t ;
struct TYPE_8__ {int fcl_oldflows_cnt; int fcl_newflows_cnt; } ;
struct TYPE_10__ {TYPE_1__ fcl_stat; int fcl_old_flows; int fcl_new_flows; } ;
typedef TYPE_3__ fq_if_classq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(fq_t *VAR_4, fq_if_classq_t *VAR_5, bool VAR_6)
{

 FUNC_1(&VAR_5->fcl_new_flows, VAR_4,
     VAR_2, VAR_3);
 VAR_4->fq_flags &= ~VAR_0;
 VAR_5->fcl_stat.fcl_newflows_cnt--;

 if (VAR_6) {
  FUNC_0(&VAR_5->fcl_old_flows, VAR_4,
      VAR_3);
  VAR_4->fq_flags |= VAR_1;
  VAR_5->fcl_stat.fcl_oldflows_cnt++;
 }
}
