
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_4__ {int duration; int dts; int pts; } ;
typedef int FailingMuxerPacketData ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVPacket *VAR_1, const FailingMuxerPacketData *VAR_2, int64_t VAR_3)
{
    int VAR_4;
    FailingMuxerPacketData *VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5) {
        return FUNC_0(VAR_0);
    }
    FUNC_3(VAR_5, VAR_2, sizeof(FailingMuxerPacketData));
    VAR_4 = FUNC_2(VAR_1, (uint8_t*) VAR_5, sizeof(*VAR_5));

    VAR_1->pts = VAR_1->dts = VAR_3;
    VAR_1->duration = 1;

    return VAR_4;
}
