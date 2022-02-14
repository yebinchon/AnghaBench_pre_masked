
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct kvec {int iov_len; void* iov_base; } ;


 int FUNC_0 (struct socket*,struct kvec*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_0, const void *VAR_1, int VAR_2)
{
 struct kvec VAR_3;
 VAR_3.iov_base = (void *) VAR_1;
 VAR_3.iov_len = VAR_2;
 return FUNC_0(VAR_0, &VAR_3, 1, VAR_2, 0);
}
