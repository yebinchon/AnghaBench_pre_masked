
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; } ;



unsigned long FUNC_0(struct iovec *VAR_0, unsigned long VAR_1, size_t VAR_2)
{
 unsigned long VAR_3 = 0;
 size_t VAR_4 = 0;

 while (VAR_3 < VAR_1) {
  VAR_3++;
  if (VAR_4 + VAR_0->iov_len >= VAR_2) {
   VAR_0->iov_len = VAR_2 - VAR_4;
   break;
  }
  VAR_4 += VAR_0->iov_len;
  VAR_0++;
 }
 return VAR_3;
}
