
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ int16_t ;
struct TYPE_9__ {int width; } ;
struct TYPE_8__ {TYPE_2__* last_frame; } ;
typedef TYPE_1__ IpvideoContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_1(IpvideoContext *VAR_0, AVFrame *VAR_1, int16_t VAR_2)
{
    int VAR_3, VAR_4;

    if (VAR_2 < 0) {
        VAR_3 = ((uint16_t)VAR_2 - 0xC000) % VAR_1->width;
        VAR_4 = ((uint16_t)VAR_2 - 0xC000) / VAR_1->width;
        FUNC_0(VAR_0, VAR_0->last_frame, VAR_1, VAR_3, VAR_4);
    } else if (VAR_2 > 0) {
        VAR_3 = ((uint16_t)VAR_2 - 0x4000) % VAR_1->width;
        VAR_4 = ((uint16_t)VAR_2 - 0x4000) / VAR_1->width;
        FUNC_0(VAR_0, VAR_1, VAR_1, VAR_3, VAR_4);
    }
}
