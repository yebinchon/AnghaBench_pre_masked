
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gint ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int button; int time; } ;
typedef int GtkWidget ;
typedef int GtkMenu ;
typedef TYPE_1__ GdkEventButton ;
typedef TYPE_2__ GdkEvent ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int,int ) ;

__attribute__((used)) static gint
FUNC_4 (GtkWidget *VAR_3, GdkEvent *VAR_4)
{
  GtkMenu *VAR_5;
  GdkEventButton *VAR_6;

  FUNC_2 (VAR_3 != ((void*)0), VAR_0);
  FUNC_2 (FUNC_0 (VAR_3), VAR_0);
  FUNC_2 (VAR_4 != ((void*)0), VAR_0);




  VAR_5 = FUNC_1 (VAR_3);

  if (VAR_4->type == VAR_1)
    {
      VAR_6 = (GdkEventButton *) VAR_4;
      if (VAR_6->button == 3)
 {
   FUNC_3 (VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_6->button, VAR_6->time);
   return VAR_2;
 }
    }

  return VAR_0;
}
