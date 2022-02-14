
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_namelen; int * msg_name; struct iovec* msg_iov; } ;
struct kvec {unsigned int iov_len; void* iov_base; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2,
  void *VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct msghdr VAR_6;
 struct kvec VAR_7;
 int VAR_8;

 VAR_7.iov_base = VAR_3;
 VAR_7.iov_len = VAR_4;

 VAR_6.msg_iov = (struct iovec *)&VAR_7;
 VAR_6.msg_iovlen = 1;
 VAR_6.msg_name = ((void*)0);
 VAR_6.msg_namelen = 0;
 VAR_6.msg_control = ((void*)0);
 VAR_6.msg_controllen = 0;
 VAR_6.msg_flags = (VAR_5)?VAR_1:VAR_0;

 VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, 1, VAR_7.iov_len,
   VAR_6.msg_flags);
 if (VAR_8 != VAR_4)
  return -1;

 return 0;
}
