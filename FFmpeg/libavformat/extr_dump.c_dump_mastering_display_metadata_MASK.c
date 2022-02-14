
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_luminance; int min_luminance; int * white_point; int ** display_primaries; int has_luminance; int has_primaries; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ AVPacketSideData ;
typedef TYPE_2__ AVMasteringDisplayMetadata ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, AVPacketSideData* VAR_2) {
    AVMasteringDisplayMetadata* VAR_3 = (AVMasteringDisplayMetadata*)VAR_2->data;
    FUNC_0(VAR_1, VAR_0, "Mastering Display Metadata, "
           "has_primaries:%d has_luminance:%d "
           "r(%5.4f,%5.4f) g(%5.4f,%5.4f) b(%5.4f %5.4f) wp(%5.4f, %5.4f) "
           "min_luminance=%f, max_luminance=%f",
           VAR_3->has_primaries, VAR_3->has_luminance,
           FUNC_1(VAR_3->display_primaries[0][0]),
           FUNC_1(VAR_3->display_primaries[0][1]),
           FUNC_1(VAR_3->display_primaries[1][0]),
           FUNC_1(VAR_3->display_primaries[1][1]),
           FUNC_1(VAR_3->display_primaries[2][0]),
           FUNC_1(VAR_3->display_primaries[2][1]),
           FUNC_1(VAR_3->white_point[0]), FUNC_1(VAR_3->white_point[1]),
           FUNC_1(VAR_3->min_luminance), FUNC_1(VAR_3->max_luminance));
}
