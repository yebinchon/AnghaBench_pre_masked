
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct event_info {int x1; int y1; int x2; int y2; int duration; int pts; int pos; } ;
struct TYPE_9__ {int len; char* str; } ;
struct TYPE_8__ {int duration; int pts; int pos; } ;
typedef int FFDemuxSubtitlesQueue ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int * FUNC_4 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_5 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(FFDemuxSubtitlesQueue *VAR_2, AVBPrint *VAR_3, char *VAR_4,
                     const struct event_info *VAR_5, int VAR_6)
{
    if (VAR_6 && VAR_4[0])
        FUNC_3(VAR_3, "%s\n", VAR_4);
    VAR_4[0] = 0;

    while (VAR_3->len > 0 && VAR_3->str[VAR_3->len - 1] == '\n')
        VAR_3->str[--VAR_3->len] = 0;

    if (VAR_3->len) {
        AVPacket *VAR_7 = FUNC_5(VAR_2, VAR_3->str, VAR_3->len, 0);
        if (!VAR_7)
            return FUNC_0(VAR_1);
        FUNC_2(VAR_3);
        VAR_7->pos = VAR_5->pos;
        VAR_7->pts = VAR_5->pts;
        VAR_7->duration = VAR_5->duration;
        if (VAR_5->x1 != -1) {
            uint8_t *VAR_8 = FUNC_4(VAR_7, VAR_0, 16);
            if (VAR_8) {
                FUNC_1(VAR_8, VAR_5->x1);
                FUNC_1(VAR_8 + 4, VAR_5->y1);
                FUNC_1(VAR_8 + 8, VAR_5->x2);
                FUNC_1(VAR_8 + 12, VAR_5->y2);
            }
        }
    }

    return 0;
}
