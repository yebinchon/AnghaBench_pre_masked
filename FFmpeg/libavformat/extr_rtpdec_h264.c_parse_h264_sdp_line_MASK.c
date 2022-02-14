
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** streams; } ;
struct TYPE_6__ {int codecpar; } ;
typedef int PayloadContext ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int VAR_2,
                               PayloadContext *VAR_3, const char *VAR_4)
{
    AVStream *VAR_5;
    const char *VAR_6 = VAR_4;

    if (VAR_2 < 0)
        return 0;

    VAR_5 = VAR_1->streams[VAR_2];

    if (FUNC_0(VAR_6, "framesize:", &VAR_6)) {
        FUNC_1(VAR_5->codecpar, VAR_6);
    } else if (FUNC_0(VAR_6, "fmtp:", &VAR_6)) {
        return FUNC_2(VAR_1, VAR_5, VAR_3, VAR_6, VAR_0);
    } else if (FUNC_0(VAR_6, "cliprect:", &VAR_6)) {

    }

    return 0;
}
