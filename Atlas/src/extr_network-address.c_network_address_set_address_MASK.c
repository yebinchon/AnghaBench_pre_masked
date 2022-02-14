
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_address ;
typedef int guint ;
typedef int gint ;
typedef char gchar ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char**,int) ;

gint FUNC_8(network_address *VAR_1, const gchar *VAR_2) {
 gchar *VAR_3;

 FUNC_2(VAR_1, -1);


 if (VAR_2[0] == '/')
  return FUNC_5(VAR_1, VAR_2);

 if (((void*)0) != (VAR_3 = FUNC_6(VAR_2, ':'))) {
  gint VAR_4;
  char *VAR_5 = FUNC_3(VAR_2, VAR_3 - VAR_2);
  char *VAR_6 = ((void*)0);

  guint VAR_7 = FUNC_7(VAR_3 + 1, &VAR_6, 10);

  if (*(VAR_3 + 1) == '\0') {
   FUNC_0("%s: IP-address has to be in the form [<ip>][:<port>], is '%s'. No port number",
     VAR_0, VAR_2);
   VAR_4 = -1;
  } else if (*VAR_6 != '\0') {
   FUNC_0("%s: IP-address has to be in the form [<ip>][:<port>], is '%s'. Failed to parse the port at '%s'",
     VAR_0, VAR_2, VAR_6);
   VAR_4 = -1;
  } else {
   VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_7);
  }

  if (VAR_5) FUNC_1(VAR_5);

  return VAR_4;
 }

 return FUNC_4(VAR_1, VAR_2, 3306);
}
