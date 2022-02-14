
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgmt_session_info {int dummy; } ;
struct TYPE_2__ {int pdev; } ;
struct beiscsi_hba {TYPE_1__ ctrl; int boot_sess; } ;
struct be_dma_mem {int dma; struct be_cmd_get_session_resp* va; int size; } ;
struct be_cmd_get_session_resp {int session_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int,int *,struct be_cmd_get_session_resp*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct be_cmd_get_session_resp*,int ,int) ;
 unsigned int FUNC_5 (struct beiscsi_hba*,unsigned int,struct be_dma_mem*) ;
 struct be_cmd_get_session_resp* FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ,struct be_cmd_get_session_resp*,int ) ;

__attribute__((used)) static int FUNC_8(struct beiscsi_hba *VAR_4)
{
 struct be_cmd_get_session_resp *VAR_5;
 struct be_dma_mem VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = -VAR_2;


 VAR_9 = FUNC_0(VAR_4, &VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_4, VAR_3,
       VAR_1 | VAR_0,
       "BM_%d : No boot session\n");
  return VAR_9;
 }
 VAR_6.va = FUNC_6(VAR_4->ctrl.pdev,
    sizeof(*VAR_5),
    &VAR_6.dma);
 if (VAR_6.va == ((void*)0)) {
  FUNC_1(VAR_4, VAR_3,
       VAR_1 | VAR_0,
       "BM_%d : Failed to allocate memory for"
       "beiscsi_get_session_info\n");

  return -VAR_2;
 }

 FUNC_4(VAR_6.va, 0, sizeof(*VAR_5));
 VAR_7 = FUNC_5(VAR_4, VAR_8,
        &VAR_6);
 if (!VAR_7) {
  FUNC_1(VAR_4, VAR_3,
       VAR_1 | VAR_0,
       "BM_%d : beiscsi_get_session_info"
       " Failed\n");

  goto boot_freemem;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_7, ((void*)0), VAR_6.va);
 if (VAR_9) {
  FUNC_1(VAR_4, VAR_3,
       VAR_1 | VAR_0,
       "BM_%d : beiscsi_get_session_info Failed");
  goto boot_freemem;
 }

 VAR_5 = VAR_6.va ;

 FUNC_3(&VAR_4->boot_sess, &VAR_5->session_info,
        sizeof(struct mgmt_session_info));
 VAR_9 = 0;

boot_freemem:
 FUNC_7(VAR_4->ctrl.pdev, VAR_6.size,
      VAR_6.va, VAR_6.dma);
 return VAR_9;
}
