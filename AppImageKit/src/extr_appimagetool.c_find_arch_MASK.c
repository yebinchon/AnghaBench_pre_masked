
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int const*,int const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int ,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int const*,int ) ;
 int FUNC_8 (int *,int*) ;

void FUNC_9(const gchar *VAR_4, const gchar *VAR_5, bool* VAR_6) {
    GDir *VAR_7;
    gchar *VAR_8;
    VAR_7 = FUNC_2(VAR_4, 0, ((void*)0));
    if (VAR_7 != ((void*)0)) {
        const gchar *VAR_9;
        while ((VAR_9 = FUNC_3(VAR_7)) != ((void*)0)) {
            VAR_8 = FUNC_0(VAR_4, VAR_9, ((void*)0));
            if (FUNC_4(VAR_8, VAR_2)) {
            } else if (FUNC_4(VAR_8, VAR_0)) {
                FUNC_9(VAR_8, VAR_5, VAR_6);
            } else if (FUNC_4(VAR_8, VAR_1) || FUNC_5(VAR_5, VAR_9) ) {
                FUNC_8(VAR_8, VAR_6);
            }
        }
        FUNC_1(VAR_7);
    }
    else {
        FUNC_7("%s: %s", VAR_4, FUNC_6(VAR_3));
    }
}
