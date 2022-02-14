
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; int ids; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ FDFSStorageIdInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int,char*,char const*) ;

FDFSStorageIdInfo *FUNC_3(const char *VAR_2)
{
 FDFSStorageIdInfo VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(FDFSStorageIdInfo));
 FUNC_2(VAR_3.id, sizeof(VAR_3.id), "%s", VAR_2);
 return (FDFSStorageIdInfo *)FUNC_0(&VAR_3,
            VAR_1.ids, VAR_1.count,
            sizeof(FDFSStorageIdInfo), VAR_0);
}
