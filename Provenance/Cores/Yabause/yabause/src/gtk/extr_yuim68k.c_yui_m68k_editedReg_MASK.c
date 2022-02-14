
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef char gchar ;
struct TYPE_4__ {int regListStore; } ;
typedef TYPE_1__ YuiM68k ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int,char*,int) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char**,int) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10( GtkCellRendererText *VAR_1,
         gchar *VAR_2,
         gchar *VAR_3,
         YuiM68k *VAR_4) {


  GtkTreeIter VAR_5;
  char VAR_6[10];
  char *VAR_7;
  int VAR_8 = FUNC_2(VAR_2);
  u32 VAR_9;

  FUNC_4( FUNC_1( VAR_4->regListStore ), &VAR_5, VAR_2 );
  VAR_9 = FUNC_8(VAR_3, &VAR_7, 16 );
  if ( VAR_7 - VAR_3 == FUNC_7(VAR_3) ) {

    FUNC_6(VAR_6, "%08X", (int)VAR_9);
    FUNC_5( VAR_4, VAR_8, VAR_9 );
    FUNC_3( FUNC_0( VAR_4->regListStore ), &VAR_5, 1, VAR_6, -1 );
  }
  FUNC_9( VAR_0 );
}
