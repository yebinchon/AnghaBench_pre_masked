
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int pts; int size; int* data; } ;
struct TYPE_7__ {int inside; int prev_h; int prev_m; int prev_s; int prev_f; scalar_t__ n; } ;
typedef TYPE_1__ SCCContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    SCCContext *VAR_4 = VAR_2->priv_data;
    int64_t VAR_5 = VAR_3->pts;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    if (VAR_5 == VAR_1) {
        FUNC_0(VAR_2, VAR_0,
               "Insufficient timestamps.\n");
        return 0;
    }

    VAR_7 = (int)(VAR_5 / (3600000));
    VAR_8 = (int)(VAR_5 / (60000)) % 60;
    VAR_9 = (int)(VAR_5 / 1000) % 60;
    VAR_10 = (int)(VAR_5 % 1000) / 33;

    for (VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6+=3) {
        if (VAR_3->data[VAR_6] == 0xfc && ((VAR_3->data[VAR_6 + 1] != 0x80 || VAR_3->data[VAR_6 + 2] != 0x80)))
            break;
    }
    if (VAR_6 >= VAR_3->size)
        return 0;

    if (!VAR_4->inside && (VAR_4->prev_h != VAR_7 || VAR_4->prev_m != VAR_8 || VAR_4->prev_s != VAR_9 || VAR_4->prev_f != VAR_10)) {
        FUNC_1(VAR_2->pb, "\n%02d:%02d:%02d:%02d\t", VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_4->inside = 1;
    }
    for (VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6+=3) {
        if (VAR_6 + 3 > VAR_3->size)
            break;

        if (VAR_3->data[VAR_6] != 0xfc || (VAR_3->data[VAR_6 + 1] == 0x80 && VAR_3->data[VAR_6 + 2] == 0x80))
            continue;
        if (!VAR_4->inside) {
            FUNC_1(VAR_2->pb, "\n%02d:%02d:%02d:%02d\t", VAR_7, VAR_8, VAR_9, VAR_10);
            VAR_4->inside = 1;
        }
        if (VAR_4->n > 0)
            FUNC_1(VAR_2->pb, " ");
        FUNC_1(VAR_2->pb, "%02x%02x", VAR_3->data[VAR_6 + 1], VAR_3->data[VAR_6 + 2]);
        VAR_4->n++;
    }
    if (VAR_4->inside && (VAR_4->prev_h != VAR_7 || VAR_4->prev_m != VAR_8 || VAR_4->prev_s != VAR_9 || VAR_4->prev_f != VAR_10)) {
        FUNC_1(VAR_2->pb, "\n");
        VAR_4->n = 0;
        VAR_4->inside = 0;
    }

    VAR_4->prev_h = VAR_7;
    VAR_4->prev_m = VAR_8;
    VAR_4->prev_s = VAR_9;
    VAR_4->prev_f = VAR_10;
    return 0;
}
