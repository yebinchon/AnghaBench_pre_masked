
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {struct sockaddr pppoe; } ;
struct sockaddr_pppox {TYPE_1__ sa_addr; int sa_protocol; int sa_family; } ;
struct pppoe_addr {int dummy; } ;
struct TYPE_4__ {struct sockaddr_pppox pppoe_pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr_pppox*,int) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, struct sockaddr *VAR_3,
    int *VAR_4, int VAR_5)
{
 int VAR_6 = sizeof(struct sockaddr_pppox);
 struct sockaddr_pppox VAR_7;

 VAR_7.sa_family = VAR_0;
 VAR_7.sa_protocol = VAR_1;
 FUNC_0(&VAR_7.sa_addr.pppoe, &FUNC_1(VAR_2->sk)->pppoe_pa,
        sizeof(struct pppoe_addr));

 FUNC_0(VAR_3, &VAR_7, VAR_6);

 *VAR_4 = VAR_6;

 return 0;
}
