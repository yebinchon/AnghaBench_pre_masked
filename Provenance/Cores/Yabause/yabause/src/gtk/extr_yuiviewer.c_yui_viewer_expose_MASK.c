
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_6__ {int h; int w; int * pixbuf; } ;
typedef TYPE_1__ YuiViewer ;
struct TYPE_7__ {int window; } ;
typedef TYPE_2__ GtkWidget ;
typedef int GdkEventExpose ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(GtkWidget * VAR_1, GdkEventExpose *VAR_2, gpointer VAR_3) {
 YuiViewer * VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->pixbuf != ((void*)0)) {
  FUNC_1(VAR_1->window, ((void*)0), VAR_4->pixbuf, 0, 0, 0, 0, VAR_4->w, VAR_4->h, VAR_0, 0, 0);
 }
}
