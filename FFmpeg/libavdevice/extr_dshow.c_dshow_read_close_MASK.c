
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dshow_ctx {TYPE_1__* pktl; scalar_t__* event; scalar_t__ mutex; int * device_unique_name; int * device_name; int ** device_filter; scalar_t__* device_pin; scalar_t__* capture_filter; scalar_t__* capture_pin; scalar_t__ graph; scalar_t__ media_event; scalar_t__ control; } ;
struct TYPE_6__ {struct dshow_ctx* priv_data; } ;
struct TYPE_5__ {int pkt; struct TYPE_5__* next; } ;
typedef int IEnumFilters ;
typedef int IBaseFilter ;
typedef TYPE_1__ AVPacketList ;
typedef TYPE_2__ AVFormatContext ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int **,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int **) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static int
FUNC_18(AVFormatContext *VAR_3)
{
    struct dshow_ctx *VAR_4 = VAR_3->priv_data;
    AVPacketList *VAR_5;

    if (VAR_4->control) {
        FUNC_10(VAR_4->control);
        FUNC_9(VAR_4->control);
    }

    if (VAR_4->media_event)
        FUNC_11(VAR_4->media_event);

    if (VAR_4->graph) {
        IEnumFilters *VAR_6;
        int VAR_7;
        VAR_7 = FUNC_6(VAR_4->graph, &VAR_6);
        if (VAR_7 == VAR_1) {
            IBaseFilter *VAR_8;
            FUNC_5(VAR_6);
            while (FUNC_3(VAR_6, 1, &VAR_8, ((void*)0)) == VAR_1) {
                if (FUNC_8(VAR_4->graph, VAR_8) == VAR_1)
                    FUNC_5(VAR_6);

                FUNC_2(VAR_8);
            }
            FUNC_4(VAR_6);
        }
        FUNC_7(VAR_4->graph);
    }

    if (VAR_4->capture_pin[VAR_2])
        FUNC_17(VAR_4->capture_pin[VAR_2]);
    if (VAR_4->capture_pin[VAR_0])
        FUNC_17(VAR_4->capture_pin[VAR_0]);
    if (VAR_4->capture_filter[VAR_2])
        FUNC_16(VAR_4->capture_filter[VAR_2]);
    if (VAR_4->capture_filter[VAR_0])
        FUNC_16(VAR_4->capture_filter[VAR_0]);

    if (VAR_4->device_pin[VAR_2])
        FUNC_12(VAR_4->device_pin[VAR_2]);
    if (VAR_4->device_pin[VAR_0])
        FUNC_12(VAR_4->device_pin[VAR_0]);
    if (VAR_4->device_filter[VAR_2])
        FUNC_2(VAR_4->device_filter[VAR_2]);
    if (VAR_4->device_filter[VAR_0])
        FUNC_2(VAR_4->device_filter[VAR_0]);

    FUNC_14(&VAR_4->device_name[0]);
    FUNC_14(&VAR_4->device_name[1]);
    FUNC_14(&VAR_4->device_unique_name[0]);
    FUNC_14(&VAR_4->device_unique_name[1]);

    if(VAR_4->mutex)
        FUNC_0(VAR_4->mutex);
    if(VAR_4->event[0])
        FUNC_0(VAR_4->event[0]);
    if(VAR_4->event[1])
        FUNC_0(VAR_4->event[1]);

    VAR_5 = VAR_4->pktl;
    while (VAR_5) {
        AVPacketList *VAR_9 = VAR_5->next;
        FUNC_15(&VAR_5->pkt);
        FUNC_13(VAR_5);
        VAR_5 = VAR_9;
    }

    FUNC_1();

    return 0;
}
