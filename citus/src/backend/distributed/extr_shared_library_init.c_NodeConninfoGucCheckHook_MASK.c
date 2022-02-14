
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*,char const**,int ,char**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const**) ;

__attribute__((used)) static bool
FUNC_3(char **VAR_0, void **VAR_1, GucSource VAR_2)
{

 const char *VAR_3[] = {
  "application_name",
  "connect_timeout",



  "keepalives",
  "keepalives_count",
  "keepalives_idle",
  "keepalives_interval",



  "sslcompression",
  "sslcrl",
  "sslmode",
  "sslrootcert"
 };
 char *VAR_4 = ((void*)0);
 bool VAR_5 = FUNC_0(*VAR_0, VAR_3, FUNC_2(VAR_3),
            &VAR_4);

 if (!VAR_5)
 {
  FUNC_1("%s", VAR_4);
 }

 return VAR_5;
}
