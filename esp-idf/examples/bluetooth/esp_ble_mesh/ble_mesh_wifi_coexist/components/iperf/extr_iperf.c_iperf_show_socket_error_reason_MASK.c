
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

int FUNC_2(const char *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1;
    if (VAR_4 != 0) {
        FUNC_0(VAR_0, "%s error, error code: %d, reason: %s", VAR_2, VAR_4, FUNC_1(VAR_4));
    }

    return VAR_4;
}
