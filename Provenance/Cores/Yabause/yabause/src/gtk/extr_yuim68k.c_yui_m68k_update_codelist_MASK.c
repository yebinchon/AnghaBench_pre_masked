
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int lastCode; int uLabel; } ;
typedef TYPE_1__ YuiM68k ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( YuiM68k *VAR_0, u32 VAR_1) {


  int VAR_2;
  static char VAR_3[] = "<span foreground=\"red\">";
  static char VAR_4[] = "</span>\n";
  char VAR_5[64*24+40];
  char *VAR_6 = VAR_5;
  char VAR_7[64];
  u8 VAR_8 = 0;
  u32 VAR_9;

  if ( VAR_1 - VAR_0->lastCode >= 22 ) VAR_9 = VAR_1;
  else VAR_9 = VAR_0->lastCode;
  VAR_0->lastCode = VAR_9;

  for (VAR_2=0; VAR_2 < 24; VAR_2++) {

    if ( VAR_9 == VAR_1 ) { VAR_8 = 1; FUNC_3( VAR_6, VAR_3 ); VAR_6 += FUNC_4(VAR_3); }
    VAR_9 = FUNC_1(VAR_9, VAR_7);
    FUNC_3( VAR_6, VAR_7 );
    VAR_6 += FUNC_4(VAR_7);
    if ( VAR_8 ) { VAR_8 = 0; FUNC_3( VAR_6, VAR_4 ); VAR_6 += FUNC_4(VAR_4); }
    else { FUNC_3( VAR_6, "\n" ); VAR_6 += 1;}
  }
  *VAR_6 = 0;
  FUNC_2( FUNC_0(VAR_0->uLabel), VAR_5 );
}
