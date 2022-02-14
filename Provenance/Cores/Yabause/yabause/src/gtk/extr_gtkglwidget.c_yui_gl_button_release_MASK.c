
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
typedef int gboolean ;
struct TYPE_3__ {int button; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GdkEventButton ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static gboolean FUNC_4(GtkWidget * VAR_3, GdkEventButton * VAR_4, gpointer VAR_5) {
 if (FUNC_0(VAR_2) == VAR_1) {
  switch(VAR_4->button) {
   case 1:
    FUNC_1(VAR_2);
    break;
   case 2:
    FUNC_2(VAR_2);
    break;
   case 3:
    FUNC_3(VAR_2);
    break;
  }
 }
 return VAR_0;
}
