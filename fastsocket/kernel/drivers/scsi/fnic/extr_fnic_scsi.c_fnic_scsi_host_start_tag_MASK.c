
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int tag; TYPE_3__* request; } ;
struct fnic {TYPE_2__* lport; } ;
struct blk_queue_tag {int max_depth; TYPE_3__** tag_index; int tag_map; } ;
struct TYPE_6__ {int tag; struct scsi_cmnd* special; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {struct blk_queue_tag* bqt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct fnic *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct blk_queue_tag *VAR_3 = VAR_1->lport->host->bqt;
 int VAR_4, VAR_5 = VAR_0;

 FUNC_0(!VAR_3);
 if (!VAR_3) {
  FUNC_2("Tags are not supported\n");
  goto end;
 }

 do {
  VAR_4 = FUNC_1(VAR_3->tag_map, VAR_3->max_depth, 1);
  if (VAR_4 >= VAR_3->max_depth) {
   FUNC_2("Tag allocation failure\n");
   goto end;
  }
 } while (FUNC_3(VAR_4, VAR_3->tag_map));

 VAR_3->tag_index[VAR_4] = VAR_2->request;
 VAR_2->request->tag = VAR_4;
 VAR_2->tag = VAR_4;
 if (!VAR_2->request->special)
  VAR_2->request->special = VAR_2;

 VAR_5 = VAR_4;

end:
 return VAR_5;
}
