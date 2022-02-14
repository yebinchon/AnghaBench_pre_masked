
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** streams; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ format; } ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_3)
{
    if (VAR_3->streams[0]->codecpar->format != VAR_2) {
        FUNC_0(VAR_3, VAR_1, "only AV_PIX_FMT_RGBA is supported\n");
        return VAR_0;
    }
    return 0;
}
