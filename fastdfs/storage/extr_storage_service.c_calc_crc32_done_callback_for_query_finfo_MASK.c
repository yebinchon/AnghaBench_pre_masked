
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fast_task_info {int length; scalar_t__ data; scalar_t__ arg; } ;
struct TYPE_4__ {int status; int pkg_len; int cmd; } ;
typedef TYPE_1__ TrackerHeader ;
struct TYPE_5__ {int crc32; } ;
struct TYPE_6__ {int total_length; scalar_t__ total_offset; scalar_t__ extra_arg; TYPE_2__ file_context; } ;
typedef int StorageFileInfoForCRC32 ;
typedef TYPE_2__ StorageFileContext ;
typedef TYPE_3__ StorageClientInfo ;


 int VAR_0 ;
 int FUNC_0 (struct fast_task_info*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct fast_task_info*,int *,int ) ;
 int FUNC_4 (struct fast_task_info*) ;

__attribute__((used)) static void FUNC_5(
        struct fast_task_info *VAR_3, const int VAR_4)
{
 StorageClientInfo *VAR_5;
    StorageFileInfoForCRC32 *VAR_6;
 StorageFileContext *VAR_7;
 TrackerHeader *VAR_8;
 int VAR_9;

 VAR_5 = (StorageClientInfo *)VAR_3->arg;
 VAR_7 = &(VAR_5->file_context);
    VAR_6 = (StorageFileInfoForCRC32 *)VAR_5->extra_arg;

 if (VAR_4 == 0)
 {
        VAR_9 = FUNC_3(VAR_3, VAR_6,
                VAR_7->crc32);
 }
 else
 {
  VAR_9 = VAR_4;
        VAR_5->total_length = sizeof(TrackerHeader);
 }

    FUNC_1(&VAR_2, VAR_6);

 VAR_5->total_offset = 0;
 VAR_3->length = VAR_5->total_length;

 VAR_8 = (TrackerHeader *)VAR_3->data;
 VAR_8->status = VAR_9;
 VAR_8->cmd = VAR_1;
 FUNC_2(VAR_3->length - sizeof(TrackerHeader), VAR_8->pkg_len);

    FUNC_0(VAR_3, VAR_0, VAR_9);
 FUNC_4(VAR_3);
}
