
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ch_count; int bps; scalar_t__* ch; int planar; } ;
struct SwrContext {int in_buffer_count; int in_buffer_index; TYPE_2__ in_buffer; TYPE_1__* resample; } ;
struct TYPE_4__ {int filter_length; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AudioData ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(struct SwrContext *VAR_0) {
    ResampleContext *VAR_1 = VAR_0->resample;
    AudioData *VAR_2= &VAR_0->in_buffer;
    int VAR_3, VAR_4, VAR_5;
    int VAR_6 = (FUNC_0(VAR_0->in_buffer_count, VAR_1->filter_length) + 1) / 2;

    if((VAR_5 = FUNC_3(VAR_2, VAR_0->in_buffer_index + VAR_0->in_buffer_count + VAR_6)) < 0)
        return VAR_5;
    FUNC_1(VAR_2->planar);
    for(VAR_3=0; VAR_3<VAR_2->ch_count; VAR_3++){
        for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
            FUNC_2(VAR_2->ch[VAR_3] + (VAR_0->in_buffer_index+VAR_0->in_buffer_count+VAR_4 )*VAR_2->bps,
                VAR_2->ch[VAR_3] + (VAR_0->in_buffer_index+VAR_0->in_buffer_count-VAR_4-1)*VAR_2->bps, VAR_2->bps);
        }
    }
    VAR_0->in_buffer_count += VAR_6;
    return 0;
}
