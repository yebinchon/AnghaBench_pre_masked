
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * conn_cid_tbl; int * cid_que_base; } ;
struct bnx2i_hba {TYPE_1__ cid_que; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_hba *VAR_0)
{
 FUNC_0(VAR_0->cid_que.cid_que_base);
 VAR_0->cid_que.cid_que_base = ((void*)0);

 FUNC_0(VAR_0->cid_que.conn_cid_tbl);
 VAR_0->cid_que.conn_cid_tbl = ((void*)0);
}
