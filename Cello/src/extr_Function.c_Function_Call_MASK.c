
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Function* var ;
struct Function {struct Function* (* func ) (struct Function*) ;} ;


 struct Function* FUNC_0 (struct Function*) ;

__attribute__((used)) static var FUNC_1(var VAR_0, var VAR_1) {
  struct Function* VAR_2 = VAR_0;
  return VAR_2->func(VAR_1);
}
