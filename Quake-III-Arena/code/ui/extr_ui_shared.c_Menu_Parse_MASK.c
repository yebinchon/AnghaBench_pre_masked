
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;
typedef int menuDef_t ;
struct TYPE_7__ {int (* func ) (int *,int) ;} ;
typedef TYPE_2__ keywordHash_t ;
typedef int itemDef_t ;


 TYPE_2__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,TYPE_1__*) ;

qboolean FUNC_5(int VAR_3, menuDef_t *VAR_4) {
 pc_token_t VAR_5;
 keywordHash_t *VAR_6;

 if (!FUNC_4(VAR_3, &VAR_5))
  return VAR_1;
 if (*VAR_5.string != '{') {
  return VAR_1;
 }

 while ( 1 ) {

  FUNC_2(&VAR_5, 0, sizeof(pc_token_t));
  if (!FUNC_4(VAR_3, &VAR_5)) {
   FUNC_1(VAR_3, "end of file inside menu\n");
   return VAR_1;
  }

  if (*VAR_5.string == '}') {
   return VAR_2;
  }

  VAR_6 = FUNC_0(VAR_0, VAR_5.string);
  if (!VAR_6) {
   FUNC_1(VAR_3, "unknown menu keyword %s", VAR_5.string);
   continue;
  }
  if ( !VAR_6->func((itemDef_t*)VAR_4, VAR_3) ) {
   FUNC_1(VAR_3, "couldn't parse menu keyword %s", VAR_5.string);
   return VAR_1;
  }
 }
 return VAR_1;
}
