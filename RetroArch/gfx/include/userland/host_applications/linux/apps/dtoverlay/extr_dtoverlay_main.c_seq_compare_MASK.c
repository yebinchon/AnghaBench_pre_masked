
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;


 int FUNC_0 (int ) ;

int FUNC_1(const struct dirent **VAR_0, const struct dirent **VAR_1)
{
    int VAR_2 = FUNC_0((*VAR_0)->d_name);
    int VAR_3 = FUNC_0((*VAR_1)->d_name);
    if (VAR_2 < VAR_3)
     return -1;
    else if (VAR_2 == VAR_3)
     return 0;
    else
     return 1;
}
