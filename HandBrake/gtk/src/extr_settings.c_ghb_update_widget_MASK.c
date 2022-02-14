
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef scalar_t__ gdouble ;
typedef scalar_t__ gchar ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkTextBuffer ;
typedef scalar_t__ GtkFileChooserAction ;
typedef int GtkEntry ;
typedef int GhbValue ;
typedef scalar_t__ GType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_13 (scalar_t__*,int ) ;
 int FUNC_14 (scalar_t__*) ;
 scalar_t__* FUNC_15 (scalar_t__*) ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (int *,scalar_t__*) ;
 char* FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 scalar_t__* FUNC_21 (int const*) ;
 scalar_t__ FUNC_22 (int const*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int) ;
 scalar_t__ FUNC_25 (int ) ;
 int * FUNC_26 (int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int *) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int ,scalar_t__*) ;
 int FUNC_31 (int ,scalar_t__*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,scalar_t__*) ;
 int FUNC_34 (int ,scalar_t__) ;
 int FUNC_35 (int ,scalar_t__) ;
 int FUNC_36 (int ,scalar_t__) ;
 int FUNC_37 (int *,scalar_t__*,int) ;
 int * FUNC_38 (int ) ;
 int FUNC_39 (int ,int) ;
 int FUNC_40 (int ,int) ;
 int FUNC_41 (int *,int *,int,...) ;
 scalar_t__ FUNC_42 (int *,int *) ;
 scalar_t__ FUNC_43 (int *,int *) ;
 scalar_t__ FUNC_44 (scalar_t__*,scalar_t__*) ;

void
FUNC_45(GtkWidget *VAR_22, const GhbValue *VAR_23)
{
    GType VAR_24;
    gchar *VAR_25, *VAR_26;
    gint VAR_27;
    gdouble VAR_28;

    const char *VAR_29 = FUNC_18(VAR_22);
    VAR_24 = FUNC_22(VAR_23);
    if (VAR_24 == VAR_1 || VAR_24 == VAR_2)
        return;
    if (VAR_23 == ((void*)0)) return;
    VAR_25 = VAR_26 = FUNC_21(VAR_23);
    VAR_27 = FUNC_20(VAR_23);
    VAR_28 = FUNC_19(VAR_23);
    VAR_24 = FUNC_12(VAR_22);

    if (VAR_25 == ((void*)0))
        VAR_25 = "";

    if (VAR_24 == VAR_9)
    {
        FUNC_17(VAR_22, VAR_25);
    }
    else if (VAR_24 == VAR_12)
    {
        if (VAR_27)
            FUNC_39(FUNC_10(VAR_22), !!VAR_27);
    }
    else if (VAR_24 == VAR_6)
    {
        FUNC_39(FUNC_10(VAR_22), VAR_27);
    }
    else if (VAR_24 == VAR_18)
    {
        FUNC_40(FUNC_11(VAR_22), VAR_27);
    }
    else if (VAR_24 == VAR_17)
    {
        FUNC_39(FUNC_10(VAR_22), VAR_27);
    }
    else if (VAR_24 == VAR_7)
    {
        FUNC_24(FUNC_1(VAR_22), VAR_27);
    }
    else if (VAR_24 == VAR_8)
    {
        GtkTreeModel *VAR_30;
        GtkTreeIter VAR_31;
        gchar *VAR_32;
        gdouble VAR_33;
        gboolean VAR_34 = VAR_0;

        VAR_30 = FUNC_26(FUNC_2(VAR_22));
        if (FUNC_42 (VAR_30, &VAR_31))
        {
            do
            {
                FUNC_41(VAR_30, &VAR_31, 2, &VAR_32, -1);
                if (FUNC_44(VAR_32, VAR_25) == 0)
                {
                    FUNC_28 (
                        FUNC_2(VAR_22), &VAR_31);
                    FUNC_14(VAR_32);
                    VAR_34 = VAR_21;
                    break;
                }
                FUNC_14(VAR_32);
            } while (FUNC_43 (VAR_30, &VAR_31));
        }
        if (!VAR_34 && FUNC_42 (VAR_30, &VAR_31))
        {
            do
            {
                FUNC_41(VAR_30, &VAR_31, 3, &VAR_33, -1);
                if ((gint)VAR_33 == VAR_27 || VAR_33 == VAR_28)
                {
                    FUNC_28 (
                        FUNC_2(VAR_22), &VAR_31);
                    VAR_34 = VAR_21;
                    break;
                }
            } while (FUNC_43 (VAR_30, &VAR_31));
        }
        if (!VAR_34)
        {
            if (FUNC_25(FUNC_2(VAR_22)))
            {
                GtkEntry *VAR_35 = FUNC_3(FUNC_23(FUNC_0(VAR_22)));
                if (VAR_35)
                {
                    FUNC_17(VAR_35, VAR_25);
                }
                else
                {
                    FUNC_27 (FUNC_2(VAR_22), 0);
                }
            }
            else
            {
                FUNC_27 (FUNC_2(VAR_22), 0);
            }
        }
    }
    else if (VAR_24 == VAR_15)
    {
        FUNC_36(FUNC_8(VAR_22), VAR_28);
    }
    else if (VAR_24 == VAR_13)
    {
        FUNC_34(FUNC_6(VAR_22), VAR_28);
    }
    else if (VAR_24 == VAR_14)
    {
        FUNC_35(FUNC_7(VAR_22), VAR_28);
    }
    else if (VAR_24 == VAR_16)
    {
        static int VAR_36 = 0;
        GtkTextBuffer *VAR_37 = FUNC_38(
                                                FUNC_9(VAR_22));
        if (!VAR_36)
        {
            VAR_36 = 1;
            FUNC_37 (VAR_37, VAR_25, -1);
            VAR_36 = 0;
        }
    }
    else if (VAR_24 == VAR_11)
    {
        FUNC_33 (FUNC_5(VAR_22), VAR_25);
    }
    else if (VAR_24 == VAR_10)
    {
        GtkFileChooserAction VAR_38;
        VAR_38 = FUNC_29(FUNC_4(VAR_22));

        if (VAR_25[0] == 0)
        {

            ;
        }
        else if (VAR_38 == VAR_5 ||
                 VAR_38 == VAR_3)
        {
            FUNC_31 (FUNC_4(VAR_22), VAR_25);
        }
        else if (VAR_38 == VAR_4)
        {
            FUNC_31 (FUNC_4(VAR_22), VAR_25);
        }
        else
        {
            if (FUNC_13(VAR_25, VAR_20))
            {
                FUNC_30(
                    FUNC_4(VAR_22), VAR_25);
            }
            else if (FUNC_13(VAR_25, VAR_19))
            {
                FUNC_31 (FUNC_4(VAR_22), VAR_25);
            }
            else
            {
                gchar * VAR_39;

                VAR_39 = FUNC_15(VAR_25);
                FUNC_30(
                    FUNC_4(VAR_22), VAR_39);
                FUNC_32(FUNC_4(VAR_22));
                FUNC_14(VAR_39);
            }
        }
    }
    else
    {
        FUNC_16("Attempt to set unknown widget type, name %s", VAR_29);
    }
    FUNC_14(VAR_26);
}
