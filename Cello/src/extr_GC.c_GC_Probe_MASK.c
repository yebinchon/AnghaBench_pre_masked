
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct GC {scalar_t__ nslots; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static uint64_t FUNC_0(struct GC* VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
  int64_t VAR_3 = VAR_1 - (VAR_2-1);
  if (VAR_3 < 0) {
    VAR_3 = VAR_0->nslots + VAR_3;
  }
  return VAR_3;
}
