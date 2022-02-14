
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viawget_hostapd_param {int sta_addr; } ;
typedef int UINT ;
typedef int PSDevice ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(PSDevice VAR_1,
         struct viawget_hostapd_param *VAR_2)
{
 UINT VAR_3;


    if (FUNC_0(VAR_1, VAR_2->sta_addr, &VAR_3)) {
        FUNC_1(VAR_1, VAR_3);
    }
    else {
        return -VAR_0;
    }
 return 0;
}
