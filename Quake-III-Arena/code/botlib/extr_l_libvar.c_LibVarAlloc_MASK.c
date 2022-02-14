
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ libvar_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

libvar_t *FUNC_4(char *VAR_1)
{
 libvar_t *VAR_2;

 VAR_2 = (libvar_t *) FUNC_1(sizeof(libvar_t) + FUNC_3(VAR_1) + 1);
 FUNC_0(VAR_2, 0, sizeof(libvar_t));
 VAR_2->name = (char *) VAR_2 + sizeof(libvar_t);
 FUNC_2(VAR_2->name, VAR_1);

 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 return VAR_2;
}
