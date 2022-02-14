
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char const*,int ) ;

bool
FUNC_4(const char *VAR_2)
{
 bool VAR_3 = 0;
 char *VAR_4 = ((void*)0);

 StringInfo VAR_5 = FUNC_1();
 FUNC_0(VAR_5, "base/%s/%s", VAR_1, VAR_0);

 VAR_4 = FUNC_3(VAR_2, VAR_5->data);
 if (VAR_4 != ((void*)0))
 {
  VAR_3 = 1;
 }

 FUNC_2(VAR_5);

 return VAR_3;
}
