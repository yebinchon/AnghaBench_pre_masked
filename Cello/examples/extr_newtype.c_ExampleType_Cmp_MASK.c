
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ExampleType* var ;
struct ExampleType {int value; } ;


 int VAR_0 ;
 struct ExampleType* FUNC_0 (struct ExampleType*,int ) ;

__attribute__((used)) static int FUNC_1(var VAR_1, var VAR_2) {
  struct ExampleType* VAR_3 = VAR_1;
  struct ExampleType* VAR_4 = FUNC_0(VAR_2, VAR_0);
  return VAR_3->value - VAR_4->value;
}
