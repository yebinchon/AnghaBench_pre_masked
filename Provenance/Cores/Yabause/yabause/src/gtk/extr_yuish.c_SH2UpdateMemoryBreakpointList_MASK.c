
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int addr; int flags; } ;
typedef TYPE_1__ memorybreakpoint_struct ;
typedef scalar_t__ gchar ;
struct TYPE_6__ {int mbpListStore; int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,char*,int) ;

void FUNC_6(YuiSh * VAR_7) {
  const memorybreakpoint_struct *VAR_8;
  int VAR_9;

  FUNC_3( VAR_7->mbpListStore );

  VAR_8 = FUNC_1(VAR_7->debugsh);

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {

    if (VAR_8[VAR_9].addr != 0xFFFFFFFF) {
      gchar VAR_10[30];
      gchar VAR_11[30];
      gchar *VAR_12 = VAR_11;
      u32 VAR_13 = VAR_8[VAR_9].flags;

      GtkTreeIter VAR_14;
      FUNC_2( FUNC_0( VAR_7->mbpListStore ), &VAR_14 );

      FUNC_5(VAR_10, "%08X", (int)VAR_8[VAR_9].addr);
      if ( VAR_13 & VAR_0 ) *(VAR_12++) = 'b';
      if ( VAR_13 & VAR_4 ) *(VAR_12++) = 'w';
      if ( VAR_13 & VAR_2 ) *(VAR_12++) = 'l';
      if ( VAR_13 & VAR_1 ) *(VAR_12++) = 'B';
      if ( VAR_13 & VAR_5 ) *(VAR_12++) = 'W';
      if ( VAR_13 & VAR_3 ) *(VAR_12++) = 'L';
      *VAR_12 = 0;

      FUNC_4( FUNC_0( VAR_7->mbpListStore ), &VAR_14, 0, VAR_10, -1 );
      FUNC_4( FUNC_0( VAR_7->mbpListStore ), &VAR_14, 1, VAR_11, -1 );
    }
  }
}
