
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;


 int FUNC_0 (int ,char*,int*) ;

int FUNC_1(const struct dirent *VAR_0)
{
    int VAR_1;
    return (FUNC_0(VAR_0->d_name, "%d_", &VAR_1) == 1);
}
