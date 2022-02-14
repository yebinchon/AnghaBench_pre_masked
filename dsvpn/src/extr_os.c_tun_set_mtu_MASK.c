
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,int ,char*,char const*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(const char *VAR_4, int VAR_5)
{
    struct ifreq VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_3(VAR_0, VAR_3, 0)) == -1) {
        return -1;
    }
    VAR_6.ifr_mtu = VAR_5;
    FUNC_2(VAR_6.ifr_name, VAR_1, "%s", VAR_4);
    if (FUNC_1(VAR_7, VAR_2, &VAR_6) != 0) {
        FUNC_0(VAR_7);
        return -1;
    }
    return FUNC_0(VAR_7);
}
