
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;

int FUNC_3(int VAR_4, struct ifreq *VAR_5)
{
    if (FUNC_1(VAR_4, VAR_0, VAR_5) < 0) {
        FUNC_0(VAR_3, "%s: ioctl(SIOCGIFMAP): %s\n",
                VAR_2, FUNC_2(VAR_1));
        return -1;
    }

    return 0;
}
