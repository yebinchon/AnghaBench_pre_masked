
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*,int const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int ,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int const*,int ) ;

gchar* FUNC_8(const gchar *VAR_2, const gchar *VAR_3) {
    GDir *VAR_4;
    gchar *VAR_5;
    VAR_4 = FUNC_2(VAR_2, 0, ((void*)0));
    if (VAR_4 != ((void*)0)) {
        const gchar *VAR_6;
        while ((VAR_6 = FUNC_3(VAR_4)) != ((void*)0)) {
            VAR_5 = FUNC_0(VAR_2, VAR_6, ((void*)0));
            if (FUNC_4(VAR_5, VAR_0)) {
                if(FUNC_5(VAR_3, VAR_6))
                    return(VAR_5);
            }
        }
        FUNC_1(VAR_4);
    }
    else {
        FUNC_7("%s: %s", VAR_2, FUNC_6(VAR_1));
    }
    return ((void*)0);
}
