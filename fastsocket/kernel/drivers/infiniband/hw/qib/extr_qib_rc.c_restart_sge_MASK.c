
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_sge; } ;
struct qib_swqe {int psn; int length; TYPE_1__ wr; int * sg_list; } ;
struct qib_sge_state {int total_len; int num_sge; int * sg_list; int sge; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_sge_state*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(struct qib_sge_state *VAR_1, struct qib_swqe *VAR_2,
         u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = ((VAR_3 - VAR_2->psn) & VAR_0) * VAR_4;
 VAR_1->sge = VAR_2->sg_list[0];
 VAR_1->sg_list = VAR_2->sg_list + 1;
 VAR_1->num_sge = VAR_2->wr.num_sge;
 VAR_1->total_len = VAR_2->length;
 FUNC_0(VAR_1, VAR_5, 0);
 return VAR_2->length - VAR_5;
}
