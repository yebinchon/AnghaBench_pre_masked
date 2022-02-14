
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VALUE ;
typedef int UINT ;
struct TYPE_4__ {int num_value; int type; int ** values; int name; } ;
typedef TYPE_1__ ELEMENT ;


 int FUNC_0 (int ,int,char*) ;
 TYPE_1__* FUNC_1 (int) ;

ELEMENT *FUNC_2(char *VAR_0, UINT VAR_1, UINT VAR_2, VALUE **VAR_3)
{
 ELEMENT *VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_4 = FUNC_1(sizeof(ELEMENT));
 FUNC_0(VAR_4->name, sizeof(VAR_4->name), VAR_0);
 VAR_4->num_value = VAR_2;
 VAR_4->type = VAR_1;


 VAR_4->values = (VALUE **)FUNC_1(sizeof(VALUE *) * VAR_2);
 for (VAR_5 = 0;VAR_5 < VAR_4->num_value;VAR_5++)
 {
  VAR_4->values[VAR_5] = VAR_3[VAR_5];
 }

 return VAR_4;
}
