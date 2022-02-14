
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gint ;
struct TYPE_3__ {int w; int pixbuf; } ;
typedef TYPE_1__ YuiViewer ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*,int *,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,int *,int ,int ,int,int ,int,int *) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(YuiViewer * VAR_3) {
        GtkWidget * VAR_4;
        gint VAR_5;
 char * VAR_6;
 int VAR_7;

        VAR_4 = FUNC_4 ("Please choose a file", ((void*)0), VAR_0,
                        VAR_1, 128, VAR_2, 129, ((void*)0));

        FUNC_7(VAR_4);

        VAR_5 = FUNC_3(FUNC_0(VAR_4));

        switch(VAR_5) {
                case 129:
   VAR_7 = VAR_3->w * 4;
   VAR_7 += (VAR_7 % 4)? (4 - (VAR_7 % 4)): 0;
   VAR_6 = FUNC_5(FUNC_1(VAR_4));

   FUNC_2(VAR_3->pixbuf, VAR_6, "png", ((void*)0), ((void*)0));

                        break;
                case 128:
                        break;
        }

        FUNC_6(VAR_4);
}
