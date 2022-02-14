
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ extradata_size; int extradata; } ;
struct TYPE_6__ {int pb; TYPE_1__** streams; } ;
struct TYPE_5__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    const AVCodecParameters *VAR_1 = VAR_0->streams[0]->codecpar;

    if (VAR_1->extradata_size) {
        FUNC_1(VAR_0->pb, VAR_1->extradata, VAR_1->extradata_size - 1);
        FUNC_0(VAR_0->pb);
    }
    return 0;
}
