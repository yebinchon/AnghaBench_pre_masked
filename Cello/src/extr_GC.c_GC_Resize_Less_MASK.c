
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GC {size_t nslots; int nitems; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct GC*,size_t) ;

__attribute__((used)) static void FUNC_2(struct GC* VAR_0) {
  size_t VAR_1 = FUNC_0(VAR_0->nitems);
  size_t VAR_2 = VAR_0->nslots;
  if (VAR_1 < VAR_2) { FUNC_1(VAR_0, VAR_1); }
}
