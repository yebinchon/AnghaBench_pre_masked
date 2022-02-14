
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_1__* pb; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int pts; } ;
struct TYPE_5__ {int seekable; } ;
typedef TYPE_2__ CineDemuxContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_5, int VAR_6, int64_t VAR_7, int VAR_8)
{
    CineDemuxContext *VAR_9 = VAR_5->priv_data;

    if ((VAR_8 & VAR_2) || (VAR_8 & VAR_1))
        return FUNC_0(VAR_4);

    if (!(VAR_5->pb->seekable & VAR_0))
        return FUNC_0(VAR_3);

    VAR_9->pts = VAR_7;
    return 0;
}
