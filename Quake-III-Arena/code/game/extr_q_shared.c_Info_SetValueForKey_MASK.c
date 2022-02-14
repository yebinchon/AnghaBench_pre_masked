
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int newi ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;

void FUNC_8( char *VAR_2, const char *VAR_3, const char *VAR_4 ) {
 char VAR_5[VAR_1];

 if ( FUNC_7( VAR_2 ) >= VAR_1 ) {
  FUNC_0( VAR_0, "Info_SetValueForKey: oversize infostring" );
 }

 if (FUNC_5 (VAR_3, '\\') || FUNC_5 (VAR_4, '\\'))
 {
  FUNC_1 ("Can't use keys or values with a \\\n");
  return;
 }

 if (FUNC_5 (VAR_3, ';') || FUNC_5 (VAR_4, ';'))
 {
  FUNC_1 ("Can't use keys or values with a semicolon\n");
  return;
 }

 if (FUNC_5 (VAR_3, '\"') || FUNC_5 (VAR_4, '\"'))
 {
  FUNC_1 ("Can't use keys or values with a \"\n");
  return;
 }

 FUNC_3 (VAR_2, VAR_3);
 if (!VAR_4 || !FUNC_7(VAR_4))
  return;

 FUNC_2 (VAR_5, sizeof(VAR_5), "\\%s\\%s", VAR_3, VAR_4);

 if (FUNC_7(VAR_5) + FUNC_7(VAR_2) > VAR_1)
 {
  FUNC_1 ("Info string length exceeded\n");
  return;
 }

 FUNC_4 (VAR_5, VAR_2);
 FUNC_6 (VAR_2, VAR_5);
}
