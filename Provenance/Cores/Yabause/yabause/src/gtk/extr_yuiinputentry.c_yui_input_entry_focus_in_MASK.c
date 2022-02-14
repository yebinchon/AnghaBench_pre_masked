
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gpointer ;
typedef scalar_t__ gboolean ;
struct TYPE_2__ {int (* Flush ) () ;int canScan; } ;
typedef int GtkWidget ;
typedef int GdkEventFocus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;

gboolean FUNC_3(GtkWidget * VAR_6, GdkEventFocus * VAR_7, gpointer VAR_8) {
 if (! VAR_1->canScan) return VAR_2;

 VAR_1->Flush();
 VAR_3 = FUNC_0(VAR_6);

 if (!VAR_4) {
  FUNC_1(100, VAR_5, VAR_8);
  VAR_4 = VAR_2;
 }

 return VAR_0;
}
