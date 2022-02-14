
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ fq_bytes; int fq_flags; } ;
typedef TYPE_2__ fq_t ;
typedef int fq_if_t ;
struct TYPE_9__ {int fcl_oldflows_cnt; } ;
struct TYPE_11__ {TYPE_1__ fcl_stat; int fcl_old_flows; } ;
typedef TYPE_3__ fq_if_classq_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(fq_if_t *VAR_3, fq_if_classq_t *VAR_4, fq_t *VAR_5,
    bool VAR_6)
{




 FUNC_0(&VAR_4->fcl_old_flows, VAR_5, VAR_1,
     VAR_2);
 VAR_5->fq_flags &= ~VAR_0;
 VAR_4->fcl_stat.fcl_oldflows_cnt--;
 FUNC_1(VAR_5->fq_bytes == 0);

 if (VAR_6) {

  FUNC_2(VAR_3, VAR_4, VAR_5);
 }
}
