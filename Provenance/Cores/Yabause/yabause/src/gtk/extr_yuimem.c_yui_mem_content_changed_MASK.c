
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int gint ;
typedef scalar_t__ gchar ;
struct TYPE_3__ {int wLine; int yui; int store; scalar_t__ address; } ;
typedef TYPE_1__ YuiMem ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( GtkCellRendererText *VAR_0,
        gchar *VAR_1,
        gchar *VAR_2,
        YuiMem *VAR_3) {


  GtkTreeIter VAR_4;
  gint VAR_5 = FUNC_2(VAR_1);
  gint VAR_6,VAR_7;
  gchar *VAR_8;
  u32 VAR_9 = VAR_3->address + VAR_5*VAR_3->wLine;

  FUNC_3( FUNC_0( VAR_3->store ), &VAR_4, VAR_1 );


  for ( VAR_8 = VAR_2, VAR_6=0 ; *VAR_8 ; VAR_8++ )
    if ( FUNC_4( *VAR_8 ) != -1 ) VAR_6++;

  if ( VAR_6 != VAR_3->wLine * 2 ) return;


  for ( VAR_8 = VAR_2, VAR_7=-1 ; *VAR_8 ; VAR_8++ ) {

    if ( FUNC_4( *VAR_8 )!=-1 ) {

      if ( VAR_7==-1 ) VAR_7 = FUNC_4( *VAR_8 );
      else { FUNC_1( VAR_9++, 16*VAR_7 + FUNC_4( *VAR_8 ) ); VAR_7 = -1;
      }
    }
  }
  FUNC_5(VAR_3->yui);
}
