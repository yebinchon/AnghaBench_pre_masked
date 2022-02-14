
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int lastCode; int uLabel; } ;
typedef TYPE_1__ YuiScudsp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( YuiScudsp *VAR_0, u32 VAR_1) {


  int VAR_2;
  static char VAR_3[] = "<span foreground=\"red\">";
  static char VAR_4[] = "</span>\n";
  char VAR_5[100*24+40];
  char *VAR_6 = VAR_5;
  char VAR_7[100];
  u32 VAR_8;

  if ( VAR_1 - VAR_0->lastCode >= 20 ) VAR_8 = VAR_1 - 8;
  else VAR_8 = VAR_0->lastCode;
  VAR_0->lastCode = VAR_8;

  for (VAR_2=0; VAR_2 < 24; VAR_2++) {

    if ( VAR_8 + VAR_2 == VAR_1 ) { FUNC_3( VAR_6, VAR_3 ); VAR_6 += FUNC_4(VAR_3); }
    FUNC_1(VAR_8+VAR_2, VAR_7);
    FUNC_3( VAR_6, VAR_7 );
    VAR_6 += FUNC_4(VAR_7);
    if ( VAR_8 + VAR_2 == VAR_1 ) { FUNC_3( VAR_6, VAR_4 ); VAR_6 += FUNC_4(VAR_4); }
    else { FUNC_3( VAR_6, "\n" ); VAR_6 += 1;}
  }
  *VAR_6 = 0;

  FUNC_2( FUNC_0(VAR_0->uLabel), VAR_5 );
}
