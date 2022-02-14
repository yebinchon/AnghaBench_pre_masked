
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gint ;
typedef char gchar ;
struct TYPE_4__ {int flags; int entry; } ;
typedef TYPE_1__ YuiFileEntry ;
typedef int GtkWidget ;
typedef int GtkFileChooserAction ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*) ;
 int * FUNC_6 (char*,int *,int ,int ,int,int ,int,int *) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(GtkWidget * VAR_5, gpointer VAR_6) {
        GtkWidget * VAR_7;
        gint VAR_8;
        const gchar * VAR_9;
 YuiFileEntry * VAR_10 = VAR_6;
 GtkFileChooserAction VAR_11;

 if (VAR_10->flags & VAR_4) {
  VAR_11 = VAR_1;
 } else {
  VAR_11 = VAR_0;
 }

        VAR_7 = FUNC_6 ("Please choose a file", ((void*)0), VAR_11,
                        VAR_2, 128, VAR_3, 129, ((void*)0));
 VAR_9 = FUNC_4(FUNC_1(VAR_10->entry));
 if (VAR_9[0] != '\0')
         FUNC_8(FUNC_2(VAR_7), VAR_9);

        FUNC_10(VAR_7);

        VAR_8 = FUNC_3(FUNC_0(VAR_7));

        switch(VAR_8) {
                case 129:
                        VAR_9 = FUNC_7(FUNC_2(VAR_7));
                        FUNC_5(FUNC_1(VAR_10->entry), VAR_9);
                        break;
                case 128:
                        break;
        }

        FUNC_9(VAR_7);
}
