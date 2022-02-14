
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; int maps; } ;
struct TYPE_4__ {char const* ip_addr; int port; int * idInfo; int * group_name; } ;
typedef TYPE_1__ FDFSStorageIdMap ;
typedef int FDFSStorageIdInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

FDFSStorageIdInfo *FUNC_1(const char *VAR_2,
        const int VAR_3)
{
 FDFSStorageIdMap VAR_4;
 FDFSStorageIdMap *VAR_5;
    int VAR_6[2];
    int VAR_7;

 VAR_4.ip_addr = VAR_2;
 VAR_4.group_name = ((void*)0);
    VAR_4.idInfo = ((void*)0);
    VAR_6[0] = VAR_3;
    VAR_6[1] = 0;
    for (VAR_7=0; VAR_7<2; VAR_7++)
    {
        VAR_4.port = VAR_6[VAR_7];
        VAR_5 = (FDFSStorageIdMap *)FUNC_0(&VAR_4,
                VAR_1.maps,
                VAR_1.count,
                sizeof(FDFSStorageIdMap), VAR_0);
        if (VAR_5 != ((void*)0))
        {
            return VAR_5->idInfo;
        }
    }

    return ((void*)0);
}
