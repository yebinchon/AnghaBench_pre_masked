
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
typedef int gboolean ;
struct TYPE_7__ {int Name; int (* KeyName ) (int ,char*,int) ;scalar_t__ canScan; } ;
struct TYPE_6__ {char* group; int keyfile; } ;
struct TYPE_5__ {int keyval; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GdkEventKey ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (int ,char*,int) ;

gboolean FUNC_7(GtkWidget * VAR_3, GdkEventKey * VAR_4, gpointer VAR_5) {
 char VAR_6[100];

 if (VAR_1->canScan) return VAR_0;

 VAR_1->KeyName(VAR_4->keyval, VAR_6, 100);
 FUNC_3(FUNC_0(VAR_3), VAR_6);
 FUNC_5(VAR_6, "%s.%s.1", FUNC_1(FUNC_4(VAR_3))->group, (char *)VAR_5);
 FUNC_2(FUNC_1(FUNC_4(VAR_3))->keyfile,
  VAR_1->Name, VAR_6, VAR_4->keyval);

 return VAR_2;
}
