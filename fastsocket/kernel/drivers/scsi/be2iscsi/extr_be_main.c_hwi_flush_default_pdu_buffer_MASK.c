
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i_t_dpdu_cqe {int dummy; } ;
struct hwi_controller {int dummy; } ;
struct hwi_async_pdu_context {int dummy; } ;
struct beiscsi_hba {struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_conn {int dummy; } ;
struct async_pdu_handle {scalar_t__ is_header; scalar_t__ consumed; int cri; } ;


 int FUNC_0 (int) ;
 struct hwi_async_pdu_context* FUNC_1 (struct hwi_controller*) ;
 int FUNC_2 (struct beiscsi_hba*,int ) ;
 struct async_pdu_handle* FUNC_3 (struct beiscsi_hba*,struct beiscsi_conn*,struct hwi_async_pdu_context*,struct i_t_dpdu_cqe*,unsigned int*) ;
 int FUNC_4 (struct beiscsi_hba*,scalar_t__) ;
 int FUNC_5 (struct beiscsi_hba*,struct hwi_async_pdu_context*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct beiscsi_hba *VAR_0,
      struct beiscsi_conn *VAR_1,
      struct i_t_dpdu_cqe *VAR_2)
{
 struct hwi_controller *VAR_3;
 struct hwi_async_pdu_context *VAR_4;
 struct async_pdu_handle *VAR_5 = ((void*)0);
 unsigned int VAR_6 = -1;

 VAR_3 = VAR_0->phwi_ctrlr;
 VAR_4 = FUNC_1(VAR_3);

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_4,
          VAR_2, &VAR_6);
 FUNC_0(VAR_5->is_header != 0);
 if (VAR_5->consumed == 0)
  FUNC_5(VAR_0, VAR_4,
        VAR_5->is_header, VAR_6);

 FUNC_2(VAR_0, VAR_5->cri);
 FUNC_4(VAR_0, VAR_5->is_header);
}
