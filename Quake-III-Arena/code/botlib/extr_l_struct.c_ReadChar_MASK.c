
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; char* string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;
typedef int qboolean ;
typedef int fielddef_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;

qboolean FUNC_4(source_t *VAR_1, fielddef_t *VAR_2, void *VAR_3)
{
 token_t VAR_4;

 if (!FUNC_0(VAR_1, &VAR_4)) return 0;


 if (VAR_4.type == VAR_0)
 {
  FUNC_3(VAR_4.string);
  *(char *) VAR_3 = VAR_4.string[0];
 }
 else
 {
  FUNC_1(VAR_1);
  if (!FUNC_2(VAR_1, VAR_2, VAR_3)) return 0;
 }
 return 1;
}
