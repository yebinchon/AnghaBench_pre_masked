
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gint ;
struct TYPE_5__ {int address; } ;
typedef TYPE_1__ YuiMem ;
struct TYPE_6__ {int address; } ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(GtkWidget * VAR_1, YuiMem * VAR_2) {

  gint VAR_3 = FUNC_1( FUNC_0(VAR_1) );

  if (VAR_3 > -1) {
    VAR_2->address = VAR_0[VAR_3].address;
    FUNC_2(VAR_2);
  }
}
