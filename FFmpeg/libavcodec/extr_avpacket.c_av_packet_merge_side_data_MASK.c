
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int * data; } ;
struct TYPE_8__ {int side_data_elems; scalar_t__ size; TYPE_1__* side_data; int * data; TYPE_3__* buf; } ;
struct TYPE_7__ {scalar_t__ size; int type; int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **,scalar_t__) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,int *,scalar_t__) ;
 int FUNC_7 (int *,int ,scalar_t__) ;

int FUNC_8(AVPacket *VAR_5){
    if(VAR_5->side_data_elems){
        AVBufferRef *VAR_6;
        int VAR_7;
        uint8_t *VAR_8;
        uint64_t VAR_9= VAR_5->size + 8LL + VAR_0;
        AVPacket VAR_10= *VAR_5;
        for (VAR_7=0; VAR_7<VAR_10.side_data_elems; VAR_7++) {
            VAR_9 += VAR_10.side_data[VAR_7].size + 5LL;
        }
        if (VAR_9 > VAR_4)
            return FUNC_0(VAR_1);
        VAR_6 = FUNC_2(VAR_9);
        if (!VAR_6)
            return FUNC_0(VAR_2);
        VAR_5->buf = VAR_6;
        VAR_5->data = VAR_8 = VAR_6->data;
        VAR_5->size = VAR_9 - VAR_0;
        FUNC_6(&VAR_8, VAR_10.data, VAR_10.size);
        for (VAR_7=VAR_10.side_data_elems-1; VAR_7>=0; VAR_7--) {
            FUNC_6(&VAR_8, VAR_10.side_data[VAR_7].data, VAR_10.side_data[VAR_7].size);
            FUNC_4(&VAR_8, VAR_10.side_data[VAR_7].size);
            *VAR_8++ = VAR_10.side_data[VAR_7].type | ((VAR_7==VAR_10.side_data_elems-1)*128);
        }
        FUNC_5(&VAR_8, VAR_3);
        FUNC_1(VAR_8-VAR_5->data == VAR_5->size);
        FUNC_7(VAR_8, 0, VAR_0);
        FUNC_3(&VAR_10);
        VAR_5->side_data_elems = 0;
        VAR_5->side_data = ((void*)0);
        return 1;
    }
    return 0;
}
