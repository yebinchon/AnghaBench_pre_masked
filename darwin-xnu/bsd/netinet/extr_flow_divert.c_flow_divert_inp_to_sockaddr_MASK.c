
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_len; int sin_addr; int sin_port; int sin_family; } ;
union sockaddr_in_4_6 {struct sockaddr_in6 sin6; struct sockaddr_in sin; } ;
struct sockaddr {int dummy; } ;
struct inpcb {int inp_vflag; int in6p_laddr; int inp_lport; int inp_laddr; } ;
typedef int sin46 ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union sockaddr_in_4_6*,int) ;
 struct sockaddr* FUNC_1 (struct sockaddr*,int) ;

__attribute__((used)) static errno_t
FUNC_2(const struct inpcb *VAR_5, struct sockaddr **VAR_6)
{
 int VAR_7 = 0;
 union sockaddr_in_4_6 VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 if (VAR_5->inp_vflag & VAR_3) {
  struct sockaddr_in *VAR_9 = &VAR_8;

  VAR_9->sin_family = VAR_0;
  VAR_9->sin_len = sizeof(*VAR_9);
  VAR_9->sin_port = VAR_5->inp_lport;
  VAR_9->sin_addr = VAR_5->inp_laddr;
 } else if (VAR_5->inp_vflag & VAR_4) {
  struct sockaddr_in6 *VAR_10 = &VAR_8;

  VAR_10->sin6_len = sizeof(*VAR_10);
  VAR_10->sin6_family = VAR_1;
  VAR_10->sin6_port = VAR_5->inp_lport;
  VAR_10->sin6_addr = VAR_5->in6p_laddr;
 }
 *VAR_6 = FUNC_1((struct sockaddr *)&VAR_8, 1);
 if (*VAR_6 == ((void*)0)) {
  VAR_7 = VAR_2;
 }
 return (VAR_7);
}
