
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {size_t ki_cur_seg; size_t ki_nr_segs; scalar_t__ ki_left; struct iovec* ki_iovec; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct kiocb *VAR_0, ssize_t VAR_1)
{
 struct iovec *VAR_2 = &VAR_0->ki_iovec[VAR_0->ki_cur_seg];

 FUNC_0(VAR_1 <= 0);

 while (VAR_0->ki_cur_seg < VAR_0->ki_nr_segs && VAR_1 > 0) {
  ssize_t VAR_3 = FUNC_1((ssize_t)VAR_2->iov_len, VAR_1);
  VAR_2->iov_base += VAR_3;
  VAR_2->iov_len -= VAR_3;
  VAR_0->ki_left -= VAR_3;
  VAR_1 -= VAR_3;
  if (VAR_2->iov_len == 0) {
   VAR_0->ki_cur_seg++;
   VAR_2++;
  }
 }



 FUNC_0(VAR_1 > 0 && VAR_0->ki_left == 0);
}
