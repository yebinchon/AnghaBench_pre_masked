
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_7__ {int output_pads; } ;
struct TYPE_6__ {int sink; } ;
typedef TYPE_1__ Stream ;
typedef int AVFilterGraph ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(Stream *VAR_2, AVFilterGraph *VAR_3,
                       AVFilterContext *VAR_4, int VAR_5)
{
    enum AVMediaType VAR_6 = FUNC_5(VAR_4->output_pads, VAR_5);
    const char *VAR_7;
    int VAR_8;

    switch (VAR_6) {
    case 128: VAR_7 = "buffersink"; break;
    case 129: VAR_7 = "abuffersink"; break;
    default:
        FUNC_1(((void*)0), VAR_0, "Stream type not supported\n");
        return FUNC_0(VAR_1);
    }
    VAR_8 = FUNC_3(&VAR_2->sink,
                                       FUNC_2(VAR_7),
                                       ((void*)0), ((void*)0), ((void*)0), VAR_3);
    if (VAR_8 < 0)
        return VAR_8;
    VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_2->sink, 0);
    if (VAR_8 < 0)
        return VAR_8;
    return 0;
}
