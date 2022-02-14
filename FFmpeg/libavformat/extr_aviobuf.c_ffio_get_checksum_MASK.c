
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long checksum; unsigned long (* update_checksum ) (unsigned long,scalar_t__,scalar_t__) ;scalar_t__ checksum_ptr; scalar_t__ buf_ptr; } ;
typedef TYPE_1__ AVIOContext ;


 unsigned long FUNC_0 (unsigned long,scalar_t__,scalar_t__) ;

unsigned long FUNC_1(AVIOContext *VAR_0)
{
    VAR_0->checksum = VAR_0->update_checksum(VAR_0->checksum, VAR_0->checksum_ptr,
                                     VAR_0->buf_ptr - VAR_0->checksum_ptr);
    VAR_0->update_checksum = ((void*)0);
    return VAR_0->checksum;
}
