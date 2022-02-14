
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(hb_value_t *VAR_1)
{

    if (FUNC_2(VAR_1) == VAR_0)
    {
        int VAR_2 = 0;
        const char *VAR_3 = FUNC_1(VAR_1);
        if (!FUNC_5(VAR_3, "source") ||
            !FUNC_5(VAR_3, "auto") ||
            !FUNC_5(VAR_3, "same as source"))
        {
            return VAR_2;
        }
        else
        {
            VAR_2 = FUNC_3(VAR_3);
            if (VAR_2 != -1)
            {
                return VAR_2;
            }
        }
    }


    int VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8;
    FUNC_4(&VAR_4, &VAR_5, &VAR_6);
    VAR_7 = VAR_6 / VAR_5;
    VAR_8 = VAR_6 / VAR_4;
    double VAR_9 = FUNC_0(VAR_1);
    if (VAR_9 >= VAR_7 && VAR_9 <= VAR_8)
    {

        return (int)(VAR_6 / VAR_9);
    }
    else if (VAR_9 >= VAR_4 && VAR_9 <= VAR_5)
    {

        return (int)(VAR_9);
    }


    return -1;
}
