
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zdap_ioctl {int dummy; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int,struct ifreq*) ;

int FUNC_1(int VAR_0, struct ifreq *VAR_1)
{
    struct zdap_ioctl *VAR_2 = 0;
    int VAR_3;

    if (!FUNC_0(VAR_0, VAR_1))
        return -1;
    return 0;
}
