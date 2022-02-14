
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(hb_value_t *VAR_1)
{
    hb_value_t *VAR_2 = FUNC_0(VAR_1, "PicturePAR");
    if (FUNC_5(VAR_2) == VAR_0)
    {
        const char *VAR_3 = FUNC_2(VAR_2);
        if (!FUNC_6(VAR_3, "strict"))
        {
            FUNC_1(VAR_1, "PicturePAR", FUNC_4("loose"));
            FUNC_1(VAR_1, "UsesPictureSettings", FUNC_3(2));
            FUNC_1(VAR_1, "PictureModulus", FUNC_3(2));
        }
    }
}
