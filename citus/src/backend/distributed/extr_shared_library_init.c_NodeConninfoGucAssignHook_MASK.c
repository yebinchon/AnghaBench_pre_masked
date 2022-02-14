
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* val; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, void *VAR_2)
{
 PQconninfoOption *VAR_3 = ((void*)0);
 PQconninfoOption *VAR_4 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = "";
 }

 VAR_3 = FUNC_2(VAR_1, ((void*)0));
 if (VAR_3 == ((void*)0))
 {
  FUNC_4(VAR_0, (FUNC_6("cannot parse node_conninfo value"),
      FUNC_5("The GUC check hook should prevent "
          "all malformed values.")));
 }

 FUNC_3();

 for (VAR_4 = VAR_3; VAR_4->keyword != ((void*)0); VAR_4++)
 {
  if (VAR_4->val == ((void*)0) || VAR_4->val[0] == '\0')
  {
   continue;
  }

  FUNC_0(VAR_4->keyword, VAR_4->val);
 }

 FUNC_1(VAR_3);
}
