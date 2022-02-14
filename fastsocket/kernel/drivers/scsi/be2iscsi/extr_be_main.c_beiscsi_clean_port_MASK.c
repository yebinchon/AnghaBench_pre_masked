
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int conn_table; int ep_array; int cid_array; int eh_sgl_hndl_base; int io_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ) ;

__attribute__((used)) static void FUNC_5(struct beiscsi_hba *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (VAR_4)
  FUNC_0(VAR_3, VAR_2, VAR_0,
       "BM_%d : mgmt_epfw_cleanup FAILED\n");

 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 FUNC_3(VAR_3->io_sgl_hndl_base);
 FUNC_3(VAR_3->eh_sgl_hndl_base);
 FUNC_3(VAR_3->cid_array);
 FUNC_3(VAR_3->ep_array);
 FUNC_3(VAR_3->conn_table);
}
