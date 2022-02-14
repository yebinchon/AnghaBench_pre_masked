
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct Table {scalar_t__ data; } ;


 int FUNC_0 (struct Table*) ;

__attribute__((used)) static uint64_t FUNC_1(struct Table* VAR_0, uint64_t VAR_1) {
  return *(uint64_t*)((char*)VAR_0->data + VAR_1 * FUNC_0(VAR_0));
}
