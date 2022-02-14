
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {unsigned int msg_flags; } ;
struct kvec {int dummy; } ;


 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct socket *VAR_0, struct kvec *VAR_1, int VAR_2,
     int VAR_3, unsigned VAR_4)
{
 struct msghdr VAR_5 = { .msg_flags = VAR_4 };
 return FUNC_0(VAR_0, &VAR_5, VAR_1, VAR_2, VAR_3);
}
