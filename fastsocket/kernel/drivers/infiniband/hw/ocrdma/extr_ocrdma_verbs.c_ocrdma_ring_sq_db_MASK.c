
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dbid; } ;
struct ocrdma_qp {int sq_db; TYPE_1__ sq; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_qp *VAR_0)
{
 u32 VAR_1 = VAR_0->sq.dbid | (1 << 16);

 FUNC_0(VAR_1, VAR_0->sq_db);
}
