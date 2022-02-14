
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;
struct TYPE_8__ {size_t count; int * cvarValue; int * cvarList; int strDef; } ;
typedef TYPE_2__ multiDef_t ;
struct TYPE_9__ {scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;


 int FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,TYPE_1__*) ;

qboolean FUNC_5( itemDef_t *VAR_3, int VAR_4 ) {
 pc_token_t VAR_5;
 multiDef_t *VAR_6;

 FUNC_0(VAR_3);
 if (!VAR_3->typeData)
  return VAR_1;
 VAR_6 = (multiDef_t*)VAR_3->typeData;
 VAR_6->count = 0;
 VAR_6->strDef = VAR_1;

 if (!FUNC_4(VAR_4, &VAR_5))
  return VAR_1;
 if (*VAR_5.string != '{') {
  return VAR_1;
 }

 while ( 1 ) {
  if (!FUNC_4(VAR_4, &VAR_5)) {
   FUNC_2(VAR_4, "end of file inside menu item\n");
   return VAR_1;
  }

  if (*VAR_5.string == '}') {
   return VAR_2;
  }

  if (*VAR_5.string == ',' || *VAR_5.string == ';') {
   continue;
  }

  VAR_6->cvarList[VAR_6->count] = FUNC_3(VAR_5.string);
  if (!FUNC_1(VAR_4, &VAR_6->cvarValue[VAR_6->count])) {
   return VAR_1;
  }

  VAR_6->count++;
  if (VAR_6->count >= VAR_0) {
   return VAR_1;
  }

 }
 return VAR_1;
}
