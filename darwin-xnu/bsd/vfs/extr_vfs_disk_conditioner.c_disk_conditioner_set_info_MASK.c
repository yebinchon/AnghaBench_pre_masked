
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct saved_mount_fields {scalar_t__ mnt_maxreadcnt; scalar_t__ mnt_maxwritecnt; scalar_t__ mnt_segreadcnt; scalar_t__ mnt_segwritecnt; scalar_t__ mnt_ioqueue_depth; int mnt_ioscale; } ;
struct TYPE_12__ {scalar_t__ ioqueue_depth; scalar_t__ maxreadcnt; scalar_t__ maxwritecnt; scalar_t__ segreadcnt; scalar_t__ segwritecnt; int is_ssd; scalar_t__ enabled; } ;
struct _disk_conditioner_info_t {int last_io_timestamp; struct saved_mount_fields mnt_fields; TYPE_2__ dcinfo; } ;
typedef TYPE_1__* mount_t ;
typedef TYPE_2__ disk_conditioner_info ;
struct TYPE_11__ {scalar_t__ mnt_maxreadcnt; scalar_t__ mnt_maxwritecnt; scalar_t__ mnt_segreadcnt; scalar_t__ mnt_segwritecnt; scalar_t__ mnt_ioqueue_depth; int mnt_ioscale; struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct _disk_conditioner_info_t*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct saved_mount_fields*) ;
 struct _disk_conditioner_info_t* FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

int
FUNC_13(mount_t VAR_3, disk_conditioner_info *VAR_4)
{
 struct _disk_conditioner_info_t *VAR_5;
 disk_conditioner_info *VAR_6;
 struct saved_mount_fields *VAR_7;

 if (!FUNC_7(FUNC_6()) || !FUNC_0(FUNC_3(), VAR_0)) {
  return VAR_2;
 }

 if (!VAR_3) {
  return VAR_1;
 }

 FUNC_10(VAR_3);

 VAR_5 = VAR_3->mnt_disk_conditioner_info;
 if (!VAR_5) {
  VAR_5 = VAR_3->mnt_disk_conditioner_info = FUNC_5(sizeof(struct _disk_conditioner_info_t));
  FUNC_2(VAR_5, sizeof(struct _disk_conditioner_info_t));
  VAR_7 = &(VAR_5->mnt_fields);


  VAR_7->mnt_maxreadcnt = VAR_3->mnt_maxreadcnt;
  VAR_7->mnt_maxwritecnt = VAR_3->mnt_maxwritecnt;
  VAR_7->mnt_segreadcnt = VAR_3->mnt_segreadcnt;
  VAR_7->mnt_segwritecnt = VAR_3->mnt_segwritecnt;
  VAR_7->mnt_ioqueue_depth = VAR_3->mnt_ioqueue_depth;
  VAR_7->mnt_ioscale = VAR_3->mnt_ioscale;
 }

 VAR_6 = &(VAR_5->dcinfo);
 VAR_7 = &(VAR_5->mnt_fields);

 if (!VAR_4->enabled && VAR_6->enabled) {

  FUNC_4(VAR_3, VAR_7);
 }

 FUNC_8(VAR_6, VAR_4, sizeof(disk_conditioner_info));


 if (VAR_4->ioqueue_depth == 0 || VAR_4->ioqueue_depth > VAR_7->mnt_ioqueue_depth) {
  VAR_6->ioqueue_depth = VAR_7->mnt_ioqueue_depth;
 }
 if (VAR_4->maxreadcnt == 0 || VAR_4->maxreadcnt > VAR_7->mnt_maxreadcnt) {
  VAR_6->maxreadcnt = VAR_7->mnt_maxreadcnt;
 }
 if (VAR_4->maxwritecnt == 0 || VAR_4->maxwritecnt > VAR_7->mnt_maxwritecnt) {
  VAR_6->maxwritecnt = VAR_7->mnt_maxwritecnt;
 }
 if (VAR_4->segreadcnt == 0 || VAR_4->segreadcnt > VAR_7->mnt_segreadcnt) {
  VAR_6->segreadcnt = VAR_7->mnt_segreadcnt;
 }
 if (VAR_4->segwritecnt == 0 || VAR_4->segwritecnt > VAR_7->mnt_segwritecnt) {
  VAR_6->segwritecnt = VAR_7->mnt_segwritecnt;
 }

 if (VAR_4->enabled) {
  VAR_3->mnt_maxreadcnt = VAR_6->maxreadcnt;
  VAR_3->mnt_maxwritecnt = VAR_6->maxwritecnt;
  VAR_3->mnt_segreadcnt = VAR_6->segreadcnt;
  VAR_3->mnt_segwritecnt = VAR_6->segwritecnt;
  VAR_3->mnt_ioqueue_depth = VAR_6->ioqueue_depth;
  VAR_3->mnt_ioscale = FUNC_1(VAR_6->ioqueue_depth);
 }

 FUNC_11(VAR_3);

 FUNC_9(&VAR_5->last_io_timestamp);


 FUNC_12(VAR_3, VAR_6->is_ssd);

 return 0;
}
