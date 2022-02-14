
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int guint ;
typedef int * gpointer ;
typedef char gchar ;
struct TYPE_2__ {int (* KeyName ) (int ,char*,int) ;int Name; } ;
typedef int GtkWidget ;
typedef int GtkAttachOptions ;
typedef int GKeyFile ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int ,char*,int *,char*,char const*,int *) ;
 int FUNC_7 (int *,char*,int ,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int) ;
 int * FUNC_11 (char const*) ;
 int FUNC_12 (int ,int ,double) ;
 int FUNC_13 (int ,int *,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (char*,char*,char const*,char const*) ;
 int FUNC_17 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 () ;
 int VAR_6 ;

GtkWidget* FUNC_19(GKeyFile * VAR_7, const gchar * VAR_8, const gchar * VAR_9[]) {
 GtkWidget * VAR_10;
 GtkWidget * VAR_11;
 GtkWidget * VAR_12;
 guint VAR_13;
 int VAR_14 = 0;

 VAR_10 = FUNC_3(FUNC_6(FUNC_18(), "key-file", VAR_7, "group", VAR_8, ((void*)0)));

 while(VAR_9[VAR_14]) {
  char VAR_15[100];
  FUNC_14(FUNC_2(VAR_10), VAR_14 + 1, 2);
  VAR_11 = FUNC_11(VAR_9[VAR_14]);

  FUNC_13(FUNC_2(VAR_10), VAR_11, 0, 1, VAR_14 , VAR_14 + 1,
   (GtkAttachOptions) (VAR_2), (GtkAttachOptions) (0), 0, 0);
  FUNC_12 (FUNC_1 (VAR_11), 0, 0.5);

  VAR_12 = FUNC_8 ();
  FUNC_10(FUNC_0(VAR_12), 10);

  FUNC_16(VAR_15, "%s.%s.1", VAR_8, VAR_9[VAR_14]);
  VAR_13 = FUNC_5(VAR_7, VAR_3->Name, VAR_15, 0);
  if (VAR_13 > 0) {
   char VAR_16[50];
   VAR_3->KeyName(VAR_13, VAR_16, 50);
   FUNC_9(FUNC_0(VAR_12), VAR_16);
  }

  if (VAR_3) {

    FUNC_7(VAR_12, "focus-in-event", FUNC_4(VAR_4), (gpointer) VAR_9[VAR_14]);
    FUNC_7(VAR_12, "focus-out-event", FUNC_4(VAR_5), ((void*)0));

    FUNC_7(VAR_12, "key-press-event", FUNC_4(VAR_6), (gpointer) VAR_9[VAR_14]);
  } else {
   FUNC_15(VAR_12, VAR_0);
  }

  FUNC_13(FUNC_2(VAR_10), VAR_12, 1, 2, VAR_14, VAR_14 + 1,
   (GtkAttachOptions) (VAR_1 | VAR_2), (GtkAttachOptions) (0), 0, 0);
  VAR_14++;
 }

 return VAR_10;
}
