
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ var ;
struct GC {scalar_t__ bottom; } ;


 int FUNC_0 (struct GC*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct GC* VAR_0) {

  var VAR_1 = ((void*)0);
  var VAR_2 = VAR_0->bottom;
  var VAR_3 = VAR_1;

  if (VAR_2 == VAR_3) { return; }

  if (VAR_2 < VAR_3) {
    for (var VAR_4 = VAR_3; VAR_4 >= VAR_2; VAR_4 = ((char*)VAR_4) - sizeof(var)) {
      FUNC_0(VAR_0, *((var*)VAR_4));
    }
  }

  if (VAR_2 > VAR_3) {
    for (var VAR_5 = VAR_3; VAR_5 <= VAR_2; VAR_5 = ((char*)VAR_5) + sizeof(var)) {
      FUNC_0(VAR_0, *((var*)VAR_5));
    }
  }

}
