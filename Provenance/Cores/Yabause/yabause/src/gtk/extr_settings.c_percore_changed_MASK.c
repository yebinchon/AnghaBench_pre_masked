
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
struct TYPE_8__ {char* value; } ;
struct TYPE_7__ {int data; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GList ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(GtkWidget * VAR_1, gpointer VAR_2) {
 const char * VAR_3 = VAR_0[FUNC_4(FUNC_0(VAR_1))].value;
 GList * VAR_4 = VAR_2;
 int VAR_5;
 FUNC_5(VAR_3, "%d", &VAR_5);

 FUNC_1();
 FUNC_2(VAR_5);

 while(VAR_4) {
  FUNC_6(VAR_4->data);
  VAR_4 = FUNC_3(VAR_4);
 }
}
