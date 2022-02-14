
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(hb_value_array_t *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    VAR_2 = FUNC_2(VAR_0);
    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
    {
        hb_value_t *VAR_4 = FUNC_1(VAR_0, VAR_1);
        VAR_3 = FUNC_3(FUNC_0(VAR_4, "Default"));
        if (VAR_3)
        {
            return VAR_3;
        }
    }
    return 0;
}
