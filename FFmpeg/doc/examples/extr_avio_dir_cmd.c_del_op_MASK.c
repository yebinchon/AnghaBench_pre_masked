
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{
    int VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 < 0)
        FUNC_1(((void*)0), VAR_0, "Cannot delete '%s': %s.\n", VAR_1, FUNC_0(VAR_2));
    return VAR_2;
}
