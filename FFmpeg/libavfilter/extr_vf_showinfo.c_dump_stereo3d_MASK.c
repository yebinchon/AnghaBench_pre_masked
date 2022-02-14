
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ data; } ;
struct TYPE_4__ {int flags; int type; } ;
typedef TYPE_1__ AVStereo3D ;
typedef TYPE_2__ AVFrameSideData ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_3, AVFrameSideData *VAR_4)
{
    AVStereo3D *VAR_5;

    FUNC_0(VAR_3, VAR_1, "stereoscopic information: ");
    if (VAR_4->size < sizeof(*VAR_5)) {
        FUNC_0(VAR_3, VAR_0, "invalid data");
        return;
    }

    VAR_5 = (AVStereo3D *)VAR_4->data;

    FUNC_0(VAR_3, VAR_1, "type - %s", FUNC_1(VAR_5->type));

    if (VAR_5->flags & VAR_2)
        FUNC_0(VAR_3, VAR_1, " (inverted)");
}
