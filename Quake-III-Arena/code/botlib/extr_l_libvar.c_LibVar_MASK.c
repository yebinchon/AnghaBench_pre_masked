
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* string; int modified; int value; } ;
typedef TYPE_1__ libvar_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

libvar_t *FUNC_6(char *VAR_1, char *VAR_2)
{
 libvar_t *VAR_3;
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) return VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 VAR_3->string = (char *) FUNC_0(FUNC_5(VAR_2) + 1);
 FUNC_4(VAR_3->string, VAR_2);

 VAR_3->value = FUNC_3(VAR_3->string);

 VAR_3->modified = VAR_0;

 return VAR_3;
}
