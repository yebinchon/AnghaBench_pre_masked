
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char const*,int ) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static char * FUNC_7(hb_value_t * VAR_0, const char * VAR_1)
{
    char * VAR_2 = FUNC_6(VAR_1);
    int VAR_3, VAR_4, VAR_5;

    VAR_5 = FUNC_4(VAR_0);
    for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5; VAR_3++)
    {
        hb_value_t * VAR_6 = FUNC_3(VAR_0, VAR_3);
        const char * VAR_7;

        VAR_7 = FUNC_1(VAR_6, "PresetName");
        if (!FUNC_5(VAR_2, VAR_7))
        {

            FUNC_0(VAR_2);
            VAR_2 = FUNC_2("%s - %d", VAR_1, VAR_4++);
            VAR_3 = -1;
        }
    }
    return VAR_2;
}
