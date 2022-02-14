
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipz_queue {int qe_size; } ;
struct TYPE_2__ {int imm_data; } ;
struct ib_wc {int * qp; int status; int wc_flags; TYPE_1__ ex; int opcode; int wr_id; } ;
struct ib_cq {int device; } ;
struct ehca_wqe {int optype; int wr_flag; int immediate_data; int work_request_id; } ;
struct ehca_queue_map {size_t next_wqe_idx; struct ehca_qmap_entry* map; int entries; } ;
struct ehca_qp {int ib_qp; int real_qp_num; struct ehca_queue_map rq_map; struct ehca_queue_map sq_map; } ;
struct ehca_qmap_entry {int reported; int app_wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (struct ipz_queue*,int) ;
 int FUNC_2 (struct ib_wc*,int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ehca_qp *VAR_7, struct ib_cq *VAR_8,
          struct ib_wc *VAR_9, int VAR_10,
          struct ipz_queue *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct ehca_wqe *VAR_14;
 u64 VAR_15;
 struct ehca_queue_map *VAR_16;
 struct ehca_qmap_entry *VAR_17;

 if (VAR_12)
  VAR_16 = &VAR_7->sq_map;
 else
  VAR_16 = &VAR_7->rq_map;

 VAR_17 = &VAR_16->map[VAR_16->next_wqe_idx];

 while ((VAR_13 < VAR_10) && (VAR_17->reported == 0)) {


  FUNC_2(VAR_9, 0, sizeof(*VAR_9));

  VAR_15 = VAR_16->next_wqe_idx * VAR_11->qe_size;
  VAR_14 = (struct ehca_wqe *)FUNC_1(VAR_11, VAR_15);
  if (!VAR_14) {
   FUNC_0(VAR_8->device, "Invalid wqe offset=%#llx on "
     "qp_num=%#x", VAR_15, VAR_7->real_qp_num);
   return VAR_13;
  }

  VAR_9->wr_id = FUNC_4(VAR_14->work_request_id,
       VAR_17->app_wr_id);

  if (VAR_12) {
   switch (VAR_14->optype) {
   case 128:
    VAR_9->opcode = VAR_3;
    break;
   case 129:
    VAR_9->opcode = VAR_1;
    break;
   case 130:
    VAR_9->opcode = VAR_0;
    break;
   default:
    FUNC_0(VAR_8->device, "Invalid optype=%x",
      VAR_14->optype);
    return VAR_13;
   }
  } else
   VAR_9->opcode = VAR_2;

  if (VAR_14->wr_flag & VAR_6) {
   VAR_9->ex.imm_data = VAR_14->immediate_data;
   VAR_9->wc_flags |= VAR_4;
  }

  VAR_9->status = VAR_5;

  VAR_9->qp = &VAR_7->ib_qp;


  VAR_17->reported = 1;
  VAR_16->next_wqe_idx = FUNC_3(VAR_16->next_wqe_idx,
      VAR_16->entries);
  VAR_17 = &VAR_16->map[VAR_16->next_wqe_idx];

  VAR_9++; VAR_13++;
 }

 return VAR_13;

}
