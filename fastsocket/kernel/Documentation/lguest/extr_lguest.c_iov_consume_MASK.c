
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned int iov_len; unsigned int iov_base; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct iovec VAR_0[], unsigned VAR_1, unsigned VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  unsigned int VAR_4;

  VAR_4 = VAR_0[VAR_3].iov_len < VAR_2 ? VAR_0[VAR_3].iov_len : VAR_2;
  VAR_0[VAR_3].iov_base += VAR_4;
  VAR_0[VAR_3].iov_len -= VAR_4;
  VAR_2 -= VAR_4;
 }
 FUNC_0(VAR_2 == 0);
}
