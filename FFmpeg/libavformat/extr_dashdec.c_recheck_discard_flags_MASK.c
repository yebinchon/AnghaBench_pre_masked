
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct representation {int stream_index; int input; int parent; scalar_t__ ctx; int cur_seq_no; scalar_t__ init_sec_buf_read_offset; scalar_t__ cur_seg_offset; TYPE_1__* assoc_stream; } ;
struct TYPE_2__ {scalar_t__ discard; } ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (struct representation*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,struct representation*) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2, struct representation **VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        struct representation *VAR_7 = VAR_3[VAR_5];
        int VAR_8 = !VAR_7->assoc_stream || VAR_7->assoc_stream->discard < VAR_0;

        if (VAR_8 && !VAR_7->ctx) {
            VAR_7->cur_seg_offset = 0;
            VAR_7->init_sec_buf_read_offset = 0;

            for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                VAR_7->cur_seq_no = FUNC_0(VAR_7->cur_seq_no, VAR_3[VAR_6]->cur_seq_no);
            }
            FUNC_4(VAR_2, VAR_7);
            FUNC_1(VAR_2, VAR_1, "Now receiving stream_index %d\n", VAR_7->stream_index);
        } else if (!VAR_8 && VAR_7->ctx) {
            FUNC_2(VAR_7);
            FUNC_3(VAR_7->parent, &VAR_7->input);
            FUNC_1(VAR_2, VAR_1, "No longer receiving stream_index %d\n", VAR_7->stream_index);
        }
    }
}
