
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_array_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_5(hb_value_array_t *VAR_0, const char *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0);
    int VAR_3;
    for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
    {
        const char *VAR_4 = FUNC_3(FUNC_0(VAR_0, VAR_3));
        if (!FUNC_4(VAR_1, VAR_4, 4))
            FUNC_2(VAR_0, VAR_3);
    }
}
