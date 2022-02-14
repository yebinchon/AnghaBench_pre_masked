
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pb; } ;
struct TYPE_6__ {scalar_t__ stream_index; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    if (FUNC_1(VAR_3->pb, VAR_4, VAR_2) <= 0)
        return FUNC_0(VAR_1);
    VAR_4->flags &= ~VAR_0;
    VAR_4->stream_index = 0;
    return 0;
}
