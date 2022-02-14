
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; } ;
struct ifnet {int dummy; } ;
typedef int ifr ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (struct ifnet*,int ,int ,struct ifreq*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet * VAR_1, int VAR_2)
{
    struct ifreq VAR_3;

    FUNC_0(&VAR_3, sizeof(VAR_3));
    VAR_3.ifr_mtu = VAR_2;
    return (FUNC_1(VAR_1, 0, VAR_0, &VAR_3));
}
