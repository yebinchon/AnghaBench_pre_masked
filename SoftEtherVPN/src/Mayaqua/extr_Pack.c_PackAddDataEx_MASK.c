
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VALUE ;
typedef size_t UINT ;
struct TYPE_5__ {size_t num_value; int JsonHint_IsArray; int ** values; int type; int name; } ;
typedef int PACK ;
typedef TYPE_1__ ELEMENT ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (void*,size_t) ;
 int FUNC_4 (int ,int,char*) ;
 int VAR_0 ;
 void* FUNC_5 (int,int) ;

ELEMENT *FUNC_6(PACK *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6)
{
 VALUE *VAR_7;
 ELEMENT *VAR_8;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0) || VAR_6 == 0)
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_0);
 if (VAR_8 != ((void*)0))
 {
  if (VAR_8->num_value >= VAR_6)
  {
   FUNC_1(VAR_8->values[VAR_5], VAR_0);
   VAR_8->values[VAR_5] = VAR_7;
  }
  else
  {
   FUNC_1(VAR_7, VAR_0);
  }
 }
 else
 {
  VAR_8 = FUNC_5(sizeof(ELEMENT), 1);
  FUNC_4(VAR_8->name, sizeof(VAR_8->name), VAR_2);
  VAR_8->num_value = VAR_6;
  VAR_8->type = VAR_0;
  VAR_8->values = FUNC_5(sizeof(VALUE *) * VAR_6, 1);
  VAR_8->values[VAR_5] = VAR_7;
  if (FUNC_0(VAR_1, VAR_8) == 0)
  {
   return ((void*)0);
  }
 }

 VAR_8->JsonHint_IsArray = 1;

 return VAR_8;
}
