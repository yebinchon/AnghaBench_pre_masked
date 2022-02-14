
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_len; int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
struct ifnet {int dummy; } ;
struct ether_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ether_addr const*) ;
 int FUNC_1 (struct ifnet*,int ,int ,struct ifreq*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet * VAR_3, const struct ether_addr * VAR_4)
{
    struct ifreq VAR_5;





    VAR_5.ifr_addr.sa_family = VAR_0;
    VAR_5.ifr_addr.sa_len = VAR_1;
    FUNC_0(VAR_5.ifr_addr.sa_data, VAR_4);
    return (FUNC_1(VAR_3, 0, VAR_2, &VAR_5));
}
