
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * last_sync_timestamps; int alloc_size; int * http_servers; int * all_servers; int * active_servers; int * sorted_servers; } ;
typedef TYPE_1__ FDFSGroupInfo ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(FDFSGroupInfo *VAR_1)
{
 if (VAR_1->sorted_servers != ((void*)0))
 {
  FUNC_0(VAR_1->sorted_servers);
  VAR_1->sorted_servers = ((void*)0);
 }

 if (VAR_1->active_servers != ((void*)0))
 {
  FUNC_0(VAR_1->active_servers);
  VAR_1->active_servers = ((void*)0);
 }

 if (VAR_1->all_servers != ((void*)0))
 {
  FUNC_2(VAR_1->all_servers, VAR_1->alloc_size);

  VAR_1->all_servers = ((void*)0);
 }
 FUNC_1(VAR_1->last_sync_timestamps, VAR_1->alloc_size);

 VAR_1->last_sync_timestamps = ((void*)0);
}
