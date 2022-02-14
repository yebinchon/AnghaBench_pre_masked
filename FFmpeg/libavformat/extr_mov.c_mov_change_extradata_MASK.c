
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t last_stsd_index; size_t stsc_index; int* extradata_size; int ** extradata; TYPE_1__* stsc_data; } ;
struct TYPE_4__ {size_t id; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(MOVStreamContext *VAR_2, AVPacket *VAR_3)
{
    uint8_t *VAR_4, *VAR_5;
    int VAR_6;


    VAR_2->last_stsd_index = VAR_2->stsc_data[VAR_2->stsc_index].id - 1;


    VAR_6 = VAR_2->extradata_size[VAR_2->last_stsd_index];
    VAR_5 = VAR_2->extradata[VAR_2->last_stsd_index];
    if (VAR_6 > 0 && VAR_5) {
        VAR_4 = FUNC_1(VAR_3,
                                       VAR_0,
                                       VAR_6);
        if (!VAR_4)
            return FUNC_0(VAR_1);
        FUNC_2(VAR_4, VAR_5, VAR_6);
    }

    return 0;
}
