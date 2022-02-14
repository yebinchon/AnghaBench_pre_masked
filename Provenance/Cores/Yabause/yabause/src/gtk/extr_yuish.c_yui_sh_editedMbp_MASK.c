
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int gchar ;
struct TYPE_4__ {int debugsh; int mbpListStore; } ;
typedef TYPE_1__ YuiSh ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int *,int,int**,int) ;
 int FUNC_6 (int ,int *,int*) ;
 int FUNC_7 (int*,char*,unsigned int*) ;
 unsigned int FUNC_8 (int*,int**,int) ;

__attribute__((used)) static void FUNC_9( GtkCellRendererText *VAR_6,
        gchar *VAR_7,
        gchar *VAR_8,
         YuiSh *VAR_9) {


  GtkTreeIter VAR_10;
  gchar *VAR_11;
  unsigned int VAR_12;
  gchar * VAR_13, * VAR_14;
  unsigned int VAR_15;
  u32 VAR_16;

  FUNC_6( FUNC_0( VAR_9->mbpListStore ), &VAR_10, VAR_7 );

  FUNC_5(FUNC_0( VAR_9->mbpListStore ), &VAR_10, 0, &VAR_13, -1);
  FUNC_7(VAR_13, "%8X", &VAR_15);
  FUNC_4(VAR_13);

  FUNC_5(FUNC_0( VAR_9->mbpListStore ), &VAR_10, 1, &VAR_14, -1);

  FUNC_2(VAR_9->debugsh, VAR_15);

  VAR_12 = FUNC_8(VAR_8, &VAR_11, 16 );
  if (!VAR_12) VAR_12 = 0xFFFFFFFF;

  if (VAR_12!=0xFFFFFFFF) {

    VAR_16 = 0;
    VAR_11 = VAR_14;
    while ( *VAR_11 ) {

      switch (*VAR_11) {

      case 'b': VAR_16 |= VAR_0; break;
      case 'w': VAR_16 |= VAR_4; break;
      case 'l': VAR_16 |= VAR_2; break;
      case 'B': VAR_16 |= VAR_1; break;
      case 'W': VAR_16 |= VAR_5; break;
      case 'L': VAR_16 |= VAR_3; break;
      }
      VAR_11++;
    }

    if ( !VAR_16 ) VAR_16 = VAR_0|VAR_4|VAR_2|VAR_1|VAR_5|VAR_3;
    FUNC_1(VAR_9->debugsh, VAR_12, VAR_16);
  }

  FUNC_3(VAR_9);
}
