
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int * member_0; } ;
struct kvec {void* member_0; int member_1; } ;


 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_0, void *VAR_1, int VAR_2, unsigned VAR_3)
{
 struct msghdr VAR_4 = {((void*)0), };
 struct kvec VAR_5 = {VAR_1, VAR_2};
 return FUNC_0(VAR_0, &VAR_4, &VAR_5, 1, VAR_2, VAR_3);
}
