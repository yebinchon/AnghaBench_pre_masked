
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int source_track_id; int source_package_uid; int source_package_ul; void* start_position; void* duration; } ;
typedef TYPE_1__ MXFStructuralComponent ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFStructuralComponent *VAR_6 = VAR_0;
    switch(VAR_2) {
    case 0x0202:
        VAR_6->duration = FUNC_1(VAR_1);
        break;
    case 0x1201:
        VAR_6->start_position = FUNC_1(VAR_1);
        break;
    case 0x1101:

        FUNC_2(VAR_1, VAR_6->source_package_ul, 16);
        FUNC_2(VAR_1, VAR_6->source_package_uid, 16);
        break;
    case 0x1102:
        VAR_6->source_track_id = FUNC_0(VAR_1);
        break;
    }
    return 0;
}
