
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VALUE ;
typedef size_t UINT ;
struct TYPE_3__ {size_t type; size_t num_value; int ** values; int name; } ;
typedef TYPE_1__ ELEMENT ;
typedef int BUF ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,size_t) ;

void FUNC_3(BUF *VAR_0, ELEMENT *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_0, VAR_1->name);

 FUNC_0(VAR_0, VAR_1->type);

 FUNC_0(VAR_0, VAR_1->num_value);

 for (VAR_2 = 0;VAR_2 < VAR_1->num_value;VAR_2++)
 {
  VALUE *VAR_3 = VAR_1->values[VAR_2];
  FUNC_2(VAR_0, VAR_3, VAR_1->type);
 }
}
