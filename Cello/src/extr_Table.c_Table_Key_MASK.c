
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* var ;
typedef int uint64_t ;
struct Table {scalar_t__ data; } ;
struct Header {int dummy; } ;


 int FUNC_0 (struct Table*) ;

__attribute__((used)) static var FUNC_1(struct Table* VAR_0, uint64_t VAR_1) {
  return (char*)VAR_0->data + VAR_1 * FUNC_0(VAR_0) +
    sizeof(uint64_t) +
    sizeof(struct Header);
}
