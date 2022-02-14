
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int count; TYPE_2__** all_servers; } ;
struct TYPE_5__ {scalar_t__ success_delete_count; scalar_t__ success_upload_count; } ;
struct TYPE_6__ {TYPE_1__ stat; } ;
typedef TYPE_2__ FDFSStorageDetail ;
typedef TYPE_3__ FDFSGroupInfo ;



int FUNC_0(FDFSGroupInfo *VAR_0)
{
 int VAR_1;
 FDFSStorageDetail **VAR_2;
 FDFSStorageDetail **VAR_3;

 VAR_1 = 0;
 VAR_3 = VAR_0->all_servers + VAR_0->count;
 for (VAR_2=VAR_0->all_servers; VAR_2<VAR_3; VAR_2++)
 {
  VAR_1 += (*VAR_2)->stat.success_upload_count - (*VAR_2)->stat.success_delete_count;

 }

 return VAR_1;
}
