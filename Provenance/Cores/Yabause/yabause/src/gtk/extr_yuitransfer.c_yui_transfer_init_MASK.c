
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int mode; struct TYPE_23__* to_entry; struct TYPE_23__* to_label; struct TYPE_23__* transfer_button; struct TYPE_23__* from_entry; struct TYPE_23__* file_entry; } ;
typedef TYPE_1__ YuiTransfer ;
typedef TYPE_1__ GtkWidget ;
typedef int GSList ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_12 (int ,TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_13 (char*) ;
 void* FUNC_14 (char*) ;
 int FUNC_15 (int ,TYPE_1__*) ;
 int FUNC_16 (int ,int) ;
 void* FUNC_17 () ;
 TYPE_1__* FUNC_18 (int ,int) ;
 TYPE_1__* FUNC_19 () ;
 void* FUNC_20 (char const*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,double) ;
 int * FUNC_23 (int ) ;
 TYPE_1__* FUNC_24 (int *,char*) ;
 int FUNC_25 (int ,int *) ;
 TYPE_1__* FUNC_26 (int ,int ) ;
 int VAR_4 ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,char*) ;
 int FUNC_30 (char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_31 (YuiTransfer * VAR_11) {
  GtkWidget *VAR_12;
  GtkWidget *VAR_13;
  GtkWidget *VAR_14;
  GtkWidget *VAR_15;
  GtkWidget *VAR_16;
  GtkWidget *VAR_17;
  GtkWidget *VAR_18;
  GtkWidget *VAR_19;
  GtkWidget *VAR_20;
  GSList *VAR_21 = ((void*)0);
  GtkWidget *VAR_22;
  GtkWidget *VAR_23;
  GtkWidget *VAR_24;
  const char * VAR_25;

  FUNC_29 (FUNC_7 (VAR_11), FUNC_9("File transfer"));

  VAR_12 = FUNC_26 (VAR_0, 0);
  FUNC_15 (FUNC_1 (VAR_11), VAR_12);

  VAR_13 = FUNC_18 (VAR_0, 10);
  FUNC_12 (FUNC_0 (VAR_12), VAR_13, VAR_0, VAR_2, 0);
  FUNC_16 (FUNC_1 (VAR_13), 10);

  VAR_25 = FUNC_9("File");
  VAR_14 = FUNC_20 (VAR_25);
  FUNC_12 (FUNC_0 (VAR_13), VAR_14, VAR_0, VAR_0, 0);
  FUNC_22 (FUNC_3 (VAR_14), 0, 0.5);
  FUNC_21 (FUNC_2 (VAR_14), FUNC_30(VAR_25));

  VAR_11->file_entry = FUNC_17 ();
  FUNC_11(VAR_11->file_entry, "changed", FUNC_8(VAR_6), VAR_11);
  FUNC_12 (FUNC_0 (VAR_13), VAR_11->file_entry, VAR_2, VAR_2, 0);

  VAR_15 = FUNC_14 (FUNC_9("Browse"));
  FUNC_10(VAR_15, "clicked", FUNC_8(VAR_5), VAR_11->file_entry);
  FUNC_12 (FUNC_0 (VAR_13), VAR_15, VAR_0, VAR_0, 0);

  VAR_20 = FUNC_18 (VAR_0, 10);
  FUNC_12 (FUNC_0 (VAR_12), VAR_20, VAR_0, VAR_0, 0);
  FUNC_16 (FUNC_1 (VAR_20), 10);

  VAR_22 = FUNC_24 (((void*)0), FUNC_9("Load as executable"));
  FUNC_10(VAR_22, "toggled", FUNC_8(VAR_9), VAR_11);
  FUNC_12 (FUNC_0 (VAR_20), VAR_22, VAR_0, VAR_0, 0);
  FUNC_25 (FUNC_4 (VAR_22), VAR_21);
  VAR_21 = FUNC_23 (FUNC_4 (VAR_22));

  VAR_23 = FUNC_24 (((void*)0), FUNC_9("Load"));
  FUNC_10(VAR_23, "toggled", FUNC_8(VAR_8), VAR_11);
  FUNC_12 (FUNC_0 (VAR_20), VAR_23, VAR_0, VAR_0, 0);
  FUNC_25 (FUNC_4 (VAR_23), VAR_21);
  VAR_21 = FUNC_23 (FUNC_4 (VAR_23));

  VAR_24 = FUNC_24 (((void*)0), FUNC_9("Store"));
  FUNC_10(VAR_24, "toggled", FUNC_8(VAR_10), VAR_11);
  FUNC_12 (FUNC_0 (VAR_20), VAR_24, VAR_0, VAR_0, 0);
  FUNC_25 (FUNC_4 (VAR_24), VAR_21);
  VAR_21 = FUNC_23 (FUNC_4 (VAR_24));

  VAR_16 = FUNC_18 (VAR_0, 10);
  FUNC_12 (FUNC_0 (VAR_12), VAR_16, VAR_0, VAR_2, 0);
  FUNC_16 (FUNC_1 (VAR_16), 10);

  VAR_25 = FUNC_9("From");
  VAR_17 = FUNC_20 (VAR_25);
  FUNC_12 (FUNC_0 (VAR_16), VAR_17, VAR_0, VAR_0, 0);
  FUNC_22 (FUNC_3 (VAR_17), 0, 0.5);
  FUNC_21 (FUNC_2 (VAR_17), FUNC_30(VAR_25));

  VAR_11->from_entry = FUNC_17 ();
  FUNC_11(VAR_11->from_entry, "changed", FUNC_8(VAR_6), VAR_11);
  FUNC_12 (FUNC_0 (VAR_16), VAR_11->from_entry, VAR_2, VAR_2, 0);

  VAR_25 = FUNC_9("To");
  VAR_11->to_label = FUNC_20 (VAR_25);
  FUNC_12 (FUNC_0 (VAR_16), VAR_11->to_label, VAR_0, VAR_0, 0);
  FUNC_22 (FUNC_3 (VAR_11->to_label), 0, 0.5);
  FUNC_21 (FUNC_2 (VAR_11->to_label), FUNC_30(VAR_25));

  VAR_11->to_entry = FUNC_17 ();
  FUNC_11(VAR_11->to_entry, "changed", FUNC_8(VAR_6), VAR_11);
  FUNC_12 (FUNC_0 (VAR_16), VAR_11->to_entry, VAR_2, VAR_2, 0);

  VAR_18 = FUNC_19 ();
  FUNC_12 (FUNC_0 (VAR_12), VAR_18, VAR_0, VAR_2, 0);
  FUNC_16 (FUNC_1 (VAR_18), 10);

  VAR_11->transfer_button = FUNC_14 (FUNC_9("Transfer"));
  FUNC_15 (FUNC_1 (VAR_18), VAR_11->transfer_button);
  FUNC_10(VAR_11->transfer_button, "clicked", FUNC_8(VAR_7), VAR_11);
  FUNC_6 (VAR_11->transfer_button, VAR_1);

  VAR_19 = FUNC_13 ("gtk-cancel");
  FUNC_15 (FUNC_1 (VAR_18), VAR_19);
  FUNC_11(VAR_19, "clicked", FUNC_8(VAR_4), VAR_11);
  FUNC_6 (VAR_19, VAR_1);

  FUNC_28 (FUNC_5(VAR_11));

 FUNC_27(FUNC_5(VAR_11->to_label), VAR_0);
 FUNC_27(FUNC_5(VAR_11->to_entry), VAR_0);

  VAR_11->mode = VAR_3;

}
