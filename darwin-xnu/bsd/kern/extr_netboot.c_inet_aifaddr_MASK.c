
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct ifaliasreq {int ifra_broadaddr; int ifra_mask; int ifra_addr; int ifra_name; } ;
typedef int ifra ;
typedef int caddr_t ;


 int VAR_0 ;
 struct sockaddr_in VAR_1 ;
 int FUNC_0 (struct ifaliasreq*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct socket*,int ,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(struct socket * VAR_2, const char * VAR_3,
      const struct in_addr * VAR_4,
      const struct in_addr * VAR_5,
      const struct in_addr * VAR_6)
{
    struct ifaliasreq VAR_7;

    FUNC_0(&VAR_7, sizeof(VAR_7));
    FUNC_3(VAR_7.ifra_name, VAR_3, sizeof(VAR_7.ifra_name));
    if (VAR_4) {
 *((struct sockaddr_in *)(void *)&VAR_7.ifra_addr) = VAR_1;
 ((struct sockaddr_in *)(void *)&VAR_7.ifra_addr)->sin_addr = *VAR_4;
    }
    if (VAR_5) {
 *((struct sockaddr_in *)(void *)&VAR_7.ifra_mask) = VAR_1;
 ((struct sockaddr_in *)(void *)&VAR_7.ifra_mask)->sin_addr = *VAR_5;
    }
    if (VAR_6) {
 *((struct sockaddr_in *)(void *)&VAR_7.ifra_broadaddr) = VAR_1;
 ((struct sockaddr_in *)(void *)&VAR_7.ifra_broadaddr)->sin_addr = *VAR_6;
    }
    return (FUNC_2(VAR_2, VAR_0, (caddr_t)&VAR_7, FUNC_1()));
}
