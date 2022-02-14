
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int hb_dict_t ;


 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static hb_dict_t * FUNC_4(hb_dict_t *VAR_0, int VAR_1)
{

    char VAR_2[8];
    FUNC_3(VAR_2, sizeof(VAR_2), "%d", VAR_1);

    hb_dict_t *VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3 == ((void*)0))
    {
        VAR_3 = FUNC_1();
        FUNC_2(VAR_0, VAR_2, VAR_3);
    }
    return VAR_3;
}
