
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dbid; } ;
struct ocrdma_qp {int rq_db; TYPE_1__ rq; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ocrdma_qp*) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_qp *VAR_0)
{
 u32 VAR_1 = VAR_0->rq.dbid | (1 << FUNC_1(VAR_0));

 FUNC_0(VAR_1, VAR_0->rq_db);
}
