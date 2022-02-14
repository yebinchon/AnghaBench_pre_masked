
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char const*,int ) ;

bool
FUNC_4(const char *VAR_1)
{
 bool VAR_2 = 0;
 char *VAR_3 = ((void*)0);

 StringInfo VAR_4 = FUNC_1();
 FUNC_0(VAR_4, "base/%s/", VAR_0);

 VAR_3 = FUNC_3(VAR_1, VAR_4->data);





 if (VAR_3 == VAR_1)
 {
  VAR_2 = 1;
 }

 FUNC_2(VAR_4);

 return VAR_2;
}
