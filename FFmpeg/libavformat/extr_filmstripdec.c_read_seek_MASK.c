
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int pb; TYPE_2__** streams; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int width; int height; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    if (FUNC_1(VAR_1->pb, FUNC_0(VAR_3, 0) * VAR_5->codecpar->width * VAR_5->codecpar->height * 4, VAR_0) < 0)
        return -1;
    return 0;
}
