
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_2__* priv_data; } ;
struct TYPE_14__ {int version; int time_out; int compute_edt; TYPE_1__* display_list; } ;
struct TYPE_13__ {int region_id; struct TYPE_13__* next; void* y_pos; void* x_pos; } ;
typedef TYPE_1__ DVBSubRegionDisplay ;
typedef TYPE_2__ DVBSubContext ;
typedef int AVSubtitle ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int const*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,char*,int,int,...) ;
 int FUNC_9 (TYPE_3__*,int *,int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3,
                                     const uint8_t *VAR_4, int VAR_5, AVSubtitle *VAR_6, int *VAR_7)
{
    DVBSubContext *VAR_8 = VAR_3->priv_data;
    DVBSubRegionDisplay *VAR_9;
    DVBSubRegionDisplay *VAR_10, **VAR_11;

    const uint8_t *VAR_12 = VAR_4 + VAR_5;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;

    if (VAR_5 < 1)
        return VAR_0;

    VAR_15 = *VAR_4++;
    VAR_16 = ((*VAR_4)>>4) & 15;
    VAR_14 = ((*VAR_4++) >> 2) & 3;

    if (VAR_8->version == VAR_16) {
        return 0;
    }

    VAR_8->time_out = VAR_15;
    VAR_8->version = VAR_16;

    FUNC_8(VAR_3, "Page time out %ds, state %d\n", VAR_8->time_out, VAR_14);

    if(VAR_8->compute_edt == 1)
        FUNC_9(VAR_3, VAR_6, VAR_7);

    if (VAR_14 == 1 || VAR_14 == 2) {
        FUNC_7(VAR_8);
        FUNC_6(VAR_8);
        FUNC_5(VAR_8);
    }

    VAR_10 = VAR_8->display_list;
    VAR_8->display_list = ((void*)0);

    while (VAR_4 + 5 < VAR_12) {
        VAR_13 = *VAR_4++;
        VAR_4 += 1;

        VAR_9 = VAR_8->display_list;
        while (VAR_9 && VAR_9->region_id != VAR_13) {
            VAR_9 = VAR_9->next;
        }
        if (VAR_9) {
            FUNC_3(VAR_3, VAR_1, "duplicate region\n");
            break;
        }

        VAR_9 = VAR_10;
        VAR_11 = &VAR_10;

        while (VAR_9 && VAR_9->region_id != VAR_13) {
            VAR_11 = &VAR_9->next;
            VAR_9 = VAR_9->next;
        }

        if (!VAR_9) {
            VAR_9 = FUNC_4(sizeof(DVBSubRegionDisplay));
            if (!VAR_9)
                return FUNC_0(VAR_2);
        }

        VAR_9->region_id = VAR_13;

        VAR_9->x_pos = FUNC_1(VAR_4);
        VAR_4 += 2;
        VAR_9->y_pos = FUNC_1(VAR_4);
        VAR_4 += 2;

        *VAR_11 = VAR_9->next;

        VAR_9->next = VAR_8->display_list;
        VAR_8->display_list = VAR_9;

        FUNC_8(VAR_3, "Region %d, (%d,%d)\n", VAR_13, VAR_9->x_pos, VAR_9->y_pos);
    }

    while (VAR_10) {
        VAR_9 = VAR_10;

        VAR_10 = VAR_9->next;

        FUNC_2(&VAR_9);
    }

    return 0;
}
