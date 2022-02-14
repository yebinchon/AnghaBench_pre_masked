
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Zip* var ;
struct Zip {void* values; void* iters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct Zip*) ;
 size_t FUNC_1 (struct Zip*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static void FUNC_4(var VAR_2, var VAR_3) {
  struct Zip* VAR_4 = VAR_2;
  VAR_4->iters = FUNC_2(VAR_0);
  VAR_4->values = FUNC_2(VAR_0);
  FUNC_0(VAR_4->iters, VAR_3);
  for (size_t VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++) {
    FUNC_3(VAR_4->values, VAR_1);
  }
}
