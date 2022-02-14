
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; double buf_size; int wave_table_size; int freq; scalar_t__ wave_table_index; void* wave_table; scalar_t__ buf_index; void** buf; } ;
typedef TYPE_1__ VibratoContext ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int channels; double sample_rate; TYPE_3__* dst; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 void** FUNC_1 (int,int) ;
 void* FUNC_2 (double,int) ;
 int FUNC_3 (int ,int ,void*,double,double,int,double) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_4)
{
    int VAR_5;
    AVFilterContext *VAR_6 = VAR_4->dst;
    VibratoContext *VAR_7 = VAR_6->priv;
    VAR_7->channels = VAR_4->channels;

    VAR_7->buf = FUNC_1(VAR_4->channels, sizeof(*VAR_7->buf));
    if (!VAR_7->buf)
        return FUNC_0(VAR_1);
    VAR_7->buf_size = VAR_4->sample_rate * 0.005;
    for (VAR_5 = 0; VAR_5 < VAR_7->channels; VAR_5++) {
        VAR_7->buf[VAR_5] = FUNC_2(VAR_7->buf_size, sizeof(*VAR_7->buf[VAR_5]));
        if (!VAR_7->buf[VAR_5])
            return FUNC_0(VAR_1);
    }
    VAR_7->buf_index = 0;

    VAR_7->wave_table_size = VAR_4->sample_rate / VAR_7->freq;
    VAR_7->wave_table = FUNC_2(VAR_7->wave_table_size, sizeof(*VAR_7->wave_table));
    if (!VAR_7->wave_table)
        return FUNC_0(VAR_1);
    FUNC_3(VAR_3, VAR_0, VAR_7->wave_table, VAR_7->wave_table_size, 0.0, VAR_7->buf_size - 1, 3.0 * VAR_2);
    VAR_7->wave_table_index = 0;

    return 0;
}
