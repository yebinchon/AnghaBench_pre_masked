
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const*,char const*,int,int ,int ) ;
 int FUNC_1 (char const*,char const*,int,int) ;

int FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
    int VAR_4 = 0;

    if(VAR_2)
    {
        VAR_4 = 1;

        int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, 2, 0, 0);
        if(VAR_5 != 0)
        {
            return VAR_5;
        }
    }

    return FUNC_1(VAR_0, VAR_3, VAR_1, VAR_4);
}
