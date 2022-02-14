
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* local_tun_ip; char* remote_tun_ip; char* local_tun_ip6; char* remote_tun_ip6; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(Context *VAR_0)
{
    static char VAR_1[40], VAR_2[40];

    FUNC_0(VAR_1, sizeof VAR_1, "64:ff9b::%s", VAR_0->local_tun_ip);
    FUNC_0(VAR_2, sizeof VAR_2, "64:ff9b::%s", VAR_0->remote_tun_ip);
    VAR_0->local_tun_ip6 = VAR_1;
    VAR_0->remote_tun_ip6 = VAR_2;
}
