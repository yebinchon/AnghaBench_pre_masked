
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf_ptr_max; scalar_t__ buf_ptr; scalar_t__ buffer; scalar_t__ checksum_ptr; scalar_t__ buf_end; scalar_t__ write_flag; int checksum; int (* update_checksum ) (int ,scalar_t__,scalar_t__) ;} ;
typedef TYPE_1__ AVIOContext ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_0)
{
    VAR_0->buf_ptr_max = FUNC_0(VAR_0->buf_ptr, VAR_0->buf_ptr_max);
    if (VAR_0->write_flag && VAR_0->buf_ptr_max > VAR_0->buffer) {
        FUNC_2(VAR_0, VAR_0->buffer, VAR_0->buf_ptr_max - VAR_0->buffer);
        if (VAR_0->update_checksum) {
            VAR_0->checksum = VAR_0->update_checksum(VAR_0->checksum, VAR_0->checksum_ptr,
                                                 VAR_0->buf_ptr_max - VAR_0->checksum_ptr);
            VAR_0->checksum_ptr = VAR_0->buffer;
        }
    }
    VAR_0->buf_ptr = VAR_0->buf_ptr_max = VAR_0->buffer;
    if (!VAR_0->write_flag)
        VAR_0->buf_end = VAR_0->buffer;
}
