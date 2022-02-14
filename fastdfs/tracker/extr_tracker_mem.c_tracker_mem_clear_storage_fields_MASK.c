
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int store_path_count; int stat; scalar_t__ current_write_path; scalar_t__ upload_priority; scalar_t__ subdir_count_per_path; scalar_t__ changelog_offset; scalar_t__ free_mb; scalar_t__ total_mb; scalar_t__ sync_until_timestamp; int * psync_src_server; int * path_free_mbs; int * path_total_mbs; } ;
typedef int FDFSStorageStat ;
typedef TYPE_1__ FDFSStorageDetail ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(FDFSStorageDetail *VAR_0)
{
        if (VAR_0->path_total_mbs != ((void*)0))
 {
  FUNC_0(VAR_0->path_total_mbs, 0, sizeof(int64_t) * VAR_0->store_path_count);

 }

        if (VAR_0->path_free_mbs != ((void*)0))
 {
  FUNC_0(VAR_0->path_free_mbs, 0, sizeof(int64_t) * VAR_0->store_path_count);

 }

 VAR_0->psync_src_server = ((void*)0);
 VAR_0->sync_until_timestamp = 0;
 VAR_0->total_mb = 0;
 VAR_0->free_mb = 0;
 VAR_0->changelog_offset = 0;
 VAR_0->store_path_count = 0;
 VAR_0->subdir_count_per_path = 0;
 VAR_0->upload_priority = 0;
 VAR_0->current_write_path = 0;

 FUNC_0(&(VAR_0->stat), 0, sizeof(FDFSStorageStat));
}
