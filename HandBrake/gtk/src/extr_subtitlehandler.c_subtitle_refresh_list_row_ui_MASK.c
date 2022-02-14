
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef scalar_t__ gboolean ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,char*,...) ;
 char* FUNC_5 (int *,int ) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *,int ,char*,int,char*,int,...) ;
 char* FUNC_14 (int *,int *) ;

__attribute__((used)) static void
FUNC_15(
    GtkTreeModel *VAR_1,
    GtkTreeIter *VAR_2,
    GhbValue *VAR_3,
    GhbValue *VAR_4)
{
    GtkTreeIter VAR_5;
    gboolean VAR_6, VAR_7, VAR_8;
    char *VAR_9, *VAR_10;
    char *VAR_11, *VAR_12;
    char *VAR_13;


    VAR_10 = ((void*)0);
    VAR_12 = ((void*)0);

    VAR_6 = FUNC_8(VAR_4, "Forced");
    VAR_7 = FUNC_8(VAR_4, "Burn");
    VAR_8 = FUNC_8(VAR_4, "Default");
    VAR_13 = FUNC_14(VAR_3, VAR_4);
    VAR_9 = FUNC_3("<small>%s</small>", VAR_13);
    FUNC_1(VAR_13);
    if (FUNC_7(VAR_4, "Import") != ((void*)0))
    {
        gint VAR_14;
        VAR_14 = FUNC_9(VAR_4, "Offset");
        if (VAR_14 != 0)
        {
            VAR_12 = FUNC_3("Offset: %dms", VAR_14);
        }
    }

    GString *VAR_15 = FUNC_6("<small>");
    FUNC_4(VAR_15, "%s ", VAR_7 ? "Burned Into Video" :
                                                "Passthrough");
    if (VAR_6)
    {
        FUNC_4(VAR_15, "(Forced Subtitles Only)");
    }
    if (VAR_8)
    {
        FUNC_4(VAR_15, "(Default)");
    }
    FUNC_4(VAR_15, "</small>");

    VAR_11 = FUNC_5(VAR_15, VAR_0);

    FUNC_13(FUNC_0(VAR_1), VAR_2,

        0, VAR_9,
        1, "-->",
        2, VAR_11,
        3, "hb-edit",
        4, "hb-remove",
        5, 0.5,
        -1);

    if (VAR_10 != ((void*)0) || VAR_12 != ((void*)0))
    {
        if (VAR_10 == ((void*)0))
            VAR_10 = FUNC_2("");
        if (VAR_12 == ((void*)0))
            VAR_12 = FUNC_2("");

        if (!FUNC_10(VAR_1, &VAR_5, VAR_2))
        {
            FUNC_11(FUNC_0(VAR_1), &VAR_5, VAR_2);
        }
        FUNC_13(FUNC_0(VAR_1), &VAR_5,

            0, VAR_10,
            2, VAR_12,
            5, 0.0,
            -1);
    }
    else
    {
        if (FUNC_10(VAR_1, &VAR_5, VAR_2))
        {
            FUNC_12(FUNC_0(VAR_1), &VAR_5);
        }
    }

    FUNC_1(VAR_9);
    FUNC_1(VAR_10);
    FUNC_1(VAR_11);
    FUNC_1(VAR_12);
}
