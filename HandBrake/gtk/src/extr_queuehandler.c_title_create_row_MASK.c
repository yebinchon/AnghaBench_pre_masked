
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int GtkWidget ;
typedef int GtkLabel ;
typedef int GtkFileChooserButton ;
typedef int GtkEntry ;
typedef int GtkCheckButton ;
typedef int GtkBox ;
typedef int GCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_4 ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 int FUNC_7 (int *,char*,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

GtkWidget * FUNC_26(signal_user_data_t *VAR_12)
{
    GtkBox *VAR_13, *VAR_14;
    GtkCheckButton *VAR_15;
    GtkLabel *VAR_16;
    GtkEntry *VAR_17;
    GtkFileChooserButton *VAR_18;

    VAR_13 = FUNC_0(FUNC_10(VAR_5, 0));
    FUNC_11(VAR_13, 6);
    FUNC_25(FUNC_5(VAR_13));


    VAR_15 = FUNC_1(FUNC_12());
    FUNC_22(FUNC_5(VAR_15),
      FUNC_6("Select this title for adding to the queue.\n"));
    FUNC_24(FUNC_5(VAR_15), VAR_1);
    FUNC_21(FUNC_5(VAR_15), "title_selected");
    FUNC_25(FUNC_5(VAR_15));
    FUNC_7(VAR_15, "toggled", (GCallback)VAR_11, VAR_12);
    FUNC_8(VAR_13, FUNC_5(VAR_15));


    VAR_16 = FUNC_4(FUNC_16(FUNC_6("No Title")));
    FUNC_17(VAR_16, 12);
    FUNC_18(FUNC_5(VAR_16), VAR_3);
    FUNC_24(FUNC_5(VAR_16), VAR_1);
    FUNC_21(FUNC_5(VAR_16), "title_label");
    FUNC_25(FUNC_5(VAR_16));
    FUNC_8(VAR_13, FUNC_5(VAR_16));

    VAR_8 = FUNC_15(VAR_16);
    FUNC_23(FUNC_5(VAR_16),
        FUNC_6("There is another title with the same destination file name.\n"
        "This title will not be added to the queue unless you change\n"
        "the output file name.\n"));
    FUNC_19(FUNC_5(VAR_16), VAR_0);


    VAR_14 = FUNC_0(FUNC_10(VAR_6, 0));
    FUNC_20(FUNC_5(VAR_14), VAR_7);
    FUNC_18(FUNC_5(VAR_14), VAR_2);

    VAR_17 = FUNC_2(FUNC_13());
    FUNC_9(VAR_17, 40);
    FUNC_21(FUNC_5(VAR_17), "title_file");

    FUNC_25(FUNC_5(VAR_17));
    FUNC_7(VAR_17, "changed", (GCallback)VAR_10, VAR_12);
    FUNC_8(VAR_14, FUNC_5(VAR_17));
    VAR_18 = FUNC_3(
            FUNC_14(FUNC_6("Destination Directory"),
                                        VAR_4));
    FUNC_7(VAR_18, "selection-changed",
                    (GCallback)VAR_9, VAR_12);
    FUNC_21(FUNC_5(VAR_18), "title_dir");
    FUNC_20(FUNC_5(VAR_18), VAR_7);
    FUNC_25(FUNC_5(VAR_18));
    FUNC_8(VAR_14, FUNC_5(VAR_18));
    FUNC_25(FUNC_5(VAR_14));
    FUNC_8(VAR_13, FUNC_5(VAR_14));

    return FUNC_5(VAR_13);
}
