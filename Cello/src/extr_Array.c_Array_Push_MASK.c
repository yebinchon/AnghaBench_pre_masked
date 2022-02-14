
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
struct Array {scalar_t__ nitems; } ;


 int FUNC_0 (struct Array*,scalar_t__) ;
 int FUNC_1 (struct Array*,scalar_t__) ;
 int FUNC_2 (struct Array*) ;
 int FUNC_3 (int ,struct Array*) ;

__attribute__((used)) static void FUNC_4(var VAR_0, var VAR_1) {
  struct Array* VAR_2 = VAR_0;
  VAR_2->nitems++;
  FUNC_2(VAR_2);
  FUNC_0(VAR_2, VAR_2->nitems-1);
  FUNC_3(FUNC_1(VAR_2, VAR_2->nitems-1), VAR_1);
}
