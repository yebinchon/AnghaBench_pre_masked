
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {scalar_t__ height; int width; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(AVStream *VAR_1, AVIOContext *VAR_2,
                              int VAR_3, const char *VAR_4, char *VAR_5,
                              char *VAR_6, char *VAR_7) {

    if (!VAR_2 || !VAR_4)
        return;

    if (!VAR_3) {
        FUNC_0(((void*)0), VAR_0,
                "Bandwidth info not available, set audio and video bitrates\n");
        return;
    }

    FUNC_1(VAR_2, "#EXT-X-STREAM-INF:BANDWIDTH=%d", VAR_3);
    if (VAR_1 && VAR_1->codecpar->width > 0 && VAR_1->codecpar->height > 0)
        FUNC_1(VAR_2, ",RESOLUTION=%dx%d", VAR_1->codecpar->width,
                VAR_1->codecpar->height);
    if (VAR_6 && FUNC_2(VAR_6) > 0)
        FUNC_1(VAR_2, ",CODECS=\"%s\"", VAR_6);
    if (VAR_5 && FUNC_2(VAR_5) > 0)
        FUNC_1(VAR_2, ",AUDIO=\"group_%s\"", VAR_5);
    if (VAR_7 && FUNC_2(VAR_7) > 0)
        FUNC_1(VAR_2, ",CLOSED-CAPTIONS=\"%s\"", VAR_7);
    FUNC_1(VAR_2, "\n%s\n\n", VAR_4);
}
