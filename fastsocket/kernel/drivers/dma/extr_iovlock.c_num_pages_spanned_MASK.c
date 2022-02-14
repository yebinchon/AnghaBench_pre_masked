
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_base; scalar_t__ iov_len; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_1(struct iovec *VAR_2)
{
 return
 ((FUNC_0((unsigned long)VAR_2->iov_base + VAR_2->iov_len) -
 ((unsigned long)VAR_2->iov_base & VAR_0)) >> VAR_1);
}
