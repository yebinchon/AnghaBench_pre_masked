
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ data_length; } ;
struct iscsi_task {scalar_t__ imm_count; TYPE_6__* conn; TYPE_1__ unsol_r2t; struct bnx2i_cmd* dd_data; } ;
struct TYPE_11__ {scalar_t__ total_data_transfer_length; scalar_t__ sd_start_bd_index; scalar_t__ sd_buffer_offset; scalar_t__ ud_start_bd_index; scalar_t__ ud_buffer_offset; } ;
struct TYPE_10__ {int bd_valid; TYPE_3__* bd_tbl; } ;
struct bnx2i_cmd {TYPE_5__ req; TYPE_4__ io_tbl; int scsi_cmd; } ;
struct TYPE_12__ {TYPE_2__* session; } ;
struct TYPE_9__ {int buffer_length; } ;
struct TYPE_8__ {scalar_t__ first_burst; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2i_cmd*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,TYPE_6__*,char*,int,int,...) ;
 scalar_t__ FUNC_2 (struct iscsi_task*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iscsi_task *VAR_1)
{
 struct bnx2i_cmd *VAR_2 = VAR_1->dd_data;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6 = VAR_2->req.total_data_transfer_length;




 if (!FUNC_2(VAR_1) && !VAR_1->imm_count)
  return;


 VAR_5 += VAR_1->imm_count;
 if (VAR_1->imm_count == VAR_6)
  return;

 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_2, VAR_5,
        &VAR_3, &VAR_4);
  VAR_2->req.ud_buffer_offset = VAR_3;
  VAR_2->req.ud_start_bd_index = VAR_4;
  VAR_5 += VAR_1->unsol_r2t.data_length;
 }

 if (VAR_5 != VAR_6) {
  FUNC_0(VAR_2, VAR_5,
        &VAR_3, &VAR_4);
  if ((VAR_3 > VAR_1->conn->session->first_burst) ||
      (VAR_4 > FUNC_3(VAR_2->scsi_cmd))) {
   int VAR_7 = 0;

   FUNC_1(VAR_0, VAR_1->conn,
       "bnx2i- error, buf offset 0x%x "
       "bd_valid %d use_sg %d\n",
       VAR_5, VAR_2->io_tbl.bd_valid,
       FUNC_3(VAR_2->scsi_cmd));
   for (VAR_7 = 0; VAR_7 < VAR_2->io_tbl.bd_valid; VAR_7++)
    FUNC_1(VAR_0, VAR_1->conn,
        "bnx2i err, bd[%d]: len %x\n",
        VAR_7, VAR_2->io_tbl.bd_tbl[VAR_7]. buffer_length);

  }
  VAR_2->req.sd_buffer_offset = VAR_3;
  VAR_2->req.sd_start_bd_index = VAR_4;
 }
}
