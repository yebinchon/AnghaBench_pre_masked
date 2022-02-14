
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(hb_value_t *VAR_1)
{
    hb_value_t *VAR_2 = FUNC_0(VAR_1, "PictureDetelecine");
    if (FUNC_4(VAR_2))
    {
        const char *VAR_3;
        int VAR_4 = FUNC_3(VAR_2);
        VAR_3 = FUNC_6(VAR_0, VAR_4);
        if (VAR_3 != ((void*)0))
        {
            FUNC_1(VAR_1, "PictureDetelecine", FUNC_5(VAR_3));
        }
        else
        {
            FUNC_2("Invalid detelecine index %d", VAR_4);
            FUNC_1(VAR_1, "PictureDetelecine", FUNC_5("off"));
        }
    }
}
