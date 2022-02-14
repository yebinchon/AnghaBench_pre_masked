
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (int,char*,void*,char const*) ;

__attribute__((used)) static void *FUNC_1(struct iovec *VAR_0, size_t VAR_1, size_t VAR_2,
        const char *VAR_3)
{
 if (VAR_0->iov_len != VAR_1)
  FUNC_0(1, "Bad iovec size %zu for %s", VAR_0->iov_len, VAR_3);
 if ((unsigned long)VAR_0->iov_base % VAR_2 != 0)
  FUNC_0(1, "Bad alignment %p for %s", VAR_0->iov_base, VAR_3);
 return VAR_0->iov_base;
}
