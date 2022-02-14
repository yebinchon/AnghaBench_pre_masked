
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned long iov_len; scalar_t__ iov_base; } ;


 unsigned long const VAR_0 ;
 unsigned long const VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct iovec *VAR_2)
{
 const unsigned long VAR_3 = (unsigned long) VAR_2->iov_base;
 const unsigned long VAR_4 = VAR_2->iov_len;
 const unsigned long VAR_5 = VAR_3 & VAR_0;
 const unsigned long VAR_6 = (VAR_3 + VAR_4 - 1) & VAR_0;

 return 1 + ((VAR_6 - VAR_5) >> VAR_1);
}
