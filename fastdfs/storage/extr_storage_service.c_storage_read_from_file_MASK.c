
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fast_task_info {int length; scalar_t__ data; scalar_t__ arg; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int pkg_len; int cmd; scalar_t__ status; } ;
typedef TYPE_1__ TrackerHeader ;
struct TYPE_5__ {int open_flags; scalar_t__ fd; int crc32; scalar_t__ calc_crc32; int done_callback; int op; int dio_thread_index; scalar_t__ end; scalar_t__ start; scalar_t__ offset; } ;
struct TYPE_6__ {scalar_t__ total_offset; scalar_t__ total_length; int clean_func; int deal_func; TYPE_2__ file_context; } ;
typedef TYPE_2__ StorageFileContext ;
typedef TYPE_3__ StorageClientInfo ;
typedef int FileDealDoneCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__ const,int ) ;
 int FUNC_2 (struct fast_task_info*,int const,int ) ;
 int FUNC_3 (struct fast_task_info*) ;

__attribute__((used)) static int FUNC_4(struct fast_task_info *VAR_8, const int64_t VAR_9, const int64_t VAR_10, FileDealDoneCallback VAR_11, const int VAR_12)



{
 StorageClientInfo *VAR_13;
 StorageFileContext *VAR_14;
 TrackerHeader *VAR_15;
 int VAR_16;

 VAR_13 = (StorageClientInfo *)VAR_8->arg;
 VAR_14 = &(VAR_13->file_context);

 VAR_13->deal_func = VAR_5;
 VAR_13->clean_func = VAR_6;
 VAR_13->total_length = sizeof(TrackerHeader) + VAR_10;
 VAR_13->total_offset = 0;

 VAR_14->op = VAR_1;
 VAR_14->open_flags = VAR_2 | VAR_7;
 VAR_14->offset = VAR_9;
 VAR_14->start = VAR_9;
 VAR_14->end = VAR_9 + VAR_10;
 VAR_14->dio_thread_index = FUNC_2( VAR_8, VAR_12, VAR_14->op);

 VAR_14->done_callback = VAR_11;

 VAR_8->length = sizeof(TrackerHeader);

 VAR_15 = (TrackerHeader *)VAR_8->data;
 VAR_15->status = 0;
 VAR_15->cmd = VAR_3;
 FUNC_1(VAR_10, VAR_15->pkg_len);

 if (VAR_14->calc_crc32)
 {
  VAR_14->crc32 = VAR_0;
 }
 if ((VAR_16=FUNC_3(VAR_8)) != 0)
 {
  if (VAR_14->fd >= 0)
  {
   FUNC_0(VAR_14->fd);
  }
  return VAR_16;
 }

 return VAR_4;
}
