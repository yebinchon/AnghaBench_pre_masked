
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; } ;
typedef TYPE_1__ hb_container_t ;
typedef scalar_t__ gint ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int * FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (char const*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(GhbValue *VAR_2, GhbValue *VAR_3)
{

    GhbValue *VAR_4;
    gint VAR_5;
    gboolean VAR_6, VAR_7, VAR_8;
    gint VAR_9;

    VAR_4 = FUNC_7(VAR_2);
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("No subtitle list!");
        return;
    }


    const char *VAR_10;
    const hb_container_t *VAR_11;

    VAR_10 = FUNC_5(VAR_2, "FileFormat");
    VAR_11 = FUNC_8(VAR_10);

    VAR_9 = FUNC_1(VAR_2, VAR_3);
    VAR_6 = FUNC_4(VAR_3, "Burn");
    if (VAR_6 && !FUNC_9(VAR_9))
    {
        VAR_6 = VAR_0;
        FUNC_6(VAR_3, "Burn", VAR_6);
    }
    if (!VAR_6 && !FUNC_11(VAR_9, VAR_11->format))
    {
        VAR_6 = VAR_1;
        FUNC_6(VAR_3, "Burn", VAR_6);
        FUNC_6(VAR_3, "Default", VAR_0);
    }
    VAR_8 = FUNC_4(VAR_3, "Default");
    VAR_7 = FUNC_4(VAR_3, "Forced");
    if (VAR_7 && !FUNC_10(VAR_9))
    {
        VAR_7 = VAR_0;
        FUNC_6(VAR_3, "Forced", VAR_7);
    }

    FUNC_2(VAR_4, VAR_3);


    VAR_5 = FUNC_3(VAR_4);
    if (VAR_6)
        FUNC_12(VAR_2, VAR_5-1);
    if (VAR_8)
        FUNC_13(VAR_2, VAR_5-1);
}
