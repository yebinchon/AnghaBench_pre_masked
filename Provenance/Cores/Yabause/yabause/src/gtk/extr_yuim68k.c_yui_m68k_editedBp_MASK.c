
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef char gchar ;
struct TYPE_3__ {int* cbp; int bpListStore; } ;
typedef TYPE_1__ YuiM68k ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int ,char*,int) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char**,int) ;

__attribute__((used)) static void FUNC_11( GtkCellRendererText *VAR_0,
        gchar *VAR_1,
        gchar *VAR_2,
        YuiM68k *VAR_3) {


  GtkTreeIter VAR_4;
  char VAR_5[10];
  char *VAR_6;
  int VAR_7 = FUNC_4(VAR_1);
  u32 VAR_8;
  FUNC_6( FUNC_1( VAR_3->bpListStore ), &VAR_4, VAR_1 );
  VAR_8 = FUNC_10(VAR_2, &VAR_6, 16 );
  if ((VAR_6 - VAR_2 < FUNC_9(VAR_2)) || (!VAR_8)) VAR_8 = 0xFFFFFFFF;
  if ( VAR_3->cbp[VAR_7] != 0xFFFFFFFF) FUNC_3(VAR_3->cbp[VAR_7]);
  VAR_3->cbp[VAR_7] = 0xFFFFFFFF;

  if ((VAR_8!=0xFFFFFFFF)&&(FUNC_2(VAR_8) == 0)) {

    FUNC_7(VAR_5, "%08X", (int)VAR_8);
    VAR_3->cbp[VAR_7] = VAR_8;
  } else FUNC_8(VAR_5,"<empty>");
  FUNC_5( FUNC_0( VAR_3->bpListStore ), &VAR_4, 0, VAR_5, -1 );
}
