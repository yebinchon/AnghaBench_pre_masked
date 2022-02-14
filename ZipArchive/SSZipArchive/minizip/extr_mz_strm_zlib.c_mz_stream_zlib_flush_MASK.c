
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ buffer_len; int buffer; TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_zlib ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_1(void *VAR_2)
{
    mz_stream_zlib *VAR_3 = (mz_stream_zlib *)VAR_2;
    if (FUNC_0(VAR_3->stream.base, VAR_3->buffer, VAR_3->buffer_len) != VAR_3->buffer_len)
        return VAR_1;
    return VAR_0;
}
