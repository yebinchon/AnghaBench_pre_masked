
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; int alloc_size; int store_lookup; int store_server; int download_server; int store_path; char* store_group; int current_write_group; TYPE_1__* pStoreGroup; } ;
struct TYPE_3__ {char* group_name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int const,char*,int,int,int,int,int,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, const int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2,
  "group count=%d\n"
  "group alloc_size=%d\n"
  "store_lookup=%d\n"
  "store_server=%d\n"
  "download_server=%d\n"
  "store_path=%d\n"
  "store_group=%s\n"
  "pStoreGroup=%s\n"
  "current_write_group=%d\n",
  VAR_0.count,
  VAR_0.alloc_size,
  VAR_0.store_lookup,
  VAR_0.store_server,
  VAR_0.download_server,
  VAR_0.store_path,
  VAR_0.store_group,
  VAR_0.pStoreGroup != ((void*)0) ?
   VAR_0.pStoreGroup->group_name : "",
  VAR_0.current_write_group
 );

 return VAR_3;
}
