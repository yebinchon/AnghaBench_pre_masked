
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__** streams; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int sampling; scalar_t__ height; scalar_t__ width; int depth; } ;
struct TYPE_12__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_2__ PayloadContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_2__*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, int VAR_2,
                                  PayloadContext *VAR_3, const char *VAR_4)
{
    const char *VAR_5;

    if (VAR_2 < 0)
        return 0;

    if (FUNC_1(VAR_4, "fmtp:", &VAR_5)) {
        AVStream *VAR_6 = VAR_1->streams[VAR_2];
        int VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_3, VAR_5, VAR_0);

        if (VAR_7 < 0)
            return VAR_7;


        if (!VAR_3->sampling || !VAR_3->depth || !VAR_3->width || !VAR_3->height)
            return -1;

        VAR_6->codecpar->width = VAR_3->width;
        VAR_6->codecpar->height = VAR_3->height;

        VAR_7 = FUNC_3(VAR_6, VAR_3);
        FUNC_0(&VAR_3->sampling);

        return VAR_7;
    }

    return 0;
}
