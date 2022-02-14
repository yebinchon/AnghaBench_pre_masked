
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_5__ {int addr; } ;
typedef TYPE_1__ codebreakpoint_struct ;
struct TYPE_6__ {int bpListStore; int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int *,int) ;
 int FUNC_5 (int *,char*,int) ;

void FUNC_6(YuiSh * VAR_1) {
  const codebreakpoint_struct *VAR_2;
  int VAR_3;

  FUNC_3(FUNC_0( VAR_1->bpListStore ));

  VAR_2 = FUNC_1(VAR_1->debugsh);

  for (VAR_3 = 0; VAR_3 < VAR_0-1; VAR_3++) {

    if (VAR_2[VAR_3].addr != 0xFFFFFFFF) {
      gchar VAR_4[20];
      GtkTreeIter VAR_5;
      FUNC_2( FUNC_0( VAR_1->bpListStore ), &VAR_5 );

      FUNC_5(VAR_4, "%08X", (int)VAR_2[VAR_3].addr);
      FUNC_4( FUNC_0( VAR_1->bpListStore ), &VAR_5, 0, VAR_4, -1 );
    }
  }
}
