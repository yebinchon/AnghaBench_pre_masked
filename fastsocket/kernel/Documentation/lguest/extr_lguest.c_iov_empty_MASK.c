
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; } ;



__attribute__((used)) static bool FUNC_0(const struct iovec VAR_0[], unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2].iov_len)
   return 0;
 return 1;
}
