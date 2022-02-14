
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 TYPE_1__* FUNC_6 () ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_2)
{
 StringInfo VAR_3 = FUNC_6();
 const char *VAR_4 = FUNC_0();
 char *VAR_5 = (char *) VAR_2;

 for (; *VAR_5; VAR_5++)
 {
  if (!((*VAR_5 >= 'a' && *VAR_5 <= 'z') ||
     (*VAR_5 >= 'A' && *VAR_5 <= 'Z') ||
     (*VAR_5 >= '0' && *VAR_5 <= '9') ||
     (*VAR_5 == '_') || (*VAR_5 == '-')))
  {
   FUNC_2(VAR_1, (FUNC_3(VAR_0),
       FUNC_5("result key \"%s\" contains invalid character",
           VAR_2),
       FUNC_4("Result keys may only contain letters, numbers, "
         "underscores and hyphens.")));
  }
 }

 FUNC_1(VAR_3, "%s/%s.data",
      VAR_4, VAR_2);

 return VAR_3->data;
}
