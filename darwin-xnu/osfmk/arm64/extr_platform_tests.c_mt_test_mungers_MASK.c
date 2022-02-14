
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct munger_test {size_t mt_nout; scalar_t__* mt_expected; int mt_name; int (* mt_func ) (scalar_t__*) ;int mt_in_words; } ;
typedef int data ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,size_t*) ;
 struct munger_test* VAR_2 ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5()
{
 uint64_t VAR_3[VAR_0];
 uint32_t VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct munger_test *VAR_6 = &VAR_2[VAR_4];
  int VAR_7 = 1;

  FUNC_1("Testing %s", VAR_6->mt_name);

  FUNC_3(VAR_6->mt_in_words, sizeof(VAR_3), (uint32_t*)VAR_3);
  VAR_6->mt_func(VAR_3);

  for (VAR_5 = 0; VAR_5 < VAR_6->mt_nout; VAR_5++) {
   if (VAR_3[VAR_5] != VAR_6->mt_expected[VAR_5]) {
    FUNC_0("Index %d: expected %llx, got %llx.", VAR_5, VAR_6->mt_expected[VAR_5], VAR_3[VAR_5]);
    VAR_7 = 0;
   }
  }
  if (VAR_7) {
   FUNC_2(VAR_6->mt_name);
  }
 }
}
