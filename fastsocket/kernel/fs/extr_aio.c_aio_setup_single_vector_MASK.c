
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iov_len; int iov_base; } ;
struct kiocb {int ki_nr_segs; scalar_t__ ki_cur_seg; int ki_left; TYPE_1__* ki_iovec; int ki_buf; TYPE_1__ ki_inline_vec; } ;
typedef int ssize_t ;



__attribute__((used)) static ssize_t FUNC_0(struct kiocb *VAR_0)
{
 VAR_0->ki_iovec = &VAR_0->ki_inline_vec;
 VAR_0->ki_iovec->iov_base = VAR_0->ki_buf;
 VAR_0->ki_iovec->iov_len = VAR_0->ki_left;
 VAR_0->ki_nr_segs = 1;
 VAR_0->ki_cur_seg = 0;
 return 0;
}
