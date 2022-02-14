
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct representation {scalar_t__ cur_seq_no; scalar_t__ init_sec_buf_read_offset; scalar_t__ init_sec_data_len; scalar_t__ last_seq_no; int is_restart_needed; void* cur_seg; int init_sec_buf; int rep_idx; TYPE_3__* parent; int input; } ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ is_live; int interrupt_callback; } ;
typedef TYPE_1__ DASHContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void**) ;
 void* FUNC_4 (struct representation*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct representation*,void*) ;
 int FUNC_7 (struct representation*,void*,int *,int) ;
 int FUNC_8 (struct representation*) ;

__attribute__((used)) static int FUNC_9(void *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    struct representation *VAR_7 = VAR_3;
    DASHContext *VAR_8 = VAR_7->parent->priv_data;

restart:
    if (!VAR_7->input) {
        FUNC_3(&VAR_7->cur_seg);
        VAR_7->cur_seg = FUNC_4(VAR_7);
        if (!VAR_7->cur_seg) {
            VAR_6 = VAR_0;
            goto end;
        }


        VAR_6 = FUNC_8(VAR_7);
        if (VAR_6)
            goto end;

        VAR_6 = FUNC_6(VAR_8, VAR_7, VAR_7->cur_seg);
        if (VAR_6 < 0) {
            if (FUNC_2(VAR_8->interrupt_callback)) {
                VAR_6 = VAR_1;
                goto end;
            }
            FUNC_1(VAR_7->parent, VAR_2, "Failed to open fragment of playlist %d\n", VAR_7->rep_idx);
            VAR_7->cur_seq_no++;
            goto restart;
        }
    }

    if (VAR_7->init_sec_buf_read_offset < VAR_7->init_sec_data_len) {

        int VAR_9 = FUNC_0(VAR_7->init_sec_data_len - VAR_7->init_sec_buf_read_offset, VAR_5);
        FUNC_5(VAR_4, VAR_7->init_sec_buf, VAR_9);
        VAR_7->init_sec_buf_read_offset += VAR_9;
        VAR_6 = VAR_9;
        goto end;
    }


    if (!VAR_7->cur_seg) {
        VAR_7->cur_seg = FUNC_4(VAR_7);
    }
    if (!VAR_7->cur_seg) {
        VAR_6 = VAR_0;
        goto end;
    }
    VAR_6 = FUNC_7(VAR_7, VAR_7->cur_seg, VAR_4, VAR_5);
    if (VAR_6 > 0)
        goto end;

    if (VAR_8->is_live || VAR_7->cur_seq_no < VAR_7->last_seq_no) {
        if (!VAR_7->is_restart_needed)
            VAR_7->cur_seq_no++;
        VAR_7->is_restart_needed = 1;
    }

end:
    return VAR_6;
}
