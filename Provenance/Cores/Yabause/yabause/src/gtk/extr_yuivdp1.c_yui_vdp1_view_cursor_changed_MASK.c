
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_4__ {int cursor; int h; int w; int texture; int buffer; int image; } ;
typedef TYPE_1__ YuiVdp1 ;
typedef int GtkWidget ;
typedef int GtkTreePath ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,int **,int *) ;
 int FUNC_10 (int *,char*,int*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(GtkWidget * VAR_0, YuiVdp1 * VAR_1) {
 GtkTreePath * VAR_2;
 gchar * VAR_3;
 int VAR_4;

 FUNC_9(FUNC_0(VAR_0), &VAR_2, ((void*)0));

 if (VAR_2) {
  gchar VAR_5[1024];

  FUNC_12(FUNC_3(VAR_1->image));

  VAR_3 = FUNC_8(VAR_2);

  FUNC_10(VAR_3, "%i", &VAR_4);

  VAR_1->cursor = VAR_4;

  FUNC_1(VAR_4, VAR_5);
  FUNC_6(VAR_1->buffer, FUNC_5(VAR_5), -1);
  VAR_1->texture = FUNC_2(VAR_4, &VAR_1->w, &VAR_1->h);
  FUNC_11(VAR_1);

  FUNC_4(VAR_3);
  FUNC_7(VAR_2);
 }
}
