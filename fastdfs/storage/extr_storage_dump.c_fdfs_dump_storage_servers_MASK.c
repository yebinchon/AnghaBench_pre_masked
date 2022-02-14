
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int szLastSyncSrcTimestamp ;
struct TYPE_5__ {char* ip_addr; int status; } ;
struct TYPE_6__ {TYPE_1__ server; int last_sync_src_timestamp; } ;
typedef TYPE_2__ FDFSStorageServer ;


 char* FUNC_0 (int ,char*,char*,int) ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*,int const,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_3, const int VAR_4)
{
 int VAR_5;
 char VAR_6[32];
 FDFSStorageServer *VAR_7;
 FDFSStorageServer *VAR_8;
 FDFSStorageServer **VAR_9;
 FDFSStorageServer **VAR_10;

 VAR_5 = FUNC_1(VAR_3, VAR_4,
   "\ng_storage_count=%d\n", VAR_1);
 VAR_8 = VAR_2 + VAR_1;
 for (VAR_7=VAR_2; VAR_7<VAR_8; VAR_7++)
 {
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_4 - VAR_5,
   "\t%d. server: %s, status: %d, sync timestamp: %s\n",
   (int)(VAR_7 - VAR_2) + 1,
   VAR_7->server.ip_addr, VAR_7->server.status,
   FUNC_0(VAR_7->last_sync_src_timestamp,
    "%Y-%m-%d %H:%M:%S", VAR_6,
    sizeof(VAR_6)));
 }

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_4 - VAR_5,
   "sorted storage servers:\n");
 VAR_10 = VAR_0 + VAR_1;
 for (VAR_9=VAR_0; VAR_9<VAR_10; VAR_9++)
 {
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_4 - VAR_5,
   "\t%d. server: %s\n",
   (int)(VAR_9 - VAR_0) + 1,
   (*VAR_9)->server.ip_addr);
 }

 return VAR_5;
}
