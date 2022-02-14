
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* str; struct TYPE_4__* next; } ;
typedef TYPE_1__ stringDef_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 long FUNC_1 (char const*) ;
 TYPE_1__** VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;

const char *FUNC_5(const char *VAR_4) {
 int VAR_5;
 long VAR_6;
 stringDef_t *VAR_7, *VAR_8;
 static const char *VAR_9 = "";

 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }

 if (*VAR_4 == 0) {
  return VAR_9;
 }

 VAR_6 = FUNC_1(VAR_4);

 VAR_7 = VAR_1[VAR_6];
 while (VAR_7) {
  if (FUNC_2(VAR_4, VAR_7->str) == 0) {
   return VAR_7->str;
  }
  VAR_7 = VAR_7->next;
 }

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 + VAR_3 + 1 < VAR_0) {
  int VAR_10 = VAR_3;
  FUNC_3(&VAR_2[VAR_3], VAR_4);
  VAR_3 += VAR_5 + 1;

  VAR_7 = VAR_1[VAR_6];
  VAR_8 = VAR_7;
  while (VAR_7 && VAR_7->next) {
   VAR_8 = VAR_7;
   VAR_7 = VAR_7->next;
  }

  VAR_7 = FUNC_0(sizeof(stringDef_t));
  VAR_7->next = ((void*)0);
  VAR_7->str = &VAR_2[VAR_10];
  if (VAR_8) {
   VAR_8->next = VAR_7;
  } else {
   VAR_1[VAR_6] = VAR_7;
  }
  return &VAR_2[VAR_10];
 }
 return ((void*)0);
}
