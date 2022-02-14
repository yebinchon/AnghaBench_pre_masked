
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct TYPE_11__ {int fq_flowhash; } ;
typedef TYPE_2__ fq_t ;
struct TYPE_12__ {int fqs_ifq; int * fqs_flows; } ;
typedef TYPE_3__ fq_if_t ;
struct TYPE_10__ {int fcl_flows_cnt; } ;
struct TYPE_13__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_4__ fq_if_classq_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

void
FUNC_4(fq_if_t *VAR_2, fq_if_classq_t *VAR_3, fq_t *VAR_4)
{
 u_int8_t VAR_5;
 VAR_5 = FUNC_0(VAR_4->fq_flowhash);
 FUNC_2(&VAR_2->fqs_flows[VAR_5], VAR_4, VAR_0,
     VAR_1);
 VAR_3->fcl_stat.fcl_flows_cnt--;
 FUNC_1(VAR_2->fqs_ifq);
 FUNC_3(VAR_4);

}
