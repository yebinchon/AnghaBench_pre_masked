
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ error; } ;
struct TYPE_7__ {int flush_packets; int flags; TYPE_4__* pb; TYPE_1__* oformat; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_4)
{
    if (VAR_4->pb && VAR_4->pb->error >= 0) {
        if (VAR_4->flush_packets == 1 || VAR_4->flags & VAR_0)
            FUNC_0(VAR_4->pb);
        else if (VAR_4->flush_packets && !(VAR_4->oformat->flags & VAR_1))
            FUNC_1(VAR_4->pb, VAR_3, VAR_2);
    }
}
