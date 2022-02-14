
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {char** names; char** values; int count; int capacity; } ;
typedef char JSON_VALUE ;
typedef TYPE_1__ JSON_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char**,int) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static UINT FUNC_3(JSON_OBJECT *VAR_2, UINT VAR_3) {
 char **VAR_4 = ((void*)0);
 JSON_VALUE **VAR_5 = ((void*)0);

 if ((VAR_2->names == ((void*)0) && VAR_2->values != ((void*)0)) ||
  (VAR_2->names != ((void*)0) && VAR_2->values == ((void*)0)) ||
  VAR_3 == 0) {
   return VAR_0;
 }
 VAR_4 = (char**)FUNC_2(VAR_3 * sizeof(char*));
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }
 VAR_5 = (JSON_VALUE**)FUNC_2(VAR_3 * sizeof(JSON_VALUE*));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_4);
  return VAR_0;
 }
 if (VAR_2->names != ((void*)0) && VAR_2->values != ((void*)0) && VAR_2->count > 0) {
  FUNC_0(VAR_4, VAR_2->names, VAR_2->count * sizeof(char*));
  FUNC_0(VAR_5, VAR_2->values, VAR_2->count * sizeof(JSON_VALUE*));
 }
 FUNC_1(VAR_2->names);
 FUNC_1(VAR_2->values);
 VAR_2->names = VAR_4;
 VAR_2->values = VAR_5;
 VAR_2->capacity = VAR_3;
 return VAR_1;
}
