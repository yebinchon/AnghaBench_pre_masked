
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct iscsi_endpoint {struct bnx2i_endpoint* dd_data; } ;
struct bnx2i_endpoint {scalar_t__ ep_iscsi_cid; TYPE_2__* hba; TYPE_1__* conn; int state; } ;
struct TYPE_4__ {int ofld_conns_active; } ;
struct TYPE_3__ {int * ep; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct iscsi_endpoint*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct iscsi_endpoint *VAR_2)
{
 struct bnx2i_endpoint *VAR_3 = VAR_2->dd_data;
 unsigned long VAR_4;

 FUNC_2(&VAR_1, VAR_4);
 VAR_3->state = VAR_0;
 VAR_3->hba->ofld_conns_active--;

 if (VAR_3->ep_iscsi_cid != (u16) -1)
  FUNC_0(VAR_3->hba, VAR_3->ep_iscsi_cid);

 if (VAR_3->conn) {
  VAR_3->conn->ep = ((void*)0);
  VAR_3->conn = ((void*)0);
 }

 VAR_3->hba = ((void*)0);
 FUNC_3(&VAR_1, VAR_4);
 FUNC_1(VAR_2);
}
