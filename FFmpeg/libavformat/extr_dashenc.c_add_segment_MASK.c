
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_7__ {int nb_segments; int segments_size; int segment_index; TYPE_1__** segments; } ;
struct TYPE_6__ {scalar_t__ time; void* index_length; void* range_length; void* start_pos; void* duration; int file; } ;
typedef TYPE_1__ Segment ;
typedef TYPE_2__ OutputStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char const*,int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__***,int) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(OutputStream *VAR_2, const char *VAR_3,
                       int64_t VAR_4, int64_t VAR_5,
                       int64_t VAR_6, int64_t VAR_7,
                       int64_t VAR_8, int VAR_9)
{
    int VAR_10;
    Segment *VAR_11;
    if (VAR_2->nb_segments >= VAR_2->segments_size) {
        VAR_2->segments_size = (VAR_2->segments_size + 1) * 2;
        if ((VAR_10 = FUNC_3(&VAR_2->segments, sizeof(*VAR_2->segments) *
                               VAR_2->segments_size)) < 0) {
            VAR_2->segments_size = 0;
            VAR_2->nb_segments = 0;
            return VAR_10;
        }
    }
    VAR_11 = FUNC_2(sizeof(*VAR_11));
    if (!VAR_11)
        return FUNC_0(VAR_1);
    FUNC_4(VAR_11->file, VAR_3, sizeof(VAR_11->file));
    VAR_11->time = VAR_4;
    VAR_11->duration = VAR_5;
    if (VAR_11->time < 0) {
        VAR_11->duration += VAR_11->time;
        VAR_11->time = 0;
    }
    VAR_11->start_pos = VAR_6;
    VAR_11->range_length = VAR_7;
    VAR_11->index_length = VAR_8;
    VAR_2->segments[VAR_2->nb_segments++] = VAR_11;
    VAR_2->segment_index++;

    if (VAR_2->segment_index < VAR_9) {
        FUNC_1(((void*)0), VAR_0, "Correcting the segment index after file %s: current=%d corrected=%d\n",
               VAR_3, VAR_2->segment_index, VAR_9);
        VAR_2->segment_index = VAR_9;
    }
    return 0;
}
