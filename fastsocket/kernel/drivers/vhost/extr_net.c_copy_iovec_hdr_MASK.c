
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; int iov_base; } ;


 size_t FUNC_0 (size_t,size_t) ;

__attribute__((used)) static void FUNC_1(const struct iovec *VAR_0, struct iovec *VAR_1,
      size_t VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5;
 while (VAR_2 && VAR_4 < VAR_3) {
  VAR_5 = FUNC_0(VAR_0->iov_len, VAR_2);
  VAR_1->iov_base = VAR_0->iov_base;
  VAR_1->iov_len = VAR_5;
  VAR_2 -= VAR_5;
  ++VAR_0;
  ++VAR_1;
  ++VAR_4;
 }
}
