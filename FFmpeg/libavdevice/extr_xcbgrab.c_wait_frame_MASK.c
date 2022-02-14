
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ time_frame; int time_base; } ;
typedef TYPE_1__ XCBGrabContext ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ pts; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    XCBGrabContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4, VAR_5;
    int64_t VAR_6 = FUNC_1(1, VAR_3->time_base, VAR_0);

    VAR_3->time_frame += VAR_6;

    for (;;) {
        VAR_4 = FUNC_0();
        VAR_5 = VAR_3->time_frame - VAR_4;
        if (VAR_5 <= 0)
            break;
        FUNC_2(VAR_5);
    }

    VAR_2->pts = VAR_4;
}
