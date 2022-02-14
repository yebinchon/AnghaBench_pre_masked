
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int hdr_max; int * hdr; struct bnx2i_cmd* dd_data; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; } ;
struct iscsi_hdr {int dummy; } ;
struct bnx2i_hba {int dummy; } ;
struct bnx2i_cmd {int hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2i_hba*,struct iscsi_session*,struct bnx2i_cmd*) ;
 int FUNC_1 (struct bnx2i_hba*,struct iscsi_session*) ;

__attribute__((used)) static int FUNC_2(struct bnx2i_hba *VAR_1,
    struct iscsi_session *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->cmds_max; VAR_3++) {
  struct iscsi_task *VAR_4 = VAR_2->cmds[VAR_3];
  struct bnx2i_cmd *VAR_5 = VAR_4->dd_data;

  VAR_4->hdr = &VAR_5->hdr;
  VAR_4->hdr_max = sizeof(struct iscsi_hdr);

  if (FUNC_0(VAR_1, VAR_2, VAR_5))
   goto free_bdts;
 }

 return 0;

free_bdts:
 FUNC_1(VAR_1, VAR_2);
 return -VAR_0;
}
