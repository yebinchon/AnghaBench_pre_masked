
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2fc_rport {int rq_cons_idx; scalar_t__ rq; } ;


 int VAR_0 ;
 int VAR_1 ;

char *FUNC_0(struct bnx2fc_rport *VAR_2, u8 VAR_3)
{
 char *VAR_4 = (char *)VAR_2->rq + (VAR_2->rq_cons_idx * VAR_0);

 if (VAR_2->rq_cons_idx + VAR_3 > VAR_1)
  return ((void*)0);

 VAR_2->rq_cons_idx += VAR_3;

 if (VAR_2->rq_cons_idx >= VAR_1)
  VAR_2->rq_cons_idx -= VAR_1;

 return VAR_4;
}
