
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(hb_value_array_t *VAR_0, int VAR_1,
                         int VAR_2, int VAR_3, int VAR_4,
                         const char * VAR_5)
{
    hb_dict_t *VAR_6 = FUNC_0();
    FUNC_2(VAR_6, "Track", VAR_1);
    FUNC_1(VAR_6, "Default", VAR_2);
    FUNC_1(VAR_6, "Forced", VAR_3);
    FUNC_1(VAR_6, "Burn", VAR_4);
    if (VAR_5 != ((void*)0) && VAR_5[0] != 0)
    {
        FUNC_3(VAR_6, "Name", VAR_5);
    }
    FUNC_4(VAR_0, VAR_6);
}
