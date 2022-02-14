
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {int cur_timestamp; int init_sec_data_len; int init_sec_buf_size; int init_sec_buf; int ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct representation *VAR_2, struct representation *VAR_3)
{
    VAR_2->init_sec_buf = FUNC_2(VAR_3->init_sec_buf_size);
    if (!VAR_2->init_sec_buf) {
        FUNC_1(VAR_2->ctx, VAR_0, "Cannot alloc memory for init_sec_buf\n");
        return FUNC_0(VAR_1);
    }
    FUNC_3(VAR_2->init_sec_buf, VAR_3->init_sec_buf, VAR_3->init_sec_data_len);
    VAR_2->init_sec_buf_size = VAR_3->init_sec_buf_size;
    VAR_2->init_sec_data_len = VAR_3->init_sec_data_len;
    VAR_2->cur_timestamp = VAR_3->cur_timestamp;

    return 0;
}
