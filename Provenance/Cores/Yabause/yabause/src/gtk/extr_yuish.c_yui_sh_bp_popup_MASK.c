
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gint ;
struct TYPE_6__ {int bp_menu; } ;
typedef TYPE_1__ YuiSh ;
struct TYPE_7__ {scalar_t__ type; int button; int time; } ;
typedef int GtkWidget ;
typedef int GtkMenu ;
typedef TYPE_3__ GdkEventButton ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int,int ) ;

gint FUNC_3(GtkWidget * VAR_2, GdkEventButton * VAR_3, gpointer VAR_4)
{
  GtkMenu *VAR_5;
  GdkEventButton *VAR_6;
  YuiSh * VAR_7 = VAR_4;

  FUNC_1 (VAR_4 != ((void*)0), VAR_0);
  FUNC_1 (VAR_3 != ((void*)0), VAR_0);

  VAR_5 = FUNC_0(VAR_7->bp_menu);

  if (VAR_3->type == VAR_1) {
      VAR_6 = (GdkEventButton *) VAR_3;
      if (VAR_6->button == 3) {
   FUNC_2 (VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_6->button, VAR_6->time);
      }
  }

  return VAR_0;
}
