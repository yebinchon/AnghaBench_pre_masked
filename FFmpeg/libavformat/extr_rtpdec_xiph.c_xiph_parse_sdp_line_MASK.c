
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * streams; } ;
typedef int PayloadContext ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (TYPE_1__*,int ,int *,char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2,
                               PayloadContext *VAR_3, const char *VAR_4)
{
    const char *VAR_5;

    if (VAR_2 < 0)
        return 0;

    if (FUNC_0(VAR_4, "fmtp:", &VAR_5)) {
        return FUNC_1(VAR_1, VAR_1->streams[VAR_2], VAR_3, VAR_5,
                             VAR_0);
    }

    return 0;
}
