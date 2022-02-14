
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char**,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static char* FUNC_4(char *VAR_1, UINT VAR_2) {
 char *VAR_3 = VAR_1;
 UINT VAR_4 = (VAR_2 + 1) * sizeof(char);
 UINT VAR_5 = 0;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 VAR_6 = (char*)FUNC_3(VAR_4);
 if (VAR_6 == ((void*)0)) {
  goto error;
 }
 VAR_7 = VAR_6;
 while ((*VAR_3 != '\0') && (UINT)(VAR_3 - VAR_1) < VAR_2) {
  if (*VAR_3 == '\\') {
   VAR_3++;
   switch (*VAR_3) {
   case '\"': *VAR_7 = '\"'; break;
   case '\\': *VAR_7 = '\\'; break;
   case '/': *VAR_7 = '/'; break;
   case 'b': *VAR_7 = '\b'; break;
   case 'f': *VAR_7 = '\f'; break;
   case 'n': *VAR_7 = '\n'; break;
   case 'r': *VAR_7 = '\r'; break;
   case 't': *VAR_7 = '\t'; break;
   case 'u':
    if (FUNC_1(&VAR_3, &VAR_7) == VAR_0) {
     goto error;
    }
    break;
   default:
    goto error;
   }
  }
  else if ((unsigned char)*VAR_3 < 0x20) {
   goto error;
  }
  else {
   *VAR_7 = *VAR_3;
  }
  VAR_7++;
  VAR_3++;
 }
 *VAR_7 = '\0';

 VAR_5 = (UINT)(VAR_7 - VAR_6) + 1;

 VAR_8 = (char*)FUNC_3(VAR_5);
 if (VAR_8 == ((void*)0)) {
  goto error;
 }
 FUNC_0(VAR_8, VAR_6, VAR_5);
 FUNC_2(VAR_6);
 return VAR_8;
error:
 FUNC_2(VAR_6);
 return ((void*)0);
}
