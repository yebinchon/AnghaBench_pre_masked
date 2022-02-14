
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ position; scalar_t__ writebuf_pos; scalar_t__ writebuf_len; scalar_t__ readbuf_pos; scalar_t__ readbuf_len; } ;
typedef TYPE_1__ mz_stream_buffered ;
typedef int int32_t ;


 int VAR_0 ;

__attribute__((used)) static int32_t FUNC_0(void *VAR_1)
{
    mz_stream_buffered *VAR_2 = (mz_stream_buffered *)VAR_1;

    VAR_2->readbuf_len = 0;
    VAR_2->readbuf_pos = 0;
    VAR_2->writebuf_len = 0;
    VAR_2->writebuf_pos = 0;
    VAR_2->position = 0;

    return VAR_0;
}
