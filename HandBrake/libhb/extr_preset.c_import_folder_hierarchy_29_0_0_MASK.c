
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 char* FUNC_6 (char*,char const*,char const*) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(const char * VAR_0,
                                    hb_value_t * VAR_1, hb_value_t * VAR_2)
{
    hb_value_t * VAR_3 = FUNC_2(VAR_2, "ChildrenArray");
    int VAR_4, VAR_5;

    VAR_5 = FUNC_9(VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_5;)
    {
        hb_value_t * VAR_6 = FUNC_7(VAR_3, VAR_4);

        if (FUNC_3(VAR_6, "Folder"))
        {
            const char * VAR_7;
            char * VAR_8;
            int VAR_9 = FUNC_9(VAR_1);

            VAR_7 = FUNC_4(VAR_6, "PresetName");
            VAR_8 = FUNC_6("%s - %s", VAR_0, VAR_7);
            FUNC_12(VAR_8, VAR_1, VAR_6);

            hb_value_t * VAR_10 = FUNC_2(VAR_6, "ChildrenArray");
            if (FUNC_9(VAR_10) > 0)
            {


                char * VAR_11 = FUNC_0(VAR_1, VAR_8);
                FUNC_5(VAR_6, "PresetName", VAR_11);
                FUNC_11(VAR_6);
                FUNC_10(VAR_3, VAR_4);
                FUNC_8(VAR_1, VAR_9, VAR_6);
                FUNC_1(VAR_11);
            }
            else
            {
                FUNC_10(VAR_3, VAR_4);
            }
            FUNC_1(VAR_8);
        }
        else
        {
            VAR_4++;
        }
    }
}
