
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {int dummy; } ;


 struct List** FUNC_0 (struct List*,struct List*) ;
 struct List* VAR_0 ;

__attribute__((used)) static var FUNC_1(var VAR_1, var VAR_2) {
  struct List* VAR_3 = VAR_1;
  VAR_2 = *FUNC_0(VAR_3, VAR_2);
  return VAR_2 ? VAR_2 : VAR_0;
}
