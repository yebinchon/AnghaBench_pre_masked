
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int size; scalar_t__ data; } ;
struct TYPE_5__ {int den; int num; } ;
struct TYPE_6__ {int self_size; TYPE_1__ qoffset; int bottom; int right; int top; int left; } ;
typedef TYPE_2__ AVRegionOfInterest ;
typedef TYPE_3__ AVFrameSideData ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_2, AVFrameSideData *VAR_3)
{
    int VAR_4;
    const AVRegionOfInterest *VAR_5;
    uint32_t VAR_6;

    VAR_5 = (const AVRegionOfInterest *)VAR_3->data;
    VAR_6 = VAR_5->self_size;
    if (!VAR_6 || VAR_3->size % VAR_6 != 0) {
        FUNC_0(VAR_2, VAR_0, "Invalid AVRegionOfInterest.self_size.");
        return;
    }
    VAR_4 = VAR_3->size / VAR_6;

    FUNC_0(VAR_2, VAR_1, "Regions Of Interest(RoI) information: ");
    for (int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_5 = (const AVRegionOfInterest *)(VAR_3->data + VAR_6 * VAR_7);
        FUNC_0(VAR_2, VAR_1, "index: %d, region: (%d, %d)/(%d, %d), qp offset: %d/%d.\n",
               VAR_7, VAR_5->left, VAR_5->top, VAR_5->right, VAR_5->bottom, VAR_5->qoffset.num, VAR_5->qoffset.den);
    }
}
