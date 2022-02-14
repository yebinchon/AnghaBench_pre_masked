
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* request; } ;
struct fnic {TYPE_2__* lport; } ;
struct blk_queue_tag {int tag_map; int ** tag_index; } ;
struct TYPE_6__ {int tag; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {struct blk_queue_tag* bqt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct fnic *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct blk_queue_tag *VAR_3 = VAR_1->lport->host->bqt;
 int VAR_4 = VAR_2->request->tag;

 if (VAR_4 == VAR_0)
  return;

 FUNC_0(!VAR_3 || !VAR_3->tag_index[VAR_4]);
 if (!VAR_3)
  return;

 VAR_3->tag_index[VAR_4] = ((void*)0);
 FUNC_1(VAR_4, VAR_3->tag_map);

 return;
}
