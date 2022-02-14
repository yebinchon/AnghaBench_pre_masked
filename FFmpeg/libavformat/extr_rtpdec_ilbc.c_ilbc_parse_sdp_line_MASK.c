
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** streams; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int block_align; } ;
typedef int PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int *,char const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, int VAR_4,
                               PayloadContext *VAR_5, const char *VAR_6)
{
    const char *VAR_7;
    AVStream *VAR_8;

    if (VAR_4 < 0)
        return 0;
    VAR_8 = VAR_3->streams[VAR_4];

    if (FUNC_2(VAR_6, "fmtp:", &VAR_7)) {
        int VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_5, VAR_7, VAR_2);
        if (VAR_9 < 0)
            return VAR_9;
        if (!VAR_8->codecpar->block_align) {
            FUNC_1(VAR_3, VAR_0, "No iLBC mode set\n");
            return FUNC_0(VAR_1);
        }
    }
    return 0;
}
