
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char const*,char const*) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int ) ;

char *
FUNC_6(Oid VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_2);
 StringInfo VAR_4 = ((void*)0);
 const char *VAR_5 = ((void*)0);
 const char *VAR_6 = ((void*)0);

 if (FUNC_5(VAR_3, "public", VAR_1) == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3();
 VAR_6 = FUNC_4(VAR_3);
 VAR_5 = FUNC_4(FUNC_0(VAR_2));
 FUNC_1(VAR_4, VAR_0, VAR_6, VAR_5);

 return VAR_4->data;
}
