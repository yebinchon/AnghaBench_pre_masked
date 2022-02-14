
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {struct bnx2i_conn** conn_cid_tbl; } ;
struct bnx2i_hba {TYPE_2__ cid_que; } ;
struct bnx2i_conn {TYPE_1__* cls_conn; } ;
struct TYPE_3__ {int dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct bnx2i_hba *VAR_2,
     struct bnx2i_conn *VAR_3,
     u32 VAR_4)
{
 if (VAR_2 && VAR_2->cid_que.conn_cid_tbl[VAR_4]) {
  FUNC_0(VAR_1, VAR_3->cls_conn->dd_data,
     "conn bind - entry #%d not free\n", VAR_4);
  return -VAR_0;
 }

 VAR_2->cid_que.conn_cid_tbl[VAR_4] = VAR_3;
 return 0;
}
