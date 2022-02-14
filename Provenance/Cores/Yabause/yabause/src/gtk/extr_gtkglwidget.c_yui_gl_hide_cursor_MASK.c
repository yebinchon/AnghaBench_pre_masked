
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gpointer ;
typedef int gboolean ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int window; } ;
typedef TYPE_1__ GtkWidget ;
typedef TYPE_2__ GdkEventMotion ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,double,double) ;
 int VAR_2 ;
 double FUNC_2 (int ,char*,char*,int *) ;
 int FUNC_3 (int,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static gboolean FUNC_5(GtkWidget * VAR_8, GdkEventMotion * VAR_9, gpointer VAR_10) {
 if (FUNC_0(VAR_7) == VAR_1) {
  int VAR_11 = VAR_9->x;
  int VAR_12 = VAR_9->y;
  double VAR_13 = FUNC_2(VAR_4, "General", "MouseSpeed", ((void*)0));

  FUNC_1(VAR_7, VAR_13 * (VAR_11 - VAR_5), -VAR_13 * (VAR_12 - VAR_6));
  VAR_5 = VAR_11;
  VAR_6 = VAR_12;
 }

 if (VAR_2 == 0) {
  FUNC_4(VAR_8->window, ((void*)0));
  FUNC_3(1000, VAR_3, VAR_8);
 }

 VAR_2 = 2;

 return VAR_0;
}
